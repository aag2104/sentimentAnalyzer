#include "Ratio.h"

Ratio::Ratio()
{
    num = 0; 
    denom = 0;
    calculation = 0;
}

Ratio::Ratio(int one, int two, double three)
{
    num = one;
    denom = two;
    calculation = three;
}

double Ratio::calculate()
{
    calculation = num/denom;
    return calculation;
}

int Ratio::getNum()
{
    return num;
}

int Ratio::getDenom()
{
    return denom;
}

void Ratio::setNum(int newNum)
{
    num = newNum;
}

void Ratio::setDenom(int newDenom)
{
    denom = newDenom;
}

double Ratio::getCalc()
{
    return calculation;
}

void Ratio::setCalc(double newCalc)
{
    calculation = newCalc;
}
