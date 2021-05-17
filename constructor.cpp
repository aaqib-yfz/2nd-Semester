#include <iostream>
using namespace std;
class rectangle{
    float length,area,width;
public:
    rectangle(int l , int w){
        length = l;
        width = w;
    }
    void showarea(){
        area = length*width;
        cout << "Area of the Rectangle = " << area;
    }
};
int main()
{
    rectangle first(12.5,2.5);
    first.showarea();
return 0;
}