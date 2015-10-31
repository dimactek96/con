#include <conio.h>
#include <iostream>
#include <vector>
#include <exception>
#include <stdexcept>
#include <limits>
using std::cout;
using std::endl;
using std::cin;
using namespace std;
double convert(double temperature,char from,char to )
{
    double Kel,Far,t;
    if ((from==to && from!='C' && from!='K' && from!='F') || (to!='C' && to!='K' && to!='F'))
        throw logic_error("Ошибка ввода");

    if (from=='C' && to=='K')
    {
        Kel=temperature+273;
        return Kel;
    }
    else if (Kel<0)
        throw invalid_argument("Температура в Кельвинах не может быть отрицательной");
    if (from=='C' && to=='F')
    {
        Far=(temperature*1.8)+32;
        return Far;
    }

    if (from=='K' && to=='C')
        if (temperature>=0)
        {
            t=temperature-273;
            return t;
        }
        else
            throw invalid_argument("Температура в Кельвинах не может быть отрицательной");
    if (from=='K' && to=='F')
        if (temperature>=0)
        {
            t=temperature-273;
            Far=(t-32)/1.8;
            return Far;
        }
        else
            throw invalid_argument("Температура в Кельвинах не может быть отрицательной");

    if (from=='F' && to=='C')
    {
        t=(temperature-32)/1.8;
        return t;
    }

    if (from=='F' && to=='K')
    {
        t=(temperature-32)/1.8;
        Kel=t+273;
        return Kel;
    }
    else if (Kel<0)
        throw invalid_argument("Температура в Кельвинах не может быть отрицательной");
}
