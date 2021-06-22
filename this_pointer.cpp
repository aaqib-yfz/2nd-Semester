#include <iostream>
using namespace std;
class student{
    int rollno;
public:
    void get(int r){
        rollno = r;
    }
    void dsiplay(){
        cout << "The roll No of the student = " << rollno<<endl;
        cout << "The roll No of the Student = " << this->rollno;
    }
};
int main()
{
    student astudent;
    astudent.get(10);
    astudent.dsiplay();
    return 0;
}