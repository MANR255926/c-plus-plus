   #include "Gradebook1.h" 
   using std::cout;
   using std::endl;
 
  GradeBook::GradeBook( string name )
  {
     setCourseName( name ); 
}

  
  void GradeBook::setCourseName( string name )
  {
     courseName = name; 
  } 

  
  string GradeBook::getCourseName()
  {
     return courseName; 
  } 

  
  void GradeBook::displayMessage()
  {
     
     cout << "Welcome to the grade book for\n" << getCourseName()
        << "!" << endl;
 }



