#include <iostream>
#include <string>

using namespace std;

class Fuel {

private:
	string fuel = "Diesel";

public:
	string GetFuel() {
		return this->fuel;
	}
};

class Car {
public: 
	void Drive() {
		engine.Drive();
	}

	void GasStation() {
		cout << "Get fuel " << fuel.GetFuel() << endl;
	}
private:
	class Engine {
	public:
		void Drive() {
			cout << "Drive ..." << endl;
		}
	};

	Engine engine;
	Fuel fuel;
};



int main() {

	Car car;
	car.Drive();
	car.GasStation();
	

	system("pause");
	return 0;
}