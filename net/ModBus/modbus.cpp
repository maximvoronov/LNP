#include "modbus.h"

Modbus::Modbus(){

}
/*
std::string Modbus::modbus_error(enum MODBUS_EXCEPTION mbus_exception){
    switch (mbus_exception) {
       case MODBUS_EXCEPTION_ILLEGAL_FUNCTION:
           return std::string("Illegal function");
       case MODBUS_EXCEPTION_ILLEGAL_DATA_ADDRESS:
           return std::string("Illegal data address");
       case MODBUS_EXCEPTION_ILLEGAL_DATA_VALUE:
           return std::string("Illegal data value");
       case MODBUS_EXCEPTION_SLAVE_OR_SERVER_FAILURE:
           return std::string("Slave device or server failure");
       case MODBUS_EXCEPTION_ACKNOWLEDGE:
           return std::string("Acknowledge");
       case MODBUS_EXCEPTION_SLAVE_OR_SERVER_BUSY:
           return std::string("Slave device or server is busy");
       case MODBUS_EXCEPTION_NEGATIVE_ACKNOWLEDGE:
           return std::string("Negative acknowledge");
       case MODBUS_EXCEPTION_MEMORY_PARITY:
           return std::string("Memory parity error");
       case MODBUS_EXCEPTION_GATEWAY_PATH:
           return std::string("Gateway path unavailable");
       case MODBUS_EXCEPTION_GATEWAY_TARGET:
           return std::string("Target device failed to respond");
       case MODBUS_EXCEPTION_INVALID_CRC:
           return std::string("Invalid CRC");
       case MODBUS_EXCEPTION_INVALID_DATA:
           return std::string("Invalid data");
       case MODBUS_EXCEPTION_INVALID_CODE:
           return std::string("Invalid exception code");
       case MODBUS_EXCEPTION_TOO_MANY_DATA:
           return std::string("Too many data");
       case MODBUS_EXCEPTION_RESPONSE_NOT_FROM_REQUESTED_SLAVE:
           return std::string("Response not from requested slave");
           //return strerror(errnum);
       }
}
*/
int Modbus::modbus_flush(Modbus *modbus){

}


