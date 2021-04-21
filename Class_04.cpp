#include <iostream>
using namespace std;
class student{
    string name;
    string roll;
    int marks;
    public:
    void input(string n,string r,int m){
        cout << "Enter Student's Name: ";
        cin >> n;
        cout << "Enter Student's Roll no: ";
        cin >> r;
        cout << "Enter Student's Marks :";
        cin >> m;
        cout << endl;
        name=n;
        roll =r;
        marks = m; 
    }
    void output(){
        cout << "Name of the Student: " << name<<endl;
        cout << "Roll Number of the Student: " << roll<<endl;
        cout << "Marks Obtained:"<<marks;
        cout << endl;
    }
};
int main(){
    student student_1;
    string n1,r1;
    int m1;
    student_1.input(n1,r1,m1);
    student_1.output();
}