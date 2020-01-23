#include <iostream>
#include <string>
#include <memory>
#include <ctime>

using namespace std;


template <typename T>
class Person {
public:
	Person(T *ptr) {
		this->ptr = ptr;
		cout << "Person constructor " << endl;
	}
	~Person() {
		delete ptr;
		cout << "Person destructor " << endl;
	}

	T& operator*() {
		return *ptr;
	}

private:
	T *ptr;
};

int main() {

	srand(unsigned(time(NULL)));

	//Person<string> pointer = new string("Bill");
	//cout << *pointer << endl;

	//Person<string> pointer1 = new string("Bill");  /// 
	//Person<string> pointer2 = pointer1;  /// Error

	/*auto_ptr<string> person1 (new string("Bill"));
	auto_ptr<string> person2(person1);*/

	/*unique_ptr<string> person1(new string("Bill"));
	unique_ptr<string> person2;*/
	/*person2 = move(person1);*/
	/*person2.swap(person1);*/


	/*shared_ptr<string> person1(new string("Tom"));
	shared_ptr<string> person2(person1);*/


	int SIZE = 0;
	cout << "Enter array size " << endl;
	cin >> SIZE;

	shared_ptr<int[]> arr(new int[SIZE]);
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 100;
		cout << arr[i] << endl;
	}


	 
	system("pause");
	return 0;
}