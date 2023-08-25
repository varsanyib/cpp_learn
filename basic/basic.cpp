#include <iostream>
#include <locale>
using namespace std; //Standard Library hozzáadása esetén az objektumok használata elõtt lehagyható a névtér. pld: std::cout helyett cout

int main()
{
    //Helyi karakterkódolás beállítása
    setlocale(LC_ALL, "");

    //C++ VERZIÓ:
    cout << "C++ verzió: " << __cplusplus << endl;

    //Kiírás egy sorba
    cout << "Teszt ";
    cout << "kiírás" << endl;

    //Kiírás külön sorba
    cout << "Teszt kiírás egyben" << endl;

    //Üres sor
    cout << endl;

    //Változó definiálása
    string nameDef = "Teszt Elek";
    int ageDef = 18;
    cout << "Üdvözöllek " << nameDef << "! Életkorod: " << ageDef << endl;

    //Stringtípus mûveletei
    cout << "Második E betû indexe: " << nameDef.find('E', 2) << endl;
    cout << "Harmadik e betû indexe: " << nameDef.find('e', 3) << endl;
    cout << "Szótag keresése: " << nameDef.find("Elek") << endl;
    cout << "Szövegrészlet kiemelése: " << nameDef.substr(1, 6) << endl;
    cout << "Szöveg hossza: " << nameDef.length() << endl;

    //Üres sor
    cout << endl;

    //Adatbekérés
    int mood;
    cout << "10-es skálán jelenleg hogyan érzed magad? ";
    cin >> mood;

    cout << "A kedved jelenleg " << mood << "/10!" << endl;

    return 0;
}