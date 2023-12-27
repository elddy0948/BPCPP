#include "Book.h"


Book::Book(const char* title, int price) {
	this->price = price;
	this->title = new char[strlen(title) + 1];
	strcpy_s(this->title, strlen(title) + 1, title);
}

Book::Book(const Book& rhs) {
	this->price = rhs.price;
	this->title = new char[strlen(rhs.title) + 1];
	strcpy_s(this->title, strlen(rhs.title) + 1, rhs.title);
}

Book::~Book() { delete[] title; }


void Book::set(const char* title, int price) {
	this->price = price;
	this->title = new char[strlen(title) + 1];
	strcpy_s(this->title, strlen(title) + 1, title);
}
