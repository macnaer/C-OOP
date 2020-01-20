#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void Division(int a, int b) {
	if (b == 0) {
		/*throw exception("Division on 0");*/
		throw "Zero division";
	}
	else if (b == 1) {
		throw "Bed example";
	}
	cout << "Result = " <<a / b << endl;

}

int main() {
	//---------------------Example 1-------------------------
	// Classic example of exaption
	//string path = "file.txt";
	//ifstream read;
	//read.exceptions(ifstream::badbit | ifstream::failbit);  // Only for ifstream (Demo)
	//
	//try
	//{
	//	read.open(path);
	//	cout << "Successfuly " << endl;
	//}
	//catch (const std::exception& error)
	//{
	//	cout << error.what() << endl;
	//	cout << "Error open file." << endl;
	//}
	//---------------------Example 1-------------------------
	//---------------------Example 2-------------------------
	try
	{
		Division(2, 1);
	}
	catch (const exception &error)
	{
		cout << error.what() << endl;
	}
	catch (const char *error) {
		cout << error << endl;
	}
	catch (...) {
		cout << "Internal server error" << endl;
	}
	
	//---------------------Example 2-------------------------

	system("pause");
	return 0;
}