#ifndef MODBUS_RTU_H
#define MODBUS_v_H
#include <string>
#include <stdlib.h>
#include <errno.h>
#include <winsock2.h>
#include <ws2tcpip.h>

enum class MODBUS_RTU { RTC_NONE, RTS_UP, RTS_DOWN };
enum class MODBUS_MODE { RS232 = 0, RS485 = 1 };

class Modbus_RTU
{
public:
    Modbus_RTU();
    int ModbusRtuSetSerialMode(Modbus_RTU* modbus, enum MODBUS_MODE mode);
    int ModbusRtuGetSerialMode(Modbus_RTU* modbus, enum MODBUS_MODE mode);
    Modbus_RTU* modbus_new_rtu(std::string device, int baud, char parity, int data_bit, int stop_bit);
    const int modbus_RTU_MAX_ADU_LENGTH = 256;

    #ifdef OS_WIN32
        WSADATA wsaData;
        static int _modbus_tcp_init_win32(void){
            if(WSAStartup(MAKEWORD(2,2), &WSAData)!=0){
            }
        }
    #endif
private:
        uint8_t req;
        Modbus_RTU *modbus_tru = nullptr;
};

#endif // MODBUS_RTU_H
