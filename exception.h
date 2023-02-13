#ifndef IOEXCEPTION_H
#define IOEXCEPTION_H

#include <QLabel>
#include <iostream>
#include <QMessageBox>

namespace Exception
{
    class FileNotFoundException
    {
    public:
        FileNotFoundException();
        void error_open_file() const;
        void error_found_file() const;

    private:
        QLabel lbl_message;
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

};

#endif // IOEXCEPTION_H
