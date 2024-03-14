#ifndef IOEXCEPTION_H
#define IOEXCEPTION_H

#include <QLabel>
#include <iostream>
#include <QMessageBox>
#include <QSharedData>
#include <MechLIB/sensor/sensormessages.h>
#include <QException>
#include <QString>
#include <QByteArray>

namespace Exception
{
    class ErrorReadDataException : QException
    {
    public:
        void raise() const override;
    };
    class NullPointerException :QException
    {
    public:
        void raise() const override;
    };

    class FileNotFoundException
    {
    public:
        FileNotFoundException();
        void error_found_file() const;
    private:
        QLabel lbl_message;
    };
    class FileOpenException{
    public:
        FileOpenException();
        void error_open_file(){
            std::cout << "error open file\n";
        }
    };

    class ThermoBlock : QException{
        enum class ThermoBlockExceptionType : unsigned char { NIDDLE_UP_EXCEPTION, NIDDLE_DOWN_EXCEPTION, HEAT_RUN_EXCEPTION, HEAT_DOWN_EXCEPTION };
        public:
        void raise() const override;
    private:
        bool putException(enum ThermoBlockExceptionType type, QString string);
    };

    class RobotException{
    public:
        RobotException();
        void error_breakingdown();

    };
    class CleaningPlateBlock{
    public:
        CleaningPlateBlock();
        void error_cleaningplateblock();
    };
    //QSharedData RobotData;
};

#endif // IOEXCEPTION_H
