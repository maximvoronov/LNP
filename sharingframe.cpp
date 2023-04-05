#include "sharingframe.h"

SharingFrame::SharingFrame()
{

}

bool SharingFrame::updateMask(const QSize& size)
{
    if(size.width() != 0 || size.height() !=0 )
    {
        const int w = frameWidth(); // ширина рамки
        const QRect r = rect(); // прямоугольник нашей рамки
        QRegion region(r); // наша маска — изначально размером во всю рамку
        region -= r.adjusted(w, w, -w, -w); // оставляем только края рамки
        //region += closeButton_->geometry(); // добавляем кнопку
        setMask(region); // устанавливаем маску
        return true;
    }
        return false;
}
