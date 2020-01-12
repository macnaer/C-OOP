#include <iostream>
#include "string";


using namespace std;

class Car {

public:
	virtual void Drive() {
		cout << "Drive using car." << endl;
	}
};

class Truck :public Car {
public:
	void Drive() override {
		cout << "Drive using Truck." << endl;
	}
};

class Driver {
public:
	void Drive(Car *car) {
		car->Drive();
	}
};

int main() {
	Car car;
	car.Drive();

	Truck truck;
	truck.Drive();

	Car *testCar = &truck;
	testCar->Drive();

	Driver tom;
	/*tom.Drive(&car);*/
	tom.Drive(&truck);

	system("pause");
	return 0;
}