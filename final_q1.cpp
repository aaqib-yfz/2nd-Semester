#include <iostream>
using namespace std;
class reverse{
    public:
    int n;
    int digit =0;
    int rev=0;
    reverse(int nm):n(nm){
        while(n>0){
        digit=n%10;
        rev= rev*10 + digit;
        n/=10;
        }
    }
    void display(){
        cout << "the reverse of the given number is" <<rev;
    }
};
int main()
{
    reverse a(12345);
    a.display();
return 0;
}