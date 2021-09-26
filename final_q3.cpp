#include <iostream>
using namespace std;

const float pi = 3.14;

class geometry{
public:
virtual void area(){}
virtual void parameter(){}
};

class circle: public geometry{
public:
float rad;
circle(float r){
rad = r;
}
void area(){
cout << "Area of the circle is " << pi * rad * rad << endl;
}
void parameter(){
cout << "Parameter of the circle is " << 2 * pi * rad << endl;
}
};

class square: public geometry{
public:
int side;
square(int s){
side = s;
}
void area(){
cout << "Area of the square is " << side * side << endl;
}
void parameter(){
cout << "Parameter of the circle is " << 4 * side << endl;
}
};

int main(){

geometry *p;
circle c(7.6);
p = &c;
p->area();
p->parameter();

square sq(10);
p = &sq;
p->area();
p->parameter();


return 0;
}