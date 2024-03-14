#ifndef MODBUS_H
#define MODBUS_H
#include <stdint.h>
#include <string>
using namespace std;

class Modbus
{
public:
    enum class MODBUS_FUN_CODES { MODBUS_FC_COILS = 0x01, MODBUS_FC_READ_DISCRETE_INPUTS = 0x02,
                                MODBUS_FC_READ_HOLDING_REGISTERS = 0x03, MODBUS_FC_READ_INPUT_REGISTERS = 0x04,
                                MODBUS_FC_WRITE_SINGLE_COIL = 0x05, MODBUS_FC_WRITE_SINGLE_REGISTER = 0x06,
                                MODBUS_FC_READ_EXCEPTION_STATUS = 0x07, MODBUS_FC_WRITE_MULTIPLE_COILS = 0x0F,
                                MODBUS_FC_WRITE_MULTIPLE_REGISTERS = 0x10, MODBUS_FC_REPORT_SLAVE_ID = 0x11,
                                MODBUS_FC_MASK_WRITE_REGISTER = 0x16, MODBUS_FC_WRITE_AND_READ_REGISTERS = 0x17 };

    enum class MODBUS_EXCEPTION { MODBUS_EXCEPTION_ILLEGAL_FUNCTION = 0x10000, MODBUS_EXCEPTION_ILLEGAL_DATA_ADDRESS,
                                MODBUS_EXCEPTION_ILLEGAL_DATA_VALUE, MODBUS_EXCEPTION_SLAVE_OR_SERVER_FAILURE,
                                MODBUS_EXCEPTION_ACKNOWLEDGE, MODBUS_EXCEPTION_SLAVE_OR_SERVER_BUSY,
                                MODBUS_EXCEPTION_NEGATIVE_ACKNOWLEDGE, MODBUS_EXCEPTION_MEMORY_PARITY,
                                MODBUS_EXCEPTION_NOT_DEFINED, MODBUS_EXCEPTION_GATEWAY_PATH, MODBUS_EXCEPTION_GATEWAY_TARGET,
                                MODBUS_EXCEPTION_MAX, MODBUS_EXCEPTION_INVALID_CRC, MODBUS_EXCEPTION_INVALID_DATA,
                                MODBUS_EXCEPTION_INVALID_CODE, MODBUS_EXCEPTION_TOO_MANY_DATA,
                                MODBUS_EXCEPTION_RESPONSE_NOT_FROM_REQUESTED_SLAVE };

    enum class PARCE_QUERY : int32_t { FUNCTION, META, DATA };

    //modbus erors recovery mode
    enum class MODBUS_ERROR_RECOVERY_MODE { MODBUS_ERROR_RECOVERY_NONE = 0, MODBUS_ERROR_RECOVERY_LINK = 1, MODBUS_ERROR_RECOVERY_PROTOCOL };

    enum class MODBUS_QUIRKS { MODBUS_QUIRK_NONE = 0, MODBUS_QUIRK_MAX_SLAVE = 1, MODBUS_QUIRK_REPLY_TO_BROADCAST = 2,
                               MODBUS_QUIRK_ALL = 255 };
    explicit Modbus();

    unsigned int getLibVersionMajor() const;
    unsigned int getLibVersionMinor() const;
    unsigned int getLibVersionMicro() const;

    std::string modbus_error(enum MODBUS_EXCEPTION mbus_exception);
    int modbus_flush(Modbus *modbus = nullptr);

private:
    /*Mapping*/
    int nb_bits, start_bits, nb_input_bits, start_input_bits, nb_input_registers, start_input_registers,  \
    nb_registers, start_registers;

    uint8_t *tab_bits;
    uint8_t *tab_input_bits;
    uint8_t *tab_input_registers;
    uint8_t *tab_registers;

    //version
    const unsigned int libmodbus_version_major = 1, libmodbus_version_minor = 0, libmodbus_version_micro = 0;

};

#endif // MODBUS_H
