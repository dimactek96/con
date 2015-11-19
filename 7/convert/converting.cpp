#include <conio.h>
#include <iostream>
#include <vector>
#include <exception>
#include <stdexcept>
#include <limits>
#include <E:\C++\lab3_punct7\workcplus\7\convert\realiz.h>
//#include <E:\C++\lab3_punct7\workcplus\7\convert\sdt.h>
 #include <fstream>
using std::cout;
using std::endl;
using std::cin;
using namespace std;

//enum Scale
//{
//Kelvin,
//Celsius,
//Fahrenheit
//};
Scale to_Scale(char shkal)
{   switch (shkal)
      {case 'c':
       case 'C': return Celsius; break;
       case 'F':
       case 'f': return Fahrenheit; break;
       case 'K':
       case 'k': return Kelvin; break;
       default: throw logic_error("Ошибка ввода\n");
       }
}

Temperature convert(Temperature t,char to)
{
    double Kel;
    Temperature result;
    char from=t.scale;
    if (from==to)
    {
     result.value=t.value;
     result.scale=to;
    }
    switch(from)
    {
    case 'K':
        Kel=t.value;
        break;
    case 'C':
        Kel=t.value+273;
        break;
    case 'F':
        Kel=0.56*(t.value-32)+273;
        break;
    default:
        throw logic_error("Ошибка ввода");
        break;
    }
    if (Kel<0)
        throw invalid_argument("Температура в Кельвинах не может быть отрицательной");
    if (Kel>=0)
    {
        switch(to)
        {
        case 'C':
            result.value=(Kel-273);
            result.scale=to;
            break;
        case 'F':
            result.value=(1.8*(Kel-273)+32);
            result.scale=to;
            break;
        case 'K':
            result.value=Kel;
            result.scale=to;
            break;
        default:
            throw logic_error("Ошибка ввода");
            break;
        }
    }
    return result;
    throw exception();
}


