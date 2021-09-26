#include<iostream>
using namespace std;

class computer{
    public:
    string name;
    int price;
    computer(string nm,int p):name(nm),price(p){
     cout << "Constructor of parent class ";   
    }
    void display(){
        cout << name << price;
    }
};

class laptop:public computer{
    public:
    int model;
    laptop(int model,string name,int price):computer(name,price){
        cout << model;
    }
};

int main(){
    laptop abc(200,"hhh",300);
    abc.display();
}