#include <conio.h>
#include <iostream>
#include <vector>
#include <exception>
#include <stdexcept>
#include <limits>
#include <G:\C++\lab3\punct6\convert\realiz.h>
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
        cout<<"������� ����������� :\n";
        cin>>znach_t;
        cout<<"������� ����� ��������� ����������� :\n";
        cin>>frm;
        cout<<"������� ����� � ������� ��������� ���������� :\n";
        cin>>too;
        resultat=convert(znach_t,frm,too);
        cout<<"�������� �����������="<<resultat;
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
