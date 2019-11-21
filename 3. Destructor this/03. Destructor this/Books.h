#pragma once
#include <iostream>
#include <string>
using namespace std;

class Books
{
private:
	string title;
	string author;
	unsigned short published;
	unsigned short pages;
	string description;


public:
	void PrintBook();
	Books();
	Books(string title, string author, short published, short pages, string description);
	~Books();
};

