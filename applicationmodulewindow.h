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
signals:
private:
    QSplitter *vsplitter_content = nullptr, *vsplitter_description = nullptr;
    QGroupBox *app_module = nullptr, *develop_module = nullptr;
    QPushButton *application_module = nullptr, *development_module = nullptr;
    QPushButton *pb_termbox = nullptr, *pb_chembox = nullptr, *pb_termresist = nullptr;
    QVBoxLayout *vbox_container = nullptr;
    QPalette *pal = nullptr;
    QWidget *widget = nullptr;
    QFrame *main_frame = nullptr;
};

#endif // APPLICATIONMODULEWINDOW_H
