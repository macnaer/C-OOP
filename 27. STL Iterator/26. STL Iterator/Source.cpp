#include <iostream>
#include <vector>

using namespace std;

int main() {

	
	vector<int> vArr = {1,4,5,4,3,4,7,6,};

	vector<int>::iterator iter;
	iter = vArr.begin();

	iter += 2;

	cout << *iter << endl;


	system("pause");
	return 0;
}