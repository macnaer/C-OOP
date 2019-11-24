#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string name;
	string surname;
	unsigned short age;
	unsigned int personID;
	static int counter;

public:

	Person(string name, string surname, int age) {
		this->name = name;
		this->surname = surname;
		this->age = age;
		this->counter++;
		this->personID = this->counter;
		cout << "Default constructor!" << endl;
	}

	int GetPID() {
		return this->personID;
	}

	void ShowPerson() {
		cout << "Name: " << this->name << "\nSurname: " << this->surname << "\nAge: " << this->age
			<< "\nPerson count: " << this->counter << endl;
	}

	static int GetCounter() {
		return counter;
	}

	static void Rename(Person &person, string name) {
		person.name = name;
	}
};

int Person::counter = 0;

int main() {

	Person pers("Bill", "Huston", 69);
	pers.ShowPerson();
	cout << "Person ID: " << pers.GetPID() << endl;;

	//Person::counter = 100500; // public static

	Person pers1("Richerd", "Hurton", 39);
	pers1.ShowPerson();
	cout << "Person ID: " <<  pers1.GetPID() << endl;

	cout << "Person count =>>> "  <<Person::GetCounter() << endl;

	Person::Rename(pers1, "Gordon");
	pers1.ShowPerson();





	system("pause");
	return 0;
}