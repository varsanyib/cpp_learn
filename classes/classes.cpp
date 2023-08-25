#include <iostream>
#include <string>
#include <locale>
using namespace std;

//Osztály

class User
{
public:
	//Adattagok
	string name;
	int age;
	double heightCm;
	double heightInch;


	//Konstruktor
	User(string aName, int aAge, double aHeight)
	{
		name = aName;
		age = aAge;
		heightCm = aHeight;
		heightInch = aHeight * CMINCH;
	}
	//Destruktor
	~User()
	{
		//Csak akkor szükséges, ha elõre dinamikus változó kerül definiálásra. (pld.: new szóval új tömb kerül létrehozásra)
	}
	//Osztály függvény
	string Info() {
		return name + "-" + to_string(age) + "-" + to_string(heightCm) + "-" + to_string(heightInch);
	}
	double GetInchValue() {
		return CMINCH;
	}
private:
	//Osztály konstans
	const double CMINCH = 0.393700787;
};


int main()
{
	setlocale(LC_ALL, "");

	User user = User("Nagy István", 20, 182.5);
	cout << "Név:\t\t" << user.name << "\n\nÉletkor:\t" << user.age << "\n\nMagasság:\t" << user.heightCm << " cm\n\t\t" << user.heightInch << " inch" << endl;
	cout << endl;

	cout << user.Info() << endl;
	cout << endl;

	cout << "1 cm = " << user.GetInchValue() << " inch" << endl;
}