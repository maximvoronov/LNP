#include "exception.h"

Exception::IOException::IOException()
{

}
void Exception::IOException::error_open_file() const{
    std::cout << "error open file";
/*запись в файл настроек*/
}
void Exception::RobotException::error_breakingdown(){

}
void Exception::CleaningPlateBlock::error_cleaningplateblock(){

}
