#include <conio.h>
#include <iostream>
#include <vector>
#include <exception>
#include <stdexcept>
#include <limits>
#include <E:\C++\lab3\workcplus\convert\realiz.h>
using std::cout;
using std::endl;
using std::cin;
using namespace std;
int main()
{
    try
    {
        setlocale(LC_ALL,"Russian");
        double znach_t,resultat;
        char frm,too;
        cout<<"¬ведите температуру :\n";
        cin>>znach_t;
        cout<<"¬ведите шкалу введенной температуры :\n";
        cin>>frm;
        cout<<"¬ведите шкалу в которую перевести тепературу :\n";
        cin>>too;
        resultat=convert(znach_t,frm,too);
        cout<<"«начение температуры="<<resultat;
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
