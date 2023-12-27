#pragma once
#ifndef BOOK_H
#define BOOK_H

#include <cstring>
#include <iostream>

using namespace std;

class Book {
public:
	Book(const char* title, int price);
	Book(const Book& rhs);
	~Book();

public:
	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "¿ø" << endl; }

private:
	char* title;
	int price;
};


#endif /* !BOOK_H */
