#ifndef INFOWINDOW_H
#define INFOWINDOW_H
#include <QObject>
#include <QWidget>
#include <QPainter>
#include <QPixmap>
#include <QFrame>
#include <QTextEdit>
#include <QPalette>
#include <QPushButton>
#include <QVBoxLayout>
#include <QImage>
#include <QPixmap>
#include <QLabel>
#include <QGraphicsColorizeEffect>
#include <QPropertyAnimation>
#include <QTransform>
#include <rxcpp/rx.hpp>

namespace rx = rxcpp;

class Brake;
class Engine;
class Sensor;
class Valve;
class Encoder;
class Fan;
class LNPRWin;
class InfoWindow : public QWidget
{
    Q_OBJECT
public:
    InfoWindow(QWidget *parent = nullptr);
    ~InfoWindow();
    friend class Brake;
    friend class Engine;
    friend class Sensor;
    friend class Valve;
    friend class Encoder;
    friend class Fan;
    friend class Bearing;
    friend class LNPRWin;

    static void onNext(int n) { std::cout << "* " << n << "\n"; }
    static void onEnd() { std::cout << "* end\n"; }

    static void onError(std::exception_ptr ep)
    {
      try { std::rethrow_exception(ep); }
      catch (std::exception& e) { std::cout << "* exception " << e.what() << '\n'; }
    }

    static void observableImpl(rx::subscriber<int> s)
    {
      s.on_next(1);
      s.on_next(2);
      s.on_completed();
    }

    //void update();
    qint32 getCounter() const noexcept;
    void setCounter(qint32 counter) noexcept;
    void rotate(QTransform *transform, QPixmap *pixmap);
    void animateRun(QWidget *widget, int nsec);
    bool getDeviceInfoData(QArrayData& arraydata);

public slots:
    void onClose();
private:
    QFrame *frame = nullptr;
    QTextEdit *tedit = nullptr;
    QPalette *pal = nullptr;
    QPushButton *b_close = nullptr;
    QVBoxLayout *vert_lay = nullptr;
    QImage *img = nullptr;
    QPixmap *pixmap = nullptr;
    QLabel *lbl_picture = nullptr;
    QTransform *transform = nullptr;
    qint32 nsec;
};

#endif // INFOWINDOW_H
