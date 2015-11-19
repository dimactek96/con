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
Temperature::Temperature(double value, char scale)
{
    this->scale = scale;
    this->value = value;
}


Temperature::Temperature()
{
    this->value = 0;
   this->scale = Kelvin;
}
