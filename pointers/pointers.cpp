#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    string name = "Eszet Lenke";
    int age = 25;

    cout << "N�v: " << name << ", �letkor: " << age << endl;
    cout << endl;

    //V�ltoz�k mem�riac�m�nek elt�rol�sa
    string* pName = &name;
    int* pAge = &age;

    cout << "A n�v a(z) " << pName << " mem�riac�men ker�lt elt�rol�sra!" << endl;
    cout << "Az �letkor a(z) " << pAge << " mem�riac�men ker�lt elt�rol�sra!" << endl;
    cout << endl;

    //Mem�riac�m kiolvas�sa visszafel� (gyorsabb adatfeldolgoz�s)
    cout << "A(z) " << pName << " mem�riac�men elt�rolt illet� neve: " << *pName << endl;
    cout << "A(z) " << pAge << " mem�riac�men elt�rolt illet� �letkora: " << *pAge << endl;
    cout << endl;
}