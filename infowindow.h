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

class LNPRWin;
class InfoWindow : public QWidget
{
    Q_OBJECT
public:
    InfoWindow(QWidget *parent = nullptr);
    ~InfoWindow();
    //void update();
    qint32 getCounter() const noexcept;
    void setCounter(qint32 counter) noexcept;
    void rotate(QTransform *transform, QPixmap *pixmap);
    void animateRun(QWidget *widget);
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
    qint32 counter = 0;
    LNPRWin *lnprwin = nullptr;
};

#endif // INFOWINDOW_H
