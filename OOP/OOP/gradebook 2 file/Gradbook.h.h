#include<iostream>
using namespace std;
#include<string>
// gradebook seperate from main
  class GradeBook
  {
  public:
         GradeBook( string name )
     {
        setCourseName( name ); 
     }
     void setCourseName( string name )
     {
        courseName = name; 
    }
         string getCourseName()
     {
       return courseName; 
     }
     void displayMessage()
     
     {
        cout << "Welcome to the grade book for\n" << getCourseName()
           << "!" << endl;
     }
  private:
     string courseName;
  };



