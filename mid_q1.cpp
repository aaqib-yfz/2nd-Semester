#include <iostream>
using namespace std;
class car{
    string name,model_name;
    float top_speed;
public:
    car(){
        name = " ";
        model_name= " ";
        top_speed = 0;

    }
    void input(string nm , string mn ,float ts){
        name = nm;
        model_name=mn;
        top_speed=ts;
    }
    void output(){
        cout << "Name of the car = "  << name<<endl;
        cout << "Model of the car = " << model_name<<endl;
        cout << "Top speed of car = " << top_speed;
    }
};
int main()
{
    car first;
    first.input("m3","m3 2001",235.5);
    first.output();
return 0;
}