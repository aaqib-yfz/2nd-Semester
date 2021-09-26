#include<iostream>
using namespace std;

class LivingThings {
private:
        int numBorn;
        int numLiving;
        
public:
        static int numOfBornObjects;
        static int numOfLivingObjects;
        //Constructor
        LivingThings()
        {
                numBorn = numOfBornObjects; 
                numLiving = numOfLivingObjects;
                
                numOfLivingObjects+= numOfBornObjects++;
        }
        //destructor
        ~LivingThings()
        {
                numOfLivingObjects--;
        }
};





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


int LivingThings::numOfBornObjects = 0;
int LivingThings::numOfLivingObjects = 0;

int main()
{
        LivingThings lt, lt1, lt2;
        cout << "Number of Born Objects: " << lt2.numOfBornObjects << endl;
        lt.~LivingThings();
        lt2.~LivingThings();
        cout << "Number of Living Objects: " << lt2.numOfLivingObjects << endl;
        return 0;
}
