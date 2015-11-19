#include <E:\C++\lab3_punct7\workcplus\7\convert\realiz.h>
#include <E:\C++\lab3_punct7\workcplus\7\convert\sdt.h>
#include <conio.h>
#include <iostream>
#include <vector>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <limits>
#include <fstream>
#include <iostream>
#include <ostream>
Temperature::Temperature(double value, Scale scale)
{
    this->scale = scale;
    this->value = value;
}


Temperature::Temperature()
{
    this->value = 0;
   this->scale = Kelvin;
}


void operator>>(const std::istream& in, Temperature& t)
{
    in>>t.value>>t.scale;
    return in;
}
void operator<<(const std::ostream& out, Temperature& t)
{
    out<<t.value<<t.scale;
    return out;
}

friend void operator>>(const std::istream& in, Scale& shk);
{   char value;
    in >> value;
    switch (value)
    {
    case 'K':
    case 'k': shk = Kelvin; break;
    case 'C':
    case 'c': shk = Celsius; break;
    case 'F':
    case 'f': shk = Fahrenheit; break;
    default: in.setstate(ios_base::failbit);
     }
    return in;
}
friend void operator<<(const std::ostream& out, Scale& shk);
{   switch (shk)
    {
    case Fahrenheit: out << 'F'; break;
    case Celsius: out << 'C'; break;
    case Kelvin: out << 'K'; break;
    }
    return out;
}
