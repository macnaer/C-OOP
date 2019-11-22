#include <iostream>
#include <string>

using namespace std;

class RailwayСarriage {
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
		cout << "Type: ";
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
	Train() {
		cout << "Default constructor. Address " << this << endl;
	}
	Train(string route, string type, int distance, short RCcount) {
		this->route = route;
		this->type = type;
		this->distance = distance;
		this->RCcount = RCcount;
		this->carrige = new RailwayСarriage[RCcount];
		for (int i = 0; i < this->RCcount; i++) {
			carrige[i].FillRailwayСarriage();
		}
		cout << "Overload constructor. Address " << this << endl;
	}
	void TrainInfo() {
		cout << "Train route: " << this->route << "\nType: " << this->type << "\nDistans: " << this->distance
			<< "\nCount of Railway Carrige: " << this->RCcount << endl;
		for (int i = 0; i < this->RCcount; i++) {
			this->carrige[i].RailwayСarriageInfo();
		}
	}

	// Copy Constructor
	Train(const Train &other) {
		this->RCcount = other.RCcount;
		this->route = other.route;
		this->type = other.type;
		this->distance = other.distance;
		this->carrige = new RailwayСarriage[other.RCcount];
		for (int i = 0; i < other.RCcount; i++) {
			this->carrige[i] = other.carrige[i];
		}
		cout << "Copy constructor." << this <<endl;
	}

	~Train() {
		cout << "Default destructor. Address " << this << endl;
		delete[]carrige;
	}
};

//Train NewTrain() {
//	Train train("Rivne-Lviv", "plackart", 210, 12);
//	train.TrainInfo();
//	return  train;
//}

int main() {

	/*NewTrain();*/
	Train polissya("Rivne-Lviv", "Super Fast", 200, 3);
	cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
	polissya.TrainInfo();
	cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
	Train galuchina(polissya);  
	cout << "----------------------------------" << endl;
	galuchina.TrainInfo();
	cout << "----------------------------------" << endl;
	


	system("pause");
	return 0;
}