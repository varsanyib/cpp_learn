#include <iostream>
#include <string>
#include <locale>
using namespace std;

//Oszt�ly

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
		//Csak akkor sz�ks�ges, ha el�re dinamikus v�ltoz� ker�l defini�l�sra. (pld.: new sz�val �j t�mb ker�l l�trehoz�sra)
	}
	//Oszt�ly f�ggv�ny
	string Info() {
		return name + "-" + to_string(age) + "-" + to_string(heightCm) + "-" + to_string(heightInch);
	}
	double GetInchValue() {
		return CMINCH;
	}
private:
	//Oszt�ly konstans
	const double CMINCH = 0.393700787;
};


int main()
{
	setlocale(LC_ALL, "");

	User user = User("Nagy Istv�n", 20, 182.5);
	cout << "N�v:\t\t" << user.name << "\n\n�letkor:\t" << user.age << "\n\nMagass�g:\t" << user.heightCm << " cm\n\t\t" << user.heightInch << " inch" << endl;
	cout << endl;

	cout << user.Info() << endl;
	cout << endl;

	cout << "1 cm = " << user.GetInchValue() << " inch" << endl;
}