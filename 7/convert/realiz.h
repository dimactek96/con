#pragma once
enum Scale
{
Kelvin,
Celsius,
Fahrenheit
};
//double convert(double temperature,Scale from,Scale to);
Scale to_Scale(char shkal);
struct Temperature
{ Temperature(double value,char scale);
   Temperature();
  double value;
  char scale;
};
Temperature convert(Temperature t,char to);
