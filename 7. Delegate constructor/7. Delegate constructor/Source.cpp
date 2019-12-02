#include <iostream>
#include <string>

using namespace std;

class Cat {
	string name;
	string bread;
	unsigned short age;
	string color;

public:
	Cat(string name) {
		this->name = name;
		this->bread = "Brit";
		this->age = 0;
		this->color = "Black";
	}

	Cat(string name, string bread): Cat(name) {
		this->bread = bread;
	}

	Cat(string name, string bread, short age) : Cat(name, bread) {
		this->age = age;
	}

	Cat(string name, string bread, short age, string color) : Cat(name, bread, age) {
		this->color = color;
	}

	void ShowCat() {
		cout << "Name: " << this->name << "\nBreed: " << this->bread << "\nAge: " << this->age << "\nColor: " << this->color << endl;
	}
};

int main() {

	Cat murzik("Murzik", "Pers",3, "White");
	murzik.ShowCat();



	system("pause");
	return 0;
}