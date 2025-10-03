#include <iostream>
#include "Point.h"
using namespace std;
int main()
{
	Point p1(2, 4);
	Point p2(-1, 0);
	float d = p1.distance(p1, p2);
	cout << "la distance entre p1 et p1 est :" << d << endl;
	p1.afficher();
}

