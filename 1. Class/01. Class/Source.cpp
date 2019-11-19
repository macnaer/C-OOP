#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


class Dog {
public:
	string name;
	string breed;
	unsigned short age;

	void ShowDog() {
		cout << "=====================ShowDog========================" << endl;
		cout << "Name: => " << name << "\nBreed: -> " << breed << "\nAge: -> " << age << endl;
		cout << "=====================ShowDog========================" << endl;
		PrivateShow();
	}

	void Eat(int a, int b) {
		cout << "=======================Eat===================" << endl;
		cout << name << " => Eats" << endl;
		cout << "Max = " << max(a, b) << endl;
		cout << "Min = " << min(a, b) << endl;
		cout << "=======================Eat===================" << endl;
	}
protected:

private:
	void PrivateShow() {
		cout << "Private method PrivateShow" <<endl;
	}

};

int main() {

	Dog tuzik;
	tuzik.name = "Tuzik";
	tuzik.breed = "Taxa";
	tuzik.age = 2;
	tuzik.ShowDog();
	tuzik.Eat(400, 700);

	Dog bobik;
	bobik.name = "Bobik";
	bobik.breed = "PitBull";
	bobik.age = 6;
	bobik.ShowDog();
	bobik.Eat(600,800);

	cout << "Tuzik vs Bobik (Name size = )" << max(tuzik.name, bobik.name) << endl;
	cout << "Tuzik vs Bobik (Name size = )" << min(tuzik.name, bobik.name) << endl;

	system("pause");
	return 0;
}