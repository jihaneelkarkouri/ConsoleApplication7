#pragma once
class Point
{
private:
	float x;
	float y;
public:
	Point(float a, float b);
	float distance(Point p1,Point p2);
	void afficher();
};

