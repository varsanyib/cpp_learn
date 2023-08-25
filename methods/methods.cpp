#include <iostream>
#include <locale>
using namespace std;

//Konstans definiálása
const double KGTOLBS = 2.20462262;

//Kg to lbs konvertálása függvénnyel

double ConvertKgToLbs(double kg) {
	return kg * KGTOLBS;
}

//Metódusok használata

/// <summary>
/// Üdvözlõ üzenet kiírása
/// </summary>
void WelcomeMessage() {
	cout << "Üdvözöllek a gyakorló fázisban!" << endl;
}

// Metódus paraméterekkel

/// <summary>
/// Kiírja a nevet és az életkort
/// </summary>
/// <param name="name">Név</param>
/// <param name="age">Életkor</param>
void ShowPersonalInfo(string name, int age) {
	cout << "Neved: " << name << endl;
	cout << "Életkorod: " << age << endl;
}

// Metódus túlterhelés

/// <summary>
/// Kiírja a nevet, életkort és a testsúlyt is.
/// </summary>
/// <param name="name">Név</param>
/// <param name="age">Életkor</param>
/// <param name="weight">Testsúly kg-ban</param>
void ShowPersonalInfo(string name, int age, double weight) {
	cout << "Neved: " << name << endl;
	cout << "Életkorod: " << age << endl;
	cout << "Testsúlyod: " << weight << " kg - " << ConvertKgToLbs(weight) << " lbs" << endl;
}


int main()
{
	setlocale(LC_ALL, "");

	WelcomeMessage();

	string name = "Teszt Márk";
	int age = 20;
	double weight = 75.7;

	ShowPersonalInfo(name, age, weight);

	cout << endl;

	ShowPersonalInfo("Nagy Árpád", 25);

	cout << endl;

	ShowPersonalInfo("Kiss Ferenc", 39, 98.7);

	return 0;
}