#include <iostream>
using namespace std;
class mobile{
    string company;
    string model;
    float price;
public:
    void set_info(string cp ,string md ,float pr ){
        company = cp;
        model = md;
        price = pr ;
    }
    void show_info(){
        cout << "company Name : " << company<<endl;
        cout << "Model N0 : " << model<<endl;
        cout << "Price : " << price<<endl;
    }
};
int main()
{
    mobile varient1,varient2;
    varient1.set_info("Qmobile","adrino 2019",24000);
    varient2.set_info("Iphone","ip-5s",50000);
    // displaying info
    varient1.show_info();
    cout << endl;
    varient2.show_info();
    return 0;
}