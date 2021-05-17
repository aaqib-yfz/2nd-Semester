#include <iostream>
using namespace std;
class student{
private:
    int rollno;
    string name;
public:
    student(int rn , string nm){
        rollno =rn;
        name=nm;
    }
    student(string nm ,int rn){
        rollno =rn;
        name=nm;
    }
    void show_details(){
        cout << "Roll No of the Student = " << rollno<<endl;
        cout << "Name of the Student = " << name;
        cout << endl;
    }
};
int main()
{
    student astd(23,"aaqib") , bstd("israr",18);
    astd.show_details();
    bstd.show_details();
return 0;
}