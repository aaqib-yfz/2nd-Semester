#include <iostream>
#include <conio.h>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void setX(int x) 
	{
		this->x = x;
	}
	void setY(int y)
	{
		this->y = y;
	}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	void display()
	{
		cout << "( " << x << " , " << y << " )" << endl;
	}
};


class Line
{
private:
	Point start;
	Point end;
public:
	Line()
	{
		
	}
	void setStart(Point p1)
	{
		start = p1;
	}
	void setEnd(Point p2)
	{
		end = p2;
	}
	Point getStart()
	{
		return start;
	}
	Point getEnd()
	{
		return end;
	}
	
};

class Triangle
{
private:
	Line A;
	Line B;
	Line C;
public:
	Triangle()
	{

	};
	void setTLA(Line A)
	{
		this->A = A;
	}
	void setTLB(Line B)
	{
		this->B = B;
	}
	void setTLC(Line C)
	{
		this->C = C;
	}
	Line getTLA()
	{
		return A;
	}
	Line getTLB()
	{
		return B;
	}
	Line getTLC()
	{
		return C;
	}
	
};

class Rectangle
{
private:
	Line A;
	Line B;
	Line C;
	Line D;
public:
	Rectangle()
	{

	}
	void setRLA(Line A)
	{
		this->A = A;
	}
	void setRLB(Line B)
	{
		this->B = B;
	}
	void setRLC(Line C)
	{
		this->C = C;
	}
	void setRLD(Line D)
	{
		this->D = D;
	}
	Line getRLA()
	{
		return A;
	}
	Line getRLB()
	{
		return B;
	}
	Line getRLC()
	{
		return C;
	}
	Line getRLD()
	{
		return D;
	}
};

int main(){
	Point aaqib;
	aaqib.setX(10);
	aaqib.setY(20);
	aaqib.display();

	Line l1;
	l1.setStart(aaqib);
	l1.setEnd(aaqib);
	
	l1.getStart();
	l1.getEnd();
}


