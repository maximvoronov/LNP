#include "exception.h"

Exception::FileNotFoundException::FileNotFoundException()
{
int n = QMessageBox::information(nullptr, "", "", QMessageBox::Ok);
}
void Exception::FileNotFoundException::error_open_file()const {

/*запись в файл настроек*/
}
void Exception::RobotException::error_breakingdown(){

}
void Exception::CleaningPlateBlock::error_cleaningplateblock(){

}
