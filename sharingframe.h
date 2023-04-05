#ifndef SHARINGFRAME_H
#define SHARINGFRAME_H

#include <QObject>
#include <QWidget>
#include <QFrame>
#include <QResizeEvent>

class SharingFrame : public QFrame
{
public:
    SharingFrame();
    Q_DISABLE_COPY(SharingFrame);
    Q_DISABLE_MOVE(SharingFrame);
protected:
    //void resizeEvent(QResizeEvent *resizeevent) override;
private:
    bool updateMask(const QSize& size);
};

#endif // SHARINGFRAME_H
