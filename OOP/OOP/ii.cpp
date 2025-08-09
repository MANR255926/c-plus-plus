#include<iostream>
using namespace std;
#include<string>

class Gradebook{
	
	public:
		
		void displaymessage(string coursename){
			
			cout<<"Welcome to the gradebook for : "<<coursename<<"!"<<endl;
		}
};

int main()
{
	string nameofCourse;
	Gradebook myGradebook;
	
	cout<<"Enter the name of the course"<<":"<<endl;
getline(cin,nameofCourse);
cout<<endl;

myGradebook.displaymessage(nameofCourse);
return 0;
}

