#ifndef IOEXCEPTION_H
#define IOEXCEPTION_H

#include <QLabel>
#include <iostream>
#include <QMessageBox>
#include <QSharedData>
#include <stdexcept>
#include <QException>

namespace Exception
{
    class BadMemmoryAllocationException : QException{
      public:
        void raise() const override;
    };
    class LogicErrorException: QException{
    public:
        void raise() const override;
    };
    class FileNotFoundException : QException
    {
    public:
        FileNotFoundException();
        void error_found_file() const;
        void raise() const override;
    private:
        QLabel lbl_message;
    };
    class FileOpenException{
    public:
        FileOpenException();
        void error_open_file() const;
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
