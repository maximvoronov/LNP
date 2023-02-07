#ifndef LNPRWIN_H
#define LNPRWIN_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QFile>
#include <QPixmap>
#include <QPalette>
#include <QRect>
#include <QGroupBox>
#include <QPainter>
#include <QHBoxLayout>
#include <QTouchEvent>
#include <QTouchDevice>
#include <QKeyEvent>
#include <QFrame>
#include <QPainter>
#include <QPainterPath>
#include <QPaintEvent>
#include <QLabel>

class LNPRWin : public QWidget
{
    Q_OBJECT
public:
    LNPRWin(QWidget *parent = nullptr);
    ~LNPRWin();
    int getWindowWidth() const;
    int getWindowHeight() const;
    void setWindowWidth(int width);
    void setWindowHeight(int height);
    void paintEvent(QPaintEvent *event) override;
    void animateRun(QFrame *widget);

private:
    QGroupBox *gbox = nullptr, *gbox_service = nullptr;
    QPalette pal;
    QFile *style_desc = nullptr;
    QVBoxLayout *vboxL = nullptr, *vboxR = nullptr;
    QHBoxLayout *hbox_msg_info = nullptr, *hbox_msg_mech = nullptr;
    QHBoxLayout *hbox = nullptr, *hbox_service = nullptr;
    QHBoxLayout *hbox_adgesia = nullptr, *hbox_term = nullptr, *hbox_robot, *hbox_put_resist = nullptr, *hbox_centr = nullptr, *hbox_term_stand = nullptr;
    QLabel *msg_info = nullptr, *msg_mech = nullptr;
    QPushButton *box_loadcollect_r = nullptr, *box_tech = nullptr, *box_updown_load = nullptr, *block_filter = nullptr;
    QPushButton *b_mech = nullptr, *b_sensors = nullptr, *b_info = nullptr;
    QPixmap *pix = nullptr;
    QFrame *message_frame = nullptr, *tech_process_frame = nullptr, *service_frame = nullptr, *block_frame = nullptr;
    QLabel *lbl_adgesia = nullptr, *lbl_term = nullptr, *lbl_robot = nullptr, *lbl_put_resist = nullptr, *lbl_centr = nullptr, *lbl_term_stand = nullptr;
    QFrame *frame_adgesia = nullptr, *frame_term = nullptr, *frame_robot = nullptr,  *frame_put_resist = nullptr, *frame_centr = nullptr, *frame_temr_stand = nullptr;

private:
    int width, height;
};
#endif // LNPRWIN_H
