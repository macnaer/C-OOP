﻿#include <iostream>
#include <string>

using namespace std;

class RailwayСarriage {
private:
	string type;
	unsigned int passengers;

public:
	RailwayСarriage() {
		cout << "Railway Carriage Default constructor." << endl;
	}
	void RailwayСarriageInfo() {
		cout << "Type: " << this->type << "\nPassangers: " << this->passengers << endl;
	}


	void FillRailwayСarriage() {
		cout << "Carriage Type: ";
		cin >> this->type;
		cout << "Passengers: ";
		cin >> this->passengers;
	}
	~RailwayСarriage() {
		cout << "RailwayСarriage Default Destructor." << endl;
	}

};

class Train {
private:
	string route;
	string type;
	unsigned int distance;
	unsigned short RCcount;
	RailwayСarriage *carrige;

public:
	Train(string route, string type, int distance, short RCcount) {
		this->route = route;
		this->type = type;
		this->distance = distance;
		this->RCcount = RCcount;
		this->carrige = new RailwayСarriage[RCcount];
		for (int i = 0; i < this->RCcount; i++) {
			carrige[i].FillRailwayСarriage();
		}
		cout << "Overload Train constructor. " << endl;
	}
	Train() {
		cout << "Default train constructor. " << endl;
	}
	void TrainInfo() {
		cout << "Train route: " << this->route << "\nType: " << this->type << "\nDistans: " << this->distance
			<< "\nCount of Railway Carrige: " << this->RCcount << endl;
		for (int i = 0; i < this->RCcount; i++) {
			this->carrige[i].RailwayСarriageInfo();
		}
	}

	void SetRoute(string route) {
		this->route = route;
	}

	Train(Train &other) {
		this->RCcount = other.RCcount;
		this->route = other.route;
		this->type = other.type;
		this->distance = other.distance;
		this->carrige = new RailwayСarriage[other.RCcount];
		for (int i = 0; i < other.RCcount; i++) {
			this->carrige[i] = other.carrige[i];
		}
	}

	~Train() {
		delete[]carrige;
		cout << "Train desctructor." << endl;
	}
	 
	Train &operator= (const Train &other) {
		cout << "Overload operator = . Address => " << this << endl;
		
		if (this->carrige != nullptr) {
			delete[] this->carrige;
		}

		this->RCcount = other.RCcount;
		this->route = other.route;
		this->type = other.type;
		this->distance = other.distance;
		this->carrige = new RailwayСarriage[other.RCcount];
		for (int i = 0; i < other.RCcount; i++) {
			this->carrige[i] = other.carrige[i];
		}

		return *this;
	}

};


int main() {

	Train polissya("Kyiv - Rivne", "Night express", 350, 3);
	polissya.TrainInfo();

	Train bukovuna(polissya);
	bukovuna.TrainInfo();
	bukovuna.SetRoute("Lviv - Uzgorod");
	bukovuna.TrainInfo();

	Train test;

	cout << " Test block =======================> " << endl;
	polissya.operator=(bukovuna);
	polissya.TrainInfo();

	cout << " Test block2 =======================> " << endl;
	test.operator=(polissya);
	test.TrainInfo();

	system("pause");
	return 0;
}