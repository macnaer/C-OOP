#include <iostream>
#include <deque>

using namespace std;

int main() {

	deque<int> container = { 3,8,9,12 };
	container.push_front(11);
	container.push_back(77);

	for (int i = 0; i < container.size(); i++) {
		cout << "container [" << i << "] = " << container.at(i) << endl;
	}

	system("pause");
	return 0;
}