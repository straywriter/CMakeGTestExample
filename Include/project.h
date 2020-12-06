#pragma once

#include <iostream> // IO access

class Project33
{

public:
	// why only detected if implemented here?
	// void foo(int &i) {
	// 	i = 1;
	// }
	void foo(int &i);
};

void independentMethod(int &i);

void Project33::foo(int &i)
{
	i = 1;
}

void independentMethod(int &i)
{
	i = 0;
}