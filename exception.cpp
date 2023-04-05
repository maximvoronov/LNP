#include "exception.h"

/*
void Exception::A::getS(){
    QString s = this->SensorOn();
}
*/

void Exception::ErrorReadDataException::raise()const{
    std::cout << "Ошибка чтения данных настроек";
    throw *this;
}
void Exception::ThermoBlock::raise() const{
    //ThermoBlock::putException(type, string);
    throw *this;
}

bool Exception::ThermoBlock::putException(enum ThermoBlockExceptionType type, QString string){
    QByteArray ba;
    switch(type){
    case ThermoBlockExceptionType::HEAT_RUN_EXCEPTION:
        ba.append(static_cast<unsigned char>(type));
        string.append(new QString(ba));
        return true;
        break;
    case ThermoBlockExceptionType::HEAT_DOWN_EXCEPTION:
        ba.append(static_cast<unsigned char>(type));
        string.append(new QString(ba));
        return true;
        break;
    case ThermoBlockExceptionType::NIDDLE_UP_EXCEPTION:
        ba.append(static_cast<unsigned char>(type));
        string.append(new QString(ba));
        return true;
        break;
    case ThermoBlockExceptionType::NIDDLE_DOWN_EXCEPTION:
        ba.append(static_cast<unsigned char>(type));
        string.append(new QString(ba));
        return true;
        break;
    }
    return false;
}

Exception::FileNotFoundException::FileNotFoundException()
{
int n = QMessageBox::information(nullptr, "", "", QMessageBox::Ok);
}
void Exception::FileNotFoundException::error_found_file() const {

/*запись в файл настроек*/
}
void Exception::RobotException::error_breakingdown(){

}
void Exception::CleaningPlateBlock::error_cleaningplateblock(){

}
