#include<iostream>
#include<cstring>
using namespace std;
class Student{
public:
	int rollNo;
    char* name;
    Student(){
        rollNo=0;
      	name = new char[20];
		strcpy(name,"");
    }
	Student(int rn, char *nm){
      	rollNo=rn;
      	name = new char[20];
		  strcpy(name,nm);
    }
	void showRollno(){
	cout<<"My roll no="<<rollNo<<endl;
	}	
	Student(const Student &obj){
		rollNo = obj.rollNo;
		name = new char[20];
		//name = obj.name;
		strcpy(name,obj.name);
		cout<<"copy constructor"<<endl;
	}
	
};
void show(Student obj1){
	cout<<"My roll no="<<obj1.rollNo<<endl;
	cout<<"name="<< obj1.name<<endl;
	}
int main(){
	student a(23,"aaqib");
	student b(a);
	#include <iostream>
	using namespace std;
	int main()
	
	return 0;
	}
	return 0;
}