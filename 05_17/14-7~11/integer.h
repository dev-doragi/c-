/**************************************************************
 * Integer Ŭ������ �������̽� ����                           *
 **************************************************************/
#ifndef INTEGER_H
#define INTEGER_H
#include "sp.h"

 // Integer Ŭ������ ����
class Integer
{
private:
    SP sp;
public:
    Integer(int value);
    ~Integer();
    int getValue();
};
#endif