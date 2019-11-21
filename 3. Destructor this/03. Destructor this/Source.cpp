
#include "Books.h"

using namespace std;

int main() {

	/*Books kobzar("Kobzar", "Shevchenko", 1869, 900, "Ukraine national book!");
	kobzar.PrintBook();*/
	//Books azbuka;
	//azbuka.PrintBook();
	//azbuka.~Books();

	int size = 0;
	cout << "Enter books count: " << endl;
	cin >> size;
	Books *myBooks = new Books[size];

	string title;
	string author;
	unsigned short published;
	unsigned short pages;
	string description;

	for (int i = 0; i < size; i++)
	{
		cout << "Title: " << endl;
		cin >> title;
		cout << "Author: " << endl;
		cin >> author;
		cout << "Published: " << endl;
		cin >> published;
		cout << "Pages: " << endl;
		cin >> pages;
		cout << "Desc: " << endl;
		cin >> description;
		cout << "\n\n\n";
		/*myBooks(title, author, published, pages, description);*/
		myBooks[i] = Books(title, author, published, pages, description);
		myBooks[i].PrintBook();
	}


	system("pause");
	return 0;
}