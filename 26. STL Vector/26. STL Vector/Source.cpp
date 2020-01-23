#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> vArr;
	vArr.push_back(2);
	vArr.push_back(5);
	vArr.push_back(19);
	vArr.pop_back();

	cout << "Vector size = " << vArr.size()<< endl;

	for (int i = 0; i < vArr.size(); i++) {
	/*	cout << vArr[i] << endl;*/
		cout << vArr.at(i) << endl; // Check arr range
	}

	vArr.clear();
	cout << "Vector size = " << vArr.size() << endl;

	cout << "\--\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-" <<endl;

	vArr.reserve(50);
	vArr.push_back(20);
	vArr.push_back(10);
	vArr.push_back(50);
	vArr.push_back(80);
	
	for (int i = 0; i < vArr.size(); i++) {
		/*	cout << vArr[i] << endl;*/
		cout << vArr.at(i) << endl; // Check arr range
	}

	cout << "Vector size = " << vArr.size() << endl;
	cout << "Vector capacity = " << vArr.capacity() << endl;
	
	system("pause");
	return 0;
}