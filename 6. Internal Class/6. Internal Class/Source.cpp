#include <iostream>
#include <string>

using namespace std;

class Train {
public:
	Train() {
		cout << "Default train constructor." << endl;
	}
	Train(string route, int distance, string type, int passengers) {
		this->route = route;
		this->distance = distance;
		this->car = Car(type, passengers);
		cout << "Overload train constructor." << endl;
	}
	void ShowTrain() {
		cout << "Route: " << this->route << "\nDistance: " << this->distance << endl;
		this->car.ShowCar();
	}
private:

	class Car {
	private:
		string type;
		int passengers;
	public:
		Car() {
			cout << "Default car constructor. " << endl;
		}
		Car(string type, int passengers) {
			this->type = type;
			this->passengers = passengers;
			cout << "Overload car constructor. " << endl;
		}
		void ShowCar() {
			cout << "Type: " << this->type << "\nPassengers: " << this->passengers << endl;
		}
		

	};


	string route;
	int distance;
	Car car;
};

int main() {

	/*Train polissya("Rivne - Lviv", 210, "Lux", 200);
	polissya.ShowTrain();*/

	const int SIZE = 3;


	Train trains[SIZE]{
		Train("Rivne - Lviv", 210, "Lux", 200),
		Train("Charkiv - Uzgorod", 1110, "Lux", 210),
		Train("Kyiv - Odessa ", 610, "DeLux", 400)
	};

	for (int i = 0; i < SIZE; i++) {
		trains[i].ShowTrain();
	}



	system("pause");
	return 0;
}