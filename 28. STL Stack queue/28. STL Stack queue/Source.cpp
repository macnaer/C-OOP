#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {

	stack<int, vector<int>> arr;

	arr.push(2);
	arr.push(6);
	arr.push(9);
	arr.push(5);

	auto containerType = arr._Get_container();

	cout << "containerElement => " << containerType[2] << endl;

	cout << "Size => " << arr.size() << endl;
	cout << "Top element => " << arr.top() << endl;
	arr.pop();
	cout << "Top element => " << arr.top() << endl;

	cout << "All elements  " << endl;
	while (!arr.empty()){
		cout << arr.top() << endl;
		arr.pop();
	}

	system("pause");
	return 0;
}