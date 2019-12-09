#include <iostream>
#include <string>

using namespace std;

class STO;
class Car;

class STO {
	int changeOil;
	string name;
public:
	STO(string name) {
		this->name = name;
		cout << "Overload  STO Constructor: " << this << endl;
	}
	STO() {
		cout << "Default STO Constructor: " << this << endl;
	}
	friend void  ChangeOil(STO &sto, Car &car, int newPower);
};


class Car {
	friend void EditCar(Car &car);
	friend void  ChangeOil(STO &sto, Car &car, int newPower);
	string vendor;
	string model;
	string engine;
	int power;
	int price;
public:

	Car(string vendor, string model, string engine, int power, int price) {
		this->vendor = vendor;
		this->model = model;
		this->engine = engine;
		this->power = power;
		this->price = price;
		cout << "Overload constructor." << this << endl;
	}

	Car() {
		cout << "Default constructor." << this << endl;
	}

	void ShowCar() {
		cout << "Vendor: " << this->vendor << "\nModel: " << this->model << "\nEngine: " << this->engine
			<< "\nPower: " << this->power << "\nPrice: " << this->price << endl;
	}
};



void EditCar(Car &car) {
	car.engine = "Turbo Diesel";
	car.power += 35;
	car.price = 100500;
}

void ChangeOil(STO &sto, Car &car, int newPower) {
	cout << "New Power from  " << sto.name  << endl;
	sto.changeOil = newPower;
	car.power = sto.changeOil;
}


int main() {

	Car audi("Audi", "A3", "Diesel", 100, 2000);
	audi.ShowCar();
	cout << "================================" << endl;
	/*EditCar(audi);
	audi.ShowCar();*/
	cout << "**************************" << endl;
	STO sto("Makarova");
	ChangeOil(sto, audi, 120);
	audi.ShowCar();
	cout << "**************************" << endl;
	STO sto2("Bila");
	ChangeOil(sto2, audi, 3000);
	audi.ShowCar();




	system("pause");
	return 0;
}