#ifndef POINT_H
#define POINT_H
enum ORIENT
{
	LEFT,RIGHT,AHEAD, BEHIND, BETWEEN
};
class Triangle;
class Point
{
public:
	// Конструктор
	Point(double _x = 0, double _y = 0) : x(_x), y(_y) {}
	// Другие методы
void Show() const; 
void operator +=(Point&);
Point operator +(Point&);
Point operator -(Point&);
ORIENT Classify(Point&, Point&) const;
bool InTriangle(Triangle&) const;
double Length() const;
public:	
	double x, y;
};
#endif
