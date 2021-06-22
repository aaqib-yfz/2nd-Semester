#include <iostream>
using namespace std;
class mobile{
    int price;
    // string name;
    int model;
public:
    mobile(int p , int m )
    {
        price =p;
        model=m;
        // name=n;
    }
    getinfo()const{
        cout << price;
        return model;
        // return name;
    }
};
int main()
{
    const mobile samsung(100,200);
    samsung.getinfo();
return 0;
}