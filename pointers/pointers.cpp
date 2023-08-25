#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    string name = "Eszet Lenke";
    int age = 25;

    cout << "Név: " << name << ", életkor: " << age << endl;
    cout << endl;

    //Változók memóriacímének eltárolása
    string* pName = &name;
    int* pAge = &age;

    cout << "A név a(z) " << pName << " memóriacímen került eltárolásra!" << endl;
    cout << "Az életkor a(z) " << pAge << " memóriacímen került eltárolásra!" << endl;
    cout << endl;

    //Memóriacím kiolvasása visszafelé (gyorsabb adatfeldolgozás)
    cout << "A(z) " << pName << " memóriacímen eltárolt illetõ neve: " << *pName << endl;
    cout << "A(z) " << pAge << " memóriacímen eltárolt illetõ életkora: " << *pAge << endl;
    cout << endl;
}