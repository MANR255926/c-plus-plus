
 #include<iostream>
 using namespace std;
 
 class Gradebook{
 	public:
 		
 		void displaymessage(){
 			
 			cout<<"Welcome to Gradebook!"<<endl;
		 }
 };
 
 int main()
{
	Gradebook myGradebook;    // create a GradeBook object named myGradeBook 
	myGradebook.displaymessage(); //call objects
	return 0;
}