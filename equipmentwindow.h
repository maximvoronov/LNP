#ifndef EQUIPMENTWINDOW_H
#define EQUIPMENTWINDOW_H

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

class EquipmentWindow : public QWidget
{
    Q_OBJECT
public:
    explicit EquipmentWindow(QWidget *parent = nullptr);
    ~EquipmentWindow();
public slots:
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

#endif // EQUIPMENTWINDOW_H
