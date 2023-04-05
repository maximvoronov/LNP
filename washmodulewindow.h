#ifndef WASHMODULEWINDOW_H
#define WASHMODULEWINDOW_H

#include <QWidget>
#include <QHBoxLayout>
#include <QPushButton>
#include <QString>
#include <brush/brush.h>
#include <hillshademodule.h>
#include <techprocess/techprocess.h>


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
    //QPushButton *сentrifuge = nullptr;

    TechProcess *process = nullptr;
    //QSharedPointer<HillShadeModule> *hillShadeModule = nullptr;



};

#endif // WASHMODULEWINDOW_H
