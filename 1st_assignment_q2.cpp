#include <iostream>
using namespace std;
class my_string{
private:
    string str,rstr;
public:
    my_string(string strng){
        str = strng;
        rstr = strng;
    }
    void reverse_string(){
        int n = rstr.length()-1;
        int i = 0;
        while(i<=n){
        swap(rstr[i],rstr[n]);
        n = n-1;
        i = i+1;
        }
    }
    void show_string(){
        cout << "Before Reversing : " << str << endl;
        cout << "After Reversing : " << rstr << endl;
    }
};

int main(){
    my_string name("Tesla");
    name.reverse_string();
    name.show_string();
}