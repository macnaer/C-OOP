#include <iostream>
#include <string>

using namespace std;


class CarService;
class Car;


class CarService {
	string name;
	string address;
	
public:
	CarService(string name, string address) {
		this->name = name;
		this->address = address;
		cout << "Overload CarService constructor: " << this << endl;
	}
	void ChangeOil(Car &car, int newOilProfit);
};

class Car {
	friend CarService;
	string vendor;
	string model;
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

void CarService::ChangeOil(Car &car, int newOilProfit) {
	car.power = (newOilProfit / 2);
}

int main() {

	Car audi("Audi", "A3", "TDI", 100);
	CarService sto("SuperService", "Bila");
	audi.ShowCar();
	sto.ChangeOil(audi, 40);
	audi.ShowCar();
	system("pause");
	return 0;
}