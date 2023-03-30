#ifndef POPUP_H
#define POPUP_H

#include <QWidget>
#include <QApplication>
#include <QLabel>
#include <QGridLayout>
#include <QPropertyAnimation>
#include <QTimer>
#include <QPainter>
#include <QScreen>
#include <QGuiApplication>

class PopUp : public QWidget
{
    Q_OBJECT
public:
    explicit PopUp(QWidget *parent = nullptr);
    Q_PROPERTY(float popupOpacity READ getPopupOpacity WRITE setPopupOpacity)

    void setPopupOpacity(float opacity);
    float getPopupOpacity() const;

protected:
    void paintEvent(QPaintEvent *event);    // The background will be drawn through the redraw method

public slots:
    void setPopupText(const QString& text); // Setting text notification
    void show();                            /* own widget displaying method
                                             * It is necessary to pre-animation settings
                                             * */
private slots:
    void hideAnimation();                   // Slot start the animation hide
    void hide();                            /* At the end of the animation, it is checked in a given slot,
                                             * Does the widget visible, or to hide
                                             * */
private:
    QLabel label;
    QGridLayout layout;
    QPropertyAnimation animation;
    float popupOpacity;
    QTimer *timer;
};

#endif // POPUP_H
