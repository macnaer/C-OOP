#include <iostream>
#include <string>

using namespace std;

class Human {
public: 
	string name;
};

class Develper : public Human {
public:
	string position;
	void WriteCode() {
		cout << this->name << " is writing code ..." << endl;
	}
};
 
class PM : public Human {
public:
	string project;
};

class Senior : public Develper {
public:
	void CreateDB() {
		cout << this->name << " is creating database ..." << endl;
	}

	void WriteCode() {
		cout << this->name << " is writing code well ..." << endl;
	}
};


int main() {

	Develper dev;
	dev.name = "Tom";
	dev.WriteCode();

	Human h;

	Senior bill;
	bill.name = "Bill";
	bill.CreateDB();
	bill.WriteCode();


	system("pause");
	return 0;
}