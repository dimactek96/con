#include <conio.h>
#include <iostream>
#include <vector>
#include <exception>
#include <stdexcept>
#include <limits>
#include <iostream>
#include <fstream>
#include <E:\C++\lab3_punct7\workcplus\7\convert\realiz.h>
//#include <E:\C++\lab3_punct7\workcplus\7\convert\sdt.h>
using std::cout;
using std::endl;
using std::cin;
using namespace std;


enum oblzero
{
    temper=-273,
    Kelv=0,
    Fahre=-459
};
int main()
{
    vector<Temperature>t;
    Temperature inp;
    setlocale(LC_ALL,"Russian");
    while (cout<<"Введите температуру и шкалу:=",cin>>inp) //|| (cin))
    {
        try
        {

            t.push_back(convert(inp,Celsius));
            t.push_back(convert(inp,Kelvin));
            t.push_back(convert(inp,Fahrenheit));
        }

        catch(invalid_argument& e)
        {
            cerr <<e.what()<<"\n";
        }
        catch(logic_error& le)
        {
            cerr <<le.what()<<"\n";
        }
        catch(exception& e)
        {
            cerr << e.what()<<"\n";
        }
    }
    cout<<"\n";
    cout<<"\tАбсолютные значения температур:\n";
    cout<<"\tПо Цельсию не меньше "<<temper<<"\n";
    cout<<"\tПо Кельвину не меньше "<<Kelv<<"\n";
    cout<<"\tПо фаренгейту не меньше "<<Fahre<<"\n";
    cout<<"\n";
    cout<<"\t"<<"Таблица переводов"<<"\n";
    cout<<"\tCel"<<"\tKel"<<"\tFah\n";
    for (int i=0; i<(t.size()); ++i)
    {
        cout<<"\t"<<t[i];
        if ((i+1)%3==0)
            cout<<"\n";
    }
}

