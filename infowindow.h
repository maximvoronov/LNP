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

class InfoWindow : public QWidget
{
    Q_OBJECT
public:
    InfoWindow(QWidget *parent = nullptr);
    void update();
public slots:
    void onClose();
protected:
    void paintEvent(QPaintEvent *pevent);
private:
    QFrame *frame = nullptr;
    QTextEdit *tedit = nullptr;
    QPalette *pal = nullptr;
    QPushButton *b_close = nullptr;
    QVBoxLayout *vert_lay = nullptr;
    QImage *img = nullptr;
};

#endif // INFOWINDOW_H
