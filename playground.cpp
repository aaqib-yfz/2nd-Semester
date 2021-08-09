#include <iostream>
using namespace std;
class person{
    public:
    int age;
    // string name;
    person(int ag) :age(ag){
    cout << age<<endl;
}
    
};
class student : public person{
    public:
    int marks;
    student(int ag,int mk):person(ag),marks(mk){
        cout << mk;
    }

};
int main()
{
    student aaqib(23,240);
return 0;
}