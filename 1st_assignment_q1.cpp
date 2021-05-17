#include <iostream>
using namespace std;
class factorial{
    int num;
    int fct;
public:
    factorial(int n){
        num = n;
    }
    void cal_factorial(){
        int f=1;
        for (int  i = 1; i <= num; i++)
        {
        /* code */
        f*=i ;                        // f= (1*2*3*......*n)
        }
        fct=f;
    }
    void show_factorail(){
        cout << "Factorial Of "<< num << " : " << fct;
    }
};
int main()
{
    int x ;
    cout << "Enter Any Number = ";
    cin >> x;
    factorial number(x);
    number.cal_factorial();
    number.show_factorail();
return 0;
}