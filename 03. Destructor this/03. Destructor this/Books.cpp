#include "Books.h"

void Books::PrintBook()
{
	std::cout << "Title: " << this->title << "\nAuthor: " << this->author << "\nPublushed: " << this->published 
		<< "\nPages: " << this->pages << "\nDescription: " << this->description <<std::endl;
}

Books::Books()
{
	std::cout << "Default constructor! " << std::endl;
}

Books::Books(string title, string author, short published, short pages, string description) {
	std::cout << "Overload constructor ===>" << std::endl;
	this->title = title;
	this->author = author;
	this->published = published;
	this->pages = pages;
	this->description = description;
}


Books::~Books()
{
	std::cout << "Default destructor! " << std::endl;
}
