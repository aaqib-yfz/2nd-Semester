// // // #include <iostream>
// // // using namespace std;
// // // class reverse{
// // //     public:
// // //     int n;
// // //     int digit =0;
// // //     int rev=0;
// // //     reverse(int nm):n(nm){
// // //         while(n>0){
// // //         digit=n%10;
// // //         rev= rev*10 + digit;
// // //         n/=10;
// // //         }
// // //     }
// // //     void display(){
// // //         cout << "the reverse of the given number is" <<rev;
// // //     }
// // // };
// // // int main()
// // // {
// // //     reverse a(12345);
// // //     a.display();
// // // return 0;
// // // }
// // #include<iostream>
// // using namespace std;

// // class LivingThings {
// // private:
// //         int numBorn;
// //         int numLiving;
        
// // public:
// //         static int numOfBornObjects;
// //         static int numOfLivingObjects;
// //         //Constructor
// //         LivingThings()
// //         {
// //                 numBorn = numOfBornObjects; 
// //                 numLiving = numOfLivingObjects;
                
// //                 numOfLivingObjects+= numOfBornObjects++;
// //         }
// //         //destructor
// //         ~LivingThings()
// //         {
// //                 numOfLivingObjects--;
// //         }
// // };

// // int LivingThings::numOfBornObjects = 0;
// // int LivingThings::numOfLivingObjects = 0;

// // int main()
// // {
// //         LivingThings lt, lt1, lt2;
// //         cout << "Number of Born Objects: " << lt2.numOfBornObjects << endl;
// //         lt.~LivingThings();
// //         lt2.~LivingThings();
// //         cout << "Number of Living Objects: " << lt2.numOfLivingObjects << endl;
// //         return 0;
// // }

// #include <iostream>
// using namespace std;

// const float pi = 3.14;

// class geometry{
// public:
// virtual void area(){}
// virtual void parameter(){}
// };

// class circle: public geometry{
// public:
// float rad;
// circle(float r){
// rad = r;
// }
// void area(){
// cout << "Area of the circle is " << pi * rad * rad << endl;
// }
// void parameter(){
// cout << "Parameter of the circle is " << 2 * pi * rad << endl;
// }
// };

// class square: public geometry{
// public:
// int side;
// square(int s){
// side = s;
// }
// void area(){
// cout << "Area of the square is " << side * side << endl;
// }
// void parameter(){
// cout << "Parameter of the circle is " << 4 * side << endl;
// }
// };

// int main(){

// geometry *p;
// circle c(7.6);
// p = &c;
// p->area();
// p->parameter();

// square sq(10);
// p = &sq;
// p->area();
// p->parameter();


// return 0;
// }

#include <iostream>
using namespace std;

class LivingDead {
    static int numBorn;
    static int numLiving;

public:
    LivingDead() {
        numLiving++;
        numBorn++;
    }

    ~LivingDead() {
        numLiving--;
    }

    static int getLiving() {
        return numLiving;
    }

    static int getBorn() {
        return numBorn;
    }
};

int LivingDead::numBorn = 0;
int LivingDead::numLiving = 0;

int main() {
    LivingDead *l1, *l2, *l3;
    l1 = new LivingDead();
    l2 = new LivingDead();
    l3 = new LivingDead();
    
    delete l3;

    cout << "No of objects born: " << LivingDead::getBorn() << endl;
    cout << "No of objects living: " << LivingDead::getLiving() << endl;
    return 0;
}
