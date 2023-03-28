#ifndef MESSAGEBOX_H
#define MESSAGEBOX_H

#include <QWidget>
#include <QPushButton>
#include <QFrame>
#include <QHBoxLayout>
#include <QLabel>
#include <QPalette>
#include <QGroupBox>
#include <QPropertyAnimation>
#include <QGraphicsColorizeEffect>

class MessageBox : public QWidget
{
    Q_OBJECT
public:
    enum class AnimateUI{ Frame, Group, Button, Label };
    explicit MessageBox(QWidget *parent = nullptr);
    ~MessageBox();
    void animateRun(QWidget *widget, enum AnimateUI ui_widget);
public slots:
    void onClose();
signals:

private:
    QPropertyAnimation *anim = nullptr;
    QGraphicsColorizeEffect *effect = nullptr;
    QPushButton *pb_yes = nullptr, *pb_no = nullptr;
    QFrame *frame = nullptr;
    QWidget *widget = nullptr;
    QLabel *msg = nullptr;
};

#endif // MESSAGEBOX_H
