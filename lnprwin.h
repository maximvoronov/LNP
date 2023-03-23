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
#include <QFrame>
#include <QPainter>
#include <QPainterPath>
#include <QPaintEvent>
#include <QLabel>
#include <QGraphicsColorizeEffect>
#include <QPropertyAnimation>
#include <QKeyEvent>
#include <QKeyEvent>
#include <QCloseEvent>
#include <infowindow.h>
#include <QProgressBar>
#include <QSettings>
#include <QGuiApplication>
#include <QScreen>
#include <systemtray.h>
#include <robot.h>
#include <QPixmap>
#include <preparationmodule.h>
#include <equipmentwindow.h>
#include <applicationmodulewindow.h>

class LNPRWin : public QWidget
{
    Q_OBJECT
public:
    enum class AnimateUI{ Frame, Group, Button };
    LNPRWin(QWidget *parent = nullptr);
    ~LNPRWin();
    bool readSettingsBar();
    void writeSettings(QSettings* filename, QString group, QString name, int value);
    int readSettings(QSettings* filename, QString group, QString name, int value);
    void initEquipment();
    //void paintEvent(QPaintEvent *event) override;
    void animateRun(QWidget *widget, enum AnimateUI ui_widget);
    void keyPressEvent(QKeyEvent *event) override;
    void closeEvent(QCloseEvent *event) override;
public
    slots:
    void onInfoWindow();
    void onEquipmentWindow();
    void onApplicationModuleWindow();
    void onExit();
private:
    QGroupBox *gbox = nullptr, *gbox_service = nullptr;
    QPalette pal;
    QFrame *main_frame = nullptr, *additional_frame=nullptr;
    QFile *style_desc = nullptr;
    QVBoxLayout *vboxL = nullptr, *vboxR = nullptr;
    QHBoxLayout *hbox_msg_info = nullptr, *hbox_msg_mech = nullptr;
    QHBoxLayout *hbox = nullptr, *hbox_service = nullptr;
    QHBoxLayout *hbox_adgesia = nullptr, *hbox_term = nullptr, *hbox_robot, *hbox_put_resist = nullptr, *hbox_centr = nullptr, *hbox_term_stand = nullptr;
    QLabel *msg_info = nullptr, *msg_mech = nullptr;
    QPushButton *module_app = nullptr, *module_wash = nullptr, *module_dev = nullptr, *block_filter = nullptr, *box_chem_wash = nullptr;
    QPushButton *b_mech = nullptr, *b_sensors = nullptr, *b_info = nullptr, *b_exit = nullptr;
    QPixmap *pix = nullptr;
    QFrame *message_frame = nullptr, *tech_process_frame = nullptr, *service_frame = nullptr, *block_frame = nullptr;
    QLabel *lbl_adgesia = nullptr, *lbl_term = nullptr, *lbl_robot = nullptr, *lbl_put_resist = nullptr, *lbl_centr = nullptr, *lbl_term_stand = nullptr;
    QFrame *frame_adgesia = nullptr, *frame_term = nullptr, *frame_robot = nullptr,  *frame_put_resist = nullptr, *frame_centr = nullptr, *frame_temr_stand = nullptr;
    QPropertyAnimation *anim = nullptr;
    QGraphicsColorizeEffect *effect = nullptr;
    InfoWindow *infowin = nullptr;
    QProgressBar *progress = nullptr;
    QSettings *tech_settings = nullptr, *system_settings = nullptr;
    LNPRWin* lnprwin = nullptr;
    SystemTray *systray = nullptr;
    std::shared_ptr<Robot> robot;
    QPixmap *robot_pixmap = nullptr, *chem_block_pixmap = nullptr;
    std::shared_ptr<PreparationModule> p_preparationModule;
    EquipmentWindow *ew = nullptr;
    ApplicationModuleWindow *aw = nullptr;
};

#endif // LNPRWIN_H
