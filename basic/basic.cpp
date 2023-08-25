#include <iostream>
#include <locale>
using namespace std; //Standard Library hozz�ad�sa eset�n az objektumok haszn�lata el�tt lehagyhat� a n�vt�r. pld: std::cout helyett cout

int main()
{
    //Helyi karakterk�dol�s be�ll�t�sa
    setlocale(LC_ALL, "");

    //C++ VERZI�:
    cout << "C++ verzi�: " << __cplusplus << endl;

    //Ki�r�s egy sorba
    cout << "Teszt ";
    cout << "ki�r�s" << endl;

    //Ki�r�s k�l�n sorba
    cout << "Teszt ki�r�s egyben" << endl;

    //�res sor
    cout << endl;

    //V�ltoz� defini�l�sa
    string nameDef = "Teszt Elek";
    int ageDef = 18;
    cout << "�dv�z�llek " << nameDef << "! �letkorod: " << ageDef << endl;

    //Stringt�pus m�veletei
    cout << "M�sodik E bet� indexe: " << nameDef.find('E', 2) << endl;
    cout << "Harmadik e bet� indexe: " << nameDef.find('e', 3) << endl;
    cout << "Sz�tag keres�se: " << nameDef.find("Elek") << endl;
    cout << "Sz�vegr�szlet kiemel�se: " << nameDef.substr(1, 6) << endl;
    cout << "Sz�veg hossza: " << nameDef.length() << endl;

    //�res sor
    cout << endl;

    //Adatbek�r�s
    int mood;
    cout << "10-es sk�l�n jelenleg hogyan �rzed magad? ";
    cin >> mood;

    cout << "A kedved jelenleg " << mood << "/10!" << endl;

    return 0;
}