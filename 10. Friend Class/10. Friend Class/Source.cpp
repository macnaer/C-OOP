#include <iostream>
#include <string>

using namespace std;

class Car;
class CarService;

class CarService {
	string name;
	string address;
	int newCarPower;
public:
	void ShowCarService() {
		cout << "Name: " << this->name << "\nAddress: " << this->address << endl;
	}
	CarService(string name, string address) {
		this->name = name;
		this->address = address;
		cout << "Overload CarService constructor. " << this << endl;
	}

	void DoService(CarService &cs, Car &car, int newPower);
};


class Car {
	friend CarService;
	string model;
	string vendor;
	string engine;
	int power;
public:
	Car(string vendor, string model, string engine, int power) {
		this->vendor = vendor;
		this->model = model;
		this->engine = engine;
		this->power = power;
		cout << "Overload Car constructor: " << this << endl;
	}
	void ShowCar() {
		cout << "Vendor: " << this->vendor << "\nModel: " << this->model << "\nEngine: " << this->engine
			<< "\nPower: " << this->power << endl;
	}
};


void CarService::DoService(CarService &cs, Car &car, int newPower)
{
	cs.newCarPower = newPower;
	car.power = cs.newCarPower;
}

int main() {

	Car modelX("Tesla", "ModelX", "Electro", 120);
	modelX.ShowCar();
	CarService station("MegaSTO", "Soborna str.");
	station.ShowCarService();

	station.DoService(station, modelX, 140);
	modelX.ShowCar();




	system("pause");
	return 0;
}

