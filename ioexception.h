#ifndef IOEXCEPTION_H
#define IOEXCEPTION_H

#include <QLabel>
#include <iostream>

class IOException
{
public:
    IOException();
    void error_open_file() const;
private:
    QLabel lbl_message;
};

#endif // IOEXCEPTION_H
