#include <iostream>
#include <cstring>
using namespace std;
class student{
    char *name;
    int rollno;
public:
    student(){
        rollno=0;
        name = new char[100];
        strcpy(name," ");
    }
    student( int rn ,char *nm){
        rollno = rn;
        name =new char[100];
        strcpy(name,nm);
    }
    void show_output(){
        cout << "The Roll no of student  " << rollno;
        cout << "The name of student " << name;
    }
    student( const student &abc){
        rollno=abc.rollno;
        name=abc.name;
    }
}; 
int main()
{
    student astd(23,"aaqib");
    astd.show_output()
    
return 0;
}