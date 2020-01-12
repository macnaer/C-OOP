#include <iostream>
#include "string";


using namespace std;

class Vehicles {
public:
	virtual void Drive() = 0;
	Vehicles() {
		cout << "Vehicles constructor" << endl;
	}
	virtual ~Vehicles() { // virtual destructor
		cout << "Vehicles destructor" << endl;
	}
};

class Car :public Vehicles {

public:
	void Drive() override {
		cout << "Drive using car." << endl;
	}
	Car() {
		cout << "Car constructor" << endl;
	}
	~Car() override {
		cout << "Car desctructor" << endl;
	}
};

class Truck :public Car {
public:
	void Drive() override {
		cout << "Drive using Truck." << endl;
	}

	Truck() {
		cout << "Truck constructor" << endl;
	}
	~Truck() override {
		cout << "Truck destructor" << endl;
	}
};

class Driver {
public:
	void Drive(Vehicles *vehicles){
		vehicles->Drive();
	}
};

int main() {

	/*Truck truck;

	Driver tom;
	tom.Drive(&truck);*/

	//--------------------------
	Vehicles *car = new Car;

	delete car;

	system("pause");
	return 0;
}