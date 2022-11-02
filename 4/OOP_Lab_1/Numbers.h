#pragma once
#include <iostream>
using namespace std;

class Numbers
{
	int x;
public:
	int GetX() const { return x; }
	void SetX(int value) { x = value; }
	Numbers();
	Numbers(int);
	Numbers(const Numbers&);
	friend Numbers operator - ( Numbers&);
	friend Numbers operator ++ (Numbers&);
	friend ostream& operator << (ostream&, const Numbers&);
	friend istream& operator >> (istream&, Numbers&);
};