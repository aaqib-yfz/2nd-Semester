#include <iostream>
using namespace std;

struct players_data
{
    string names;
    string home_runs;
    string hits;
};

void input(players_data *per)
{

    cout << "Enter Data of Players " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Name of Player " << i << " : ";
        cin >> per[i].names;

        cout << "Enter Homeruns of player " << i << " : ";
        cin >> per[i].home_runs;

        cout << "Enter Hits of Player " << i << " :";
        cin >> per[i].hits;
        cout << endl;
    }
}

void output(players_data *per)
{

    for (int i = 0; i < 5; i++)
    {
        cout << "\n Name of Player " << i << ":" << per[i].names;
        cout << "\n Homeruns of player " << i << " : " << per[i].home_runs;
        cout << "\n Hits of Player " << i << " : " << per[i].hits;
        cout << endl;
    }
}
int main()
{
    players_data per[5];
    char options;
    bool on = true;
    while (on)
    {
        cout << "Options" << endl;
        cout << "i - input all players" << endl;
        cout << "d- display all players" << endl;
        cout << "q - quit" << endl;
        cin >> options;

        switch (options)
        {
        case 'i':
            input(per);
            break;

        case 'd':
            output(per);
            break;

        case 'q':
            on = false;
            break;
        default:
            cout << "error";
            break;
        }
    }
}
