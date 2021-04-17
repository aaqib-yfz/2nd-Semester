// How to Create A CLass
#include <iostream>
using namespace std;
class Student{
    int rollno ;
public: 
    void setRollno(int rn){
    rollno = rn;
    }
    void showRollno(){
        cout << "My Roll no : " << rollno;
    }
};

int main(){
    Student aaqib;
    aaqib.setRollno(10);
    aaqib.showRollno();
return 0;
}