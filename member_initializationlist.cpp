#include <iostream>
using namespace std;
class car{
    int price;
    string name;
public:
    car(int p , string n) : price(p),name(n){
        cout << "Member Intialization Completed "<<endl;
    }
    void display(){
        cout << "Price of the car = " << price<<endl;
        cout  << "Name of the Car = "<< name;

    }
};
int main()
{
    car bmw(20000 , "Sex");
    bmw.display();
return 0;
}
