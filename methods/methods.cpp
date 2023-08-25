#include <iostream>
#include <locale>
using namespace std;

//Konstans defini�l�sa
const double KGTOLBS = 2.20462262;

//Kg to lbs konvert�l�sa f�ggv�nnyel

double ConvertKgToLbs(double kg) {
	return kg * KGTOLBS;
}

//Met�dusok haszn�lata

/// <summary>
/// �dv�zl� �zenet ki�r�sa
/// </summary>
void WelcomeMessage() {
	cout << "�dv�z�llek a gyakorl� f�zisban!" << endl;
}

// Met�dus param�terekkel

/// <summary>
/// Ki�rja a nevet �s az �letkort
/// </summary>
/// <param name="name">N�v</param>
/// <param name="age">�letkor</param>
void ShowPersonalInfo(string name, int age) {
	cout << "Neved: " << name << endl;
	cout << "�letkorod: " << age << endl;
}

// Met�dus t�lterhel�s

/// <summary>
/// Ki�rja a nevet, �letkort �s a tests�lyt is.
/// </summary>
/// <param name="name">N�v</param>
/// <param name="age">�letkor</param>
/// <param name="weight">Tests�ly kg-ban</param>
void ShowPersonalInfo(string name, int age, double weight) {
	cout << "Neved: " << name << endl;
	cout << "�letkorod: " << age << endl;
	cout << "Tests�lyod: " << weight << " kg - " << ConvertKgToLbs(weight) << " lbs" << endl;
}


int main()
{
	setlocale(LC_ALL, "");

	WelcomeMessage();

	string name = "Teszt M�rk";
	int age = 20;
	double weight = 75.7;

	ShowPersonalInfo(name, age, weight);

	cout << endl;

	ShowPersonalInfo("Nagy �rp�d", 25);

	cout << endl;

	ShowPersonalInfo("Kiss Ferenc", 39, 98.7);

	return 0;
}