
#include "Books.h"

using namespace std;

int main() {

	/*Books kobzar("Kobzar", "Shevchenko", 1869, 900, "Ukraine national book!");
	kobzar.PrintBook();*/
	//Books azbuka;
	//azbuka.PrintBook();
	//azbuka.~Books();

	const int SIZE = 5;
	Books * myBooks = new Books[SIZE];

	string title;
	string author;
	unsigned short published;
	unsigned short pages;
	string description;

	for (int i = 0; i < SIZE; i++)
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
	/*	myBooks->(title, author, published, pages, description);*/
		myBooks[i];
		myBooks->PrintBook();
	}
	
	

	system("pause");
	return 0;
}