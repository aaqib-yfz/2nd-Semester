#include<iostream>
using namespace std;
 //A class named point that represent x and y coordinates in 2D plane
 class point{
 private:
 int x;
 int y;
 public:
 point(int x1, int y1){ //constructor for points
 x=x1;
 y=y1;
 }
};
//A class named line that represents a line on 2D plane
class line:public point{
 private:
 point start, end;
 public:
 line(point start, point end){//constructor for line 
 this->start=start;
 this->end=end;
 }
};
//A triangle class that is composed of three lines
class triangle:public line{
 private:
 line side1,side2,side3;
 public:
 triangle(line side, line side2, line side3){
//constructor for triangle
 this->side1=side1;
 this->side2=side2;
 this->side3=side3;
 }
};