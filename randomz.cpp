#include <iostream>
using namespace std;
struct student_data{
    string name;
    string rollno;
    void total(int a ,int b , int c){
    int total;
    cout <<"Enter Marks "<<endl;
    cout << "First Subject =";
    cin >> a;
    cout << "Second Subject=";
    cin >> b;
    cout << "Third Subject = ";
    cin >> c;
    total = a+b+c;
    cout << total;
    }
};
void input(student_data* per){
    for (int i = 0; i < 5; i++)
    {
        /* code */
        int x,y,z;
        cout << "Enter Name of Student " << i << ":";
        cin >> per[i].name;
        cout << "Enter roll no of student " << i << ":" ;
        cin>> per[i].rollno;
        cout << "Enter Marks";
        per[i].total(x,y,z);
        cout << endl;
    }
}
void output(student_data* per ){
    for (int i = 0; i < 5; i++)
    {
        int r,t,y;
        /* code */
        cout << "Name of The Student :"<< i << per[i].name<<endl;
        cout << "Roll No of THe Student : "<< i << per[i].rollno<<endl;
        cout << "Total of student : " << i ;
        per[i].total(r,t,y); 
    }

}
int main()
{
    student_data per[5];
    input(per);
    output(per);
    return 0;
}