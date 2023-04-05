#ifndef APPLICATIONMODULEWINDOW_H
#define APPLICATIONMODULEWINDOW_H

#include <QWidget>
#include <QFrame>
#include <QSplitter>
#include <QStackedLayout>
#include <QStackedWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QPalette>
#include <QRect>
#include <QGroupBox>
#include <QSplitter>
#include <QGridLayout>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QMouseEvent>
#include "messagebox.h"
#include <sensor/sensormessages.h>

class MessageBox;
/*Окно: Модуль нанесения*/
class ApplicationModuleWindow : public QWidget
{
    Q_OBJECT
public:
    explicit ApplicationModuleWindow(QWidget *parent = nullptr);
    ~ApplicationModuleWindow();
public
    slots:
    void onClose();
    void onTechBox();
protected:
    void mouseMoveEvent(QMouseEvent *event) override;
signals:
private:
    QGroupBox *app_module = nullptr, *develop_module = nullptr;
    QPushButton *application_module = nullptr, *development_module = nullptr;
    QPushButton *pb_box_tech = nullptr, *pb_box_collect = nullptr, *pb_box_load = nullptr, *pb_block_filter = nullptr;
    QPushButton *pb_close = nullptr;
    QPushButton *pb_block_gmds = nullptr, *pb_block_term = nullptr, *pb_robot = nullptr,
    *pb_resist = nullptr, *pb_centr_plate = nullptr, *pb_block_term_stable = nullptr;
    QVBoxLayout *vbox_container = nullptr;
    QPalette *pal = nullptr;
    QWidget *widget = nullptr;
    QFrame *main_frame = nullptr;
    QSplitter *splitter_details = nullptr, *splitter_descr = nullptr;
    QTextEdit *te_resist;
    QGroupBox *gbox = nullptr, *gbox_equipment = nullptr;
    QVBoxLayout *vbox = nullptr;
    QGridLayout *gridbox = Q_NULLPTR;
    QPushButton *block_promo_adgesia = nullptr, *block_term = nullptr, *robot = nullptr,
    *block_resist = nullptr, *block_center = nullptr, *block_term_stable = nullptr, *tech_process = nullptr;
    MessageBox *msgbox = nullptr;
    SensorMessages *sm = nullptr;
};

#endif // APPLICATIONMODULEWINDOW_H
