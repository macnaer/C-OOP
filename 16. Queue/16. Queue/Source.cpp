#include <iostream>

using namespace std;

const int maxQsize = 40;

class Queue {
	char q[maxQsize];
	int size;
	int putData;
	int getData;

public:
	Queue(int len) {
		if (len > maxQsize) {
			len = maxQsize;
		}
		else if (len <= 0) {
			size = len;
		}
		putData = getData = 0;
	}

	void WriteData(char data) {
		if (putData == size) {
			cout << "Queue is full" << endl;
			return;
		}

		putData++;
		q[putData] = data;

	}

	char ReadData() {
		if (getData == putData) {
			cout << "Queue is empty" << endl;
			return 0;
		}

		getData++;
		return q[getData];
	}

};

int main() {

	Queue alphabet(100);

	char tmp;
	int i = 0;

	cout << "BigQueue " << endl;
	for (i = 0; i < 26; i++) {
		alphabet.WriteData('A' + i);
	}

	for (i = 0; i < 26; i++) {
		tmp = alphabet.ReadData();
		if (tmp != 0) {
			cout << "Result " << tmp << endl;
		}
	}

	system("pause");
	return 0;
}