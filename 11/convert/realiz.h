#pragma once
#include <iostream>
#include <istream>
enum Scale:Scale
{
Kelvin,
Celsius,
Fahrenheit
};
//double convert(double temperature,Scale from,Scale to);
//Scale to_Scale(char shkal);
struct Temperature
{
    Temperature(double value,Scale scale);
   Temperature();
  double value;
   Scale scale;
};
Temperature convert(Temperature t,Scale scale);
friend void operator>>(const std::istream& in, Temperature& t);
friend void operator<<(const std::ostream& out, Temperature& t);
friend void operator>>(const std::istream& in, Scale& shk);
friend void operator<<(const std::ostream& out, Scale& shk);//���������� ������� �����.�����


//istream& operator>>(istream& in, Temperature& t);//���������� ������� �����.�����
//ostream& operator<<(ostream& out, const Temperature& t); //���������� ������� �����.������

//istream& operator>>(istream& in, Scale& s);
//ostream& operator<<(ostream& out, const Scale& s);
