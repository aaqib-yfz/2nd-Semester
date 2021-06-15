#include <iostream>
using namespace std;
class Time
{
private:
	int hour;
	int min;
	int sec;
public:
	Time();
	Time(int a, int b,int c)
	{
		hour = a;
		min = b;
		sec = c;
	}
	Time(const Time& t1)
	{
		hour = t1.hour;
		min = t1.min;
		sec = t1.sec;
	}
	Time inc_time()
	{
		
		if (sec > 59)
		{
			min+=1;
			sec = 0;
		}
		else
		{
			sec+=1;
		}
		if (min > 59)
		{
			hour += 1;
			min = 0;
		}
		return Time(hour, min, sec);
	}
	
	void display()
	{
		cout << "Time: " << hour << ":" << min << ":" << sec << endl;
	}
	bool compare(const Time& t) 
	{
	    if(sec == t.sec && min==t.min && hour==t.hour){
                return true;
            }
            else{
                return false;
            }
    }
};
int main()
{
	int h, m, s;
	cout << "Enter hours :";
	cin >> h;
	cout << "Enter minutes :";
	cin >> m;
	cout << "Enter seconds :";
	cin >> s;
	Time t(h, m, s);
	Time t2(2, 43, 10);
	system("cls");
	cout << "Time before increment" << endl;
	t.display();
	cout << "Incrementing" << endl;
	t.inc_time();
	t.display();
	cout << t.compare(t2);
	
}