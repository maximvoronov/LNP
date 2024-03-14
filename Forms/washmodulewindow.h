#ifndef WASHMODULEWINDOW_H
#define WASHMODULEWINDOW_H

#include <QWidget>
#include <QHBoxLayout>
#include <QPushButton>
#include <QFrame>
#include <QGroupBox>
#include <QString>
#include <MechLIB/brush/brush.h>
#include <Modules/HillShadeModule/hillshademodule.h>
#include <techprocess/techprocess.h>
#include <QSplitter>

class WashModuleWindow : public QWidget
{
    Q_OBJECT
public:
    explicit WashModuleWindow(QWidget *parent = nullptr);
    ~WashModuleWindow();
    bool animateUI();

signals:
private:
    QHBoxLayout *hlay = nullptr;
    QPushButton *centrifuge = nullptr;
    QWidget *widget = nullptr;
    TechProcess *process = nullptr;
    QFrame *main_frame = nullptr;
    QGroupBox *gbox = nullptr;
    QSplitter *splitter_details = nullptr;
    //QSharedPointer<HillShadeModule> *hillShadeModule = nullptr;

};

#endif // WASHMODULEWINDOW_H
