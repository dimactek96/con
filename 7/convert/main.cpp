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
    Temperature in;
    in=Temperature();
   // char C='C',K='K',F='F';
    setlocale(LC_ALL,"Russian");
    while (cout<<"Введите температуру и шкалу:=",cin>>in.value>>in.scale) //|| (cin))
    {
        try
        {

            t.push_back(convert(in,'C'));
            t.push_back(convert(in,'K'));
            t.push_back(convert(in,'F'));
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
        cout<<"\t"<<t[i].value;
        if ((i+1)%3==0)
            cout<<"\n";
    }
}

