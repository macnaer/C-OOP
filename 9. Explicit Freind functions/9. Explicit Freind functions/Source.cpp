#include <iostream>
#include <string>

using namespace std;

class Car {
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

	friend void EditCar(Car &car);
};

void EditCar(Car &car) {
	car.engine = "Edited engine";
	car.price = 100500;
}

int main() {

	Car audi("Audi", "A3", "Diesel", 100, 2000);
	audi.ShowCar();
	
	EditCar(audi);
	audi.ShowCar();



	system("pause");
	return 0;
}