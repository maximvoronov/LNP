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

signals:
private:
    QGroupBox *app_module = nullptr, *develop_module = nullptr;
    QPushButton *application_module = nullptr, *development_module = nullptr;
    QPushButton *pb_box_collect = nullptr, *pb_box_tech = nullptr, *pb_box_load = nullptr, *pb_block_filter = nullptr;
    QPushButton *pb_close = nullptr;
    QPushButton *pb_block_gmds = nullptr, *pb_block_term = nullptr, *pb_robot = nullptr,
    *pb_resist = nullptr, *pb_centr_plate = nullptr, *pb_block_term_stable = nullptr;
    QVBoxLayout *vbox_container = nullptr;
    QPalette *pal = nullptr;
    QWidget *widget = nullptr;
    QFrame *main_frame = nullptr;
    QSplitter *splitter_details = nullptr, *splitter_descr = nullptr;
    QTextEdit *te_resist;
};

#endif // APPLICATIONMODULEWINDOW_H
