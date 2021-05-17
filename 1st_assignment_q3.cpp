#include <iostream>
using namespace std;
class Number{
    int number;
    int sum=0;
public:
    Number(int n){
        number = n;
    }
    void digit_sum(){
        int temp = number;
        while (temp!=0)
        {
            int digit;
            digit =temp%10;
            sum+=digit;
            temp/=10;
            
        }
    }
    void show_showsum(){
        cout << "The Sum Of The Digits in " << number << " is " << sum;
    }
};
int main()
{
    int x;
    cout << "Enter Any Number = ";
    cin >> x;
    Number Sum(x);
    Sum.digit_sum();
    Sum.show_showsum();
return 0;
}