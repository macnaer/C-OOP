#include <iostream>
#include <string>

using namespace std;

template <typename T1>
class Car {
	string vendor;
	string model;
	T1 fuel;

public:
	Car(string vendor, string model, T1 fuel) {
		this->vendor = vendor;
		this->model = model;
		this->fuel = fuel;
	}
	T1  GetFuel() {
		return this->fuel;
	}
	void ShowCar() {
		cout << "Vendor: " << this->vendor << "\nModel: " << this->model << "\nFuel / 100km: " << this->fuel << endl;
	}
};

template <typename T>
class Fuel {
	T fuel;
public:
	Fuel(T fuel = 10) {
		this->fuel;
	};
	T GetFuel(){
		return this->fuel;
	}
};

int main() {

	Car<double>  mustang("Ford", "Mustang", 3.8);
	mustang.ShowCar();
	cout << mustang.GetFuel() << endl;



	system("pause");
	return 0;
}