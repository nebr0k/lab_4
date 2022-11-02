#include "Numbers.h"
#include <iostream>
using namespace std;

Numbers::Numbers()
{
	x = 0;
}
Numbers::Numbers(int y)
{
	x = y;
}
Numbers::Numbers(const Numbers& r)
{
	x = r.x;
}

Numbers operator -( Numbers& b)
{
	Numbers t(0);
	t.x = - b.x;
	return t;
}
Numbers operator ++(Numbers& a)
{
	Numbers t(0);
	t.x = ++a.x;
	return t;
}





ostream& operator <<(ostream& out, const Numbers& a)
{
	out << a.x << endl;
	return out;
}
istream& operator >>(istream& in, Numbers& a)
{
	in >> a.x;
	return in;
}
