#include <iostream>
using namespace std;
struct players_data
{
    /* data */
 string name;
 string home_runs;
 string hits;    
};

void input(players_data* per){
    for(int i=0; i<5; i++){
    cout << "   Enter Players Data  "<<endl;
    cout << " Enter Name Of Player "<< i <<":";
    cin >> per[i].name;
    cout << " Enter Home Runs Of Player "<< i << ":";
    cin>> per[i].home_runs;
    cout << " Enter No Of Hits "<< i << ":";
    cin >> per[i].hits;
    cout << endl;
    }
}
void output(players_data* per){
    cout << "*****DATA OF THE PLAYERS*****"<<endl;
    for (int i = 0; i < 5; i++)
    {
     cout << " Name Of Player "<< i <<":"<<per[i].name;
     cout<<endl;
     cout << " Home Runs Of Player "<< i << ":"<<per[i].home_runs;
     cout<<endl;
     cout << " No Of Hits Of Player "<< i << ":"<<per[i].hits<<endl;
     cout<<endl;
       
    }
    

}

int main()
{
players_data per[5];
input(per);
output(per);
return 0;
}
