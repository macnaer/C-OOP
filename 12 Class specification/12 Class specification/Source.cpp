#include <iostream>
#include <string>

using namespace std;

template <typename T>
class ShowMassage {
public:
	void PrintMsg(T message) {
		cout << "Standart message => " << message << endl;
	}
};

template <>
class ShowMassage<string> {

public:
	void PrintMsg(string message) {
		cout << "Special print for string =>>>>> " << message << endl;
	}
};


int main() {

	ShowMassage<int> msg;
	msg.PrintMsg(123);

	ShowMassage<double> msg2;
	msg2.PrintMsg(3.14);

	ShowMassage<char> msg3;
	msg3.PrintMsg('w');

	ShowMassage<string> msg4;
	msg4.PrintMsg("String ++ ");


	system("pause");
	return 0;
}