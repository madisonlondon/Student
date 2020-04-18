#include <iostream>
#include "Person.h"
#include "Student.h"

using namespace std;

int main()
{
  cout << "Testing Person.cpp" << endl;
  cout << "Testing default constructor" << endl;
  cout << "Expected output:" << endl;
  cout << "0" << endl;
  cout << "0" << endl;
  cout << "" << endl;
  cout << "" << endl;
  cout << "0" << endl;
  cout << "0" << endl;
  cout << "0" << endl;
  cout << "" << endl;
  cout << "" << endl;
  cout << "0" << endl;
  cout << "" << endl;
  cout << "Actual output:" << endl;
  Person temp;
  cout << temp.getURID() << endl;
  cout << temp.getNetID() << endl;
  cout << temp.getLastName() << endl;
  cout << temp.getFirstName() << endl;
  struct tm tmp = temp.getDateOfBirth();
  cout << tmp.tm_yday << endl;
  cout << tmp.tm_mon << endl;
  cout << tmp.tm_year << endl;
  cout << temp.getEmail() << endl;
  cout << temp.getAddress() << endl;
  cout << temp.getPhone() << endl;
  cout << "" << endl;

  cout << "Testing copy constructor" << endl;
  cout << "Expected output:" << endl;
  cout << "0" << endl;
  cout << "0" << endl;
  cout << "" << endl;
  cout << "" << endl;
  cout << "0" << endl;
  cout << "0" << endl;
  cout << "0" << endl;
  cout << "" << endl;
  cout << "" << endl;
  cout << "0" << endl;
  cout << "" << endl;
  cout << "Actual output:" << endl;
  Person copy(temp);
  cout << copy.getURID() << endl;
  cout << copy.getNetID() << endl;
  cout << copy.getLastName() << endl;
  cout << copy.getFirstName() << endl;
  struct tm tmpCopy = temp.getDateOfBirth();
  cout << tmpCopy.tm_yday << endl;
  cout << tmpCopy.tm_mon << endl;
  cout << tmpCopy.tm_year << endl;
  cout << copy.getEmail() << endl;
  cout << copy.getAddress() << endl;
  cout << copy.getPhone() << endl;
  cout << "" << endl;
  
  cout << "Testing Person(int urid, string netid, string lname, string fname, int dob_day, int dob_month, int dob_year, string email, string address, long phone)" << endl;
  Person real(1234, "ml4gv", "London", "Madison", 23, 7, 99, "maddie.london@richmond.edu", "28 Westhampton Way", 56789);
  cout << "Expected output:" << endl;
  cout << "1234" << endl;
  cout << "ml4gv" << endl;
  cout << "London" << endl;
  cout << "Madison" << endl;
  cout << "23" << endl;
  cout << "7" << endl;
  cout << "99" << endl;
  cout << "maddie.london@richmond.edu" << endl;
  cout << "28 Westhampton Way" << endl;
  cout << "56789" << endl;
  cout << "" << endl;
  cout << "Actual output:" << endl;
  cout << real.getURID() << endl;
  cout << real.getNetID() << endl;
  cout << real.getLastName() << endl;
  cout << real.getFirstName() << endl;
  struct tm tmp1 = real.getDateOfBirth(); 
  cout << tmp1.tm_yday << endl;
  cout << tmp1.tm_mon << endl;
  cout << tmp1.tm_year << endl;
  cout << real.getEmail() << endl;
  cout << real.getAddress() << endl;
  cout << real.getPhone() << endl;
  cout << "" << endl;
  
  cout << "Testing getFirstName()" << endl; 
  cout << "Expected output:" << endl;
  cout << "Madison" << endl; 
  cout << "" << endl;
  cout << "Actual output:" << endl; 
  cout << real.getFirstName() << endl;
  cout << "" << endl;
 
  cout << "Testing getLastName()" << endl;
  cout << "Expected output:" << endl;
  cout << "London" << endl;
  cout << "" << endl;
  cout << "Actual output:" << endl;
  cout << real.getLastName() << endl;
  cout << "" << endl; 
  
  cout << "Testing getDateOfBirth()" << endl;
  cout << "Expected output:" << endl;
  cout << "23" << endl;
  cout << "7" << endl;
  cout << "99" << endl;
  cout << "" << endl;
  cout << "Actual output:" << endl;
  cout << tmp1.tm_yday << endl;
  cout << tmp1.tm_mon << endl;
  cout << tmp1.tm_year << endl;
  cout << "" << endl;
  
  cout << "Testing getAddress()" << endl;
  cout << "Expected output:" << endl;
  cout << "28 Westhampton Way" << endl;
  cout << "" << endl;
  cout << "Actual output:" << endl;
  cout << real.getAddress() << endl;
  cout << "" << endl; 
 
  cout << "Testing getNetID()" << endl;
  cout << "Expected output:" << endl;
  cout << "ml4gv" << endl;
  cout << "" << endl;
  cout << "Actual output:" << endl; 
  cout << real.getNetID() << endl;
  cout << "" << endl;
 
  cout << "Testing getURID()" << endl;
  cout << "Expected output:" << endl;
  cout << "1234" << endl;
  cout << "" << endl;
  cout << "Actual output:" << endl;
  cout << real.getURID() << endl;
  cout << "" << endl;;  

  cout << "Testing getEmail()" << endl; 
  cout << "Expected output:" << endl;
  cout << "maddie.london@richmond.edu" << endl;
  cout << "" << endl;
  cout << "Actual output:" << endl;
  cout << real.getEmail() << endl;
  cout << "" << endl;

  cout << "Testing getPhone()" << endl;
  cout << "Expected output:" << endl;
  cout << "56789" << endl;
  cout << "" << endl;
  cout << "Actual output:" << endl;
  cout << real.getPhone() << endl;
  cout << "" << endl;

  cout << "Testing setFirstName(string fname)" << endl;
  cout << "Expected output:" << endl;
  cout << "Natalie" << endl;
  cout << "" << endl;
  real.setFirstName("Natalie");
  cout << "Actual output:" << endl;
  cout << real.getFirstName() << endl;
  cout << "" << endl;

  cout << "Testing setLastName(string lname)" << endl;
  cout << "Expected output:" << endl;
  cout << "Charlotte" << endl;
  cout << "" << endl;
  real.setLastName("Charlotte");
  cout << "Actual output:" << endl;
  cout << real.getLastName() << endl;
  cout << "" << endl;

  cout << "Testing setDateOfBirth(int day, int month, int year)" << endl;
  cout << "Expected output:" << endl;
  cout << "9" << endl;
  cout << "8" << endl;
  cout << "102" << endl;
  cout << "" << endl;
  real.setDateOfBirth(9, 8, 102);
  struct tm tmp2 = real.getDateOfBirth();
  cout << "Actual output:" << endl;
  cout << tmp2.tm_yday << endl;
  cout << tmp2.tm_mon << endl;
  cout << tmp2.tm_year << endl;
  cout << "" << endl;

  cout << "Testing setAddress(string address)" << endl;
  cout << "Expected output:" << endl;
  cout << "410 Westhampton Way" << endl;
  cout << "" << endl;
  cout << "Actual output:" << endl;
  real.setAddress("410 Westhampton Way"); 
  cout << real.getAddress() << endl;
  cout << "" << endl;

  cout << "Testing setNetID(string netid)" << endl;
  cout << "Expected output:" << endl;
  cout << "nl6qe" << endl;
  cout << "" << endl;
  real.setNetID("nl6qe");
  cout << "Actual output:" << endl;
  cout << real.getNetID() << endl;
  cout << "" << endl;

  cout << "Testing setURID(int urid)" << endl;
  cout << "Expected output:" << endl;
  cout << "11111" << endl;
  cout << "" << endl;
  real.setURID(11111);
  cout << "Actual output:" << endl;
  cout << real.getURID() << endl;
  cout << "" << endl;

  cout << "Testing setEmail(string email)" << endl;
  cout << "Expected output:" << endl;
  cout << "natalie.london@richmond.edu" << endl; 
  cout << "" << endl;
  real.setEmail("natalie.london@richmond.edu");
  cout << "Actual output:" << endl;
  cout << real.getEmail() << endl;
  cout << "" << endl;

  cout << "Testing setPhone(long number)" << endl;
  cout << "Expected output:" << endl;
  cout << "2407892345" << endl;
  cout << "" << endl;
  real.setPhone(2407892345);
  cout << "Actual output:" << endl;
  cout << real.getPhone() << endl;


  cout << "*********************************************************************" << endl;

  cout << "Testing Student.cpp" << endl;
  cout << endl;
  cout << "Testing default constructor" << endl;
  cout << endl;

  cout << "Student temp1;" << endl;
  Student temp1;
  cout << endl; 

  cout << "Expected output:" << endl;
  cout << "get UR ID: 0" << endl;
  cout << "get net ID: 0" << endl;
  cout << "get last name:  " << endl;
  cout << "get first name: " << endl;
  cout << "get DOB day: 0" << endl;
  cout << "get DOB month: 0" << endl;
  cout << "get DOB year: 0" << endl;
  cout << "get email: " << endl;
  cout << "get address: " << endl;
  cout << "get phone number: 0" << endl;
  cout << "get date of admit day: 0" << endl;
  cout << "get date of admit month: 0" << endl;
  cout << "get date of admit year: 0" << endl;
  cout << "check if school is undefined: 1" << endl;
  cout << "get is full time: 1" << endl;
  cout << "get units completed: 0" << endl;
  cout << endl;
  cout << "Actual output:" << endl;
  cout << "get UR ID: " << temp1.getURID() << endl;
  cout << "get net ID: " << temp1.getNetID() << endl;
  cout << "get last name: " << temp1.getLastName() << endl;
  cout << "get first name: " << temp1.getFirstName() << endl;
  
  struct tm tmpS = temp1.getDateOfBirth();
  cout << "get DOB day: " << tmpS.tm_yday << endl;
  cout << "get DOB month: " << tmpS.tm_mon << endl;
  cout << "get DOB year: " << tmpS.tm_year << endl;
  cout << "get email: " << temp1.getEmail() << endl;
  cout << "get address: " << temp1.getAddress() << endl;
  cout << "get phone number: " << temp1.getPhone() << endl;
  
  struct tm tmpS2 = temp1.getAdmitDate();
  cout << "get date of admit day: " << tmpS2.tm_yday << endl;
  cout << "get date of admit month: " << tmpS2.tm_mon << endl;
  cout << "get date of admit year: " << tmpS2.tm_year << endl;
  cout << "check if school is defined: ";
  
  if (temp1.getSchool() == School::undefined)
      cout << "1" << endl;
  else
      cout << "0" << endl; 
  cout << "get is full time: " << temp1.isFullTime() << endl;
  cout << "get units completed: " << temp1.getUnitsCompleted() << endl;
  cout << endl;

  cout << "Testing Student::Student(int urid, std::string netid, std::string lname, std::string fname, int dob_day, int dob_mo, int dob_yr, std::string email, std::string address, long phone, int day_admit, int month_admit, int year_admit, School school, bool is_full_time, double units_completed)" << endl;
  cout << endl;

  cout << "----------------------------" << endl;
  cout << "Student temp2(12345678, \"tg6yu\", \"Green\", \"Nick\", 5, 4, 102, \"nick.green@richmond.edu\", \"410 Westhampton Way\", 8454566666, 3, 5, 117, School::as, true, 30.5);" << endl;
  Student temp2(12345678, "tg6yu", "Green", "Nick", 15, 1, 102, "nick.green@richmond.edu", "410 Westhampton Way", 8454566666, 3, 1, 117, School::as, true, 30.5);
  cout << endl;
  
  cout << "Expected output:" << endl;
  cout << "get UR ID: 12345678" << endl;
  cout << "get net ID: tg6yu" << endl;
  cout << "get last name:  Green" << endl;
  cout << "get first name: Nick" << endl;
  cout << "get DOB day: 15" << endl;
  cout << "get DOB month: 1" << endl;
  cout << "get DOB year: 102" << endl;
  cout << "get email: nick.green@richmond.edu" << endl;
  cout << "get address: 410 Westhampton Way" << endl;
  cout << "get phone number: 8454566666" << endl;
  cout << "get date of admit day: 3" << endl;
  cout << "get date of admit month: 1" << endl;
  cout << "get date of admit year: 117" << endl;
  cout << "check if school is A&S: 1" << endl;
  cout << "get is full time: 1" << endl;
  cout << "get units completed: 30.5" << endl;
  cout << endl;
  cout << "Actual output:" << endl;
  cout << "get UR ID: " << temp2.getURID() << endl;
  cout << "get net ID: " << temp2.getNetID() << endl;
  cout << "get last name: " << temp2.getLastName() << endl;
  cout << "get first name: " << temp2.getFirstName() << endl;
  
  struct tm tmpS3 = temp2.getDateOfBirth();
  cout << "get DOB day: " << tmpS3.tm_yday << endl;
  cout << "get DOB month: " << tmpS3.tm_mon << endl;
  cout << "get DOB year: " << tmpS3.tm_year << endl;
  cout << "get email: " << temp2.getEmail() << endl;
  cout << "get address: " << temp2.getAddress() << endl;
  cout << "get phone number: " << temp2.getPhone() << endl;
  
  struct tm tmpS4 = temp2.getAdmitDate();
  cout << "get date of admit day: " << tmpS4.tm_yday << endl;
  cout << "get date of admit month: " << tmpS4.tm_mon << endl;
  cout << "get date of admit year: " << tmpS4.tm_year << endl;
  cout << "check if school is A&S: ";
  
  if (temp2.getSchool() == School::as)
      cout << "1" << endl;
  else
      cout << "0" << endl; 
  cout << "get is full time: " << temp2.isFullTime() << endl;
  cout << "get units completed: " << temp2.getUnitsCompleted() << endl;
  cout << endl;
  
  cout << "----------------------------" << endl;
  cout << "Testing Student::Student(const Student& other)" << endl;
  cout << endl;
  cout << "Student temp3(temp2);" << endl;
  Student temp3(temp2);
  cout << endl;
  cout << "Expected output:" << endl;
  cout << "get UR ID: 12345678" << endl;
  cout << "get net ID: tg6yu" << endl;
  cout << "get last name:  Green" << endl;
  cout << "get first name: Nick" << endl;
  cout << "get DOB day: 5" << endl;
  cout << "get DOB month: 4" << endl;
  cout << "get DOB year: 102" << endl;
  cout << "get email: nick.green@richmond.edu" << endl;
  cout << "get address: 410 Westhampton Way" << endl;
  cout << "get phone number: 8454566666" << endl;
  cout << "get date of admit day: 3" << endl;
  cout << "get date of admit month: 5" << endl;
  cout << "get date of admit year: 117" << endl;
  cout << "check if school is A&S: 1" << endl;
  cout << "get is full time: 1" << endl;
  cout << "get units completed: 30.5" << endl;
  cout << endl;
  cout << "Actual output:" << endl;
  cout << "get UR ID: " << temp3.getURID() << endl;
  cout << "get net ID: " << temp3.getNetID() << endl;
  cout << "get last name: " << temp3.getLastName() << endl;
  cout << "get first name: " << temp3.getFirstName() << endl;
  
  struct tm tmpS5 = temp3.getDateOfBirth();
  cout << "get DOB day: " << tmpS5.tm_yday << endl;
  cout << "get DOB month: " << tmpS5.tm_mon << endl;
  cout << "get DOB year: " << tmpS5.tm_year << endl;
  cout << "get email: " << temp3.getEmail() << endl;
  cout << "get address: " << temp3.getAddress() << endl;
  cout << "get phone number: " << temp3.getPhone() << endl;
  
  struct tm tmpS6 = temp3.getAdmitDate();
  cout << "get date of admit day: " << tmpS6.tm_yday << endl;
  cout << "get date of admit month: " << tmpS6.tm_mon << endl;
  cout << "get date of admit year: " << tmpS6.tm_year << endl;
  cout << "check if school is A&S: ";
  
  if (temp3.getSchool() == School::as)
      cout << "1" << endl;
  else
      cout << "0" << endl; 
  cout << "get is full time: " << temp3.isFullTime() << endl;
  cout << "get units completed: " << temp3.getUnitsCompleted() << endl;
  cout << endl;

  cout << "----------------------------" << endl;
  cout << "Testing get/add/print/remove/set/clear courses functions" << endl;
  cout << endl;
  
  temp3.addCourse("CMSC240");
  temp3.addCourse("CMSC301");
  temp3.addCourse("MATH395");
  cout << "temp3.addCourse(\"CMSC240\");" << endl;
  cout << "temp3.addCourse(\"CMSC301\");" << endl;
  cout << "temp3.addCourse(\"MATH395\");" << endl;
  cout << endl;
  cout << "Expected output: " << endl;
  cout << "get courses and print: CMSC240 CMSC301 MATH395" << endl;
  cout << endl;
  cout << "Actual output: " << endl;
  cout << "get courses and print: ";
  for (auto course: temp3.getCourses()){
      cout << course << " ";
  }
  cout << endl;
  cout << endl;
  cout << "----------------------------" << endl;

  temp3.addCourse("MATH312");
  cout << "temp3.addCourse(\"MATH312\");" << endl;
  cout << "temp3.printCourses()" << endl;
  cout << endl;
  cout << "Expected output: " << endl;
  cout << "CMSC240 CMSC301 MATH395 MATH312" << endl;
  cout << endl;
  cout << "Actual output: " << endl;
  temp3.printCourses();
  cout << endl;
  cout << "----------------------------" << endl;

  temp3.removeCourse("CMSC301");
  cout << "temp3.removeCourse(\"CMSC301\");" << endl;
  cout << endl;
  cout << "Expected output: " << endl;
  cout << "print courses: CMSC240 MATH395 MATH312" << endl;
  cout << endl;

  cout << "Actual output: " << endl; 
  cout << "print courses: ";
  temp3.printCourses();
  cout << endl;
  cout << "----------------------------" << endl;
  
  std::list<std::string> newCourses;
  
  newCourses.push_back("MATH329");
  newCourses.push_back("CMSC222");
  newCourses.push_back("MATH245");
  
  temp3.setCourses(newCourses);

  cout << "std::list<std::string> newCourses;" << endl;
  cout << endl;
  cout << "newCourses.push_back(\"MATH329\");" << endl;
  cout << "newCourses.push_back(\"CMSC222\");" << endl;
  cout << "newCourses.push_back(\"MATH245\");" << endl;
  cout << "temp3.setCourses(newCourses);" << endl;
  cout << endl;
  cout << "Expected output: " << endl;
  cout << "print courses: MATH329 CMSC222 MATH245" << endl;
  cout << endl;

  cout << "Actual output: " << endl; 
  cout << "print courses: ";
  temp3.printCourses();
  cout << endl;
  
  cout << "----------------------------" << endl;

  temp3.clearCourses();
  cout << "temp3.clearCourses();" << endl;
  cout << endl;
  cout << "Expected output: " << endl;
  cout << "print courses: " << endl;
  cout << endl;

  cout << "Actual output: " << endl; 
  cout << "print courses: ";
  temp3.printCourses();
  cout << endl;
  cout << "----------------------------" << endl;
  cout << "Testing get and set admit date function" << endl;
  cout << endl;

  temp3.setAdmitDate(29, 1, 118);
  struct tm tmpS7 = temp3.getAdmitDate();
  cout << "temp3.setAdmitDate(29, 1, 118);" << endl;
  cout << "struct tm tmpS7 = temp3.getAdmitDate();" << endl;
  cout << endl;
  cout << "Expected output: " << endl;
  cout << "get date of admit day: 29" << endl;
  cout << "get date of admit month: 1" << endl;
  cout << "get date of admit year: 118" << endl;
  
  cout << endl;

  cout << "Actual output: " << endl;
  cout << "get date of admit day: " << tmpS7.tm_yday << endl;
  cout << "get date of admit month: " << tmpS7.tm_mon << endl;
  cout << "get date of admit year: " << tmpS7.tm_year << endl;
  cout << endl;

  cout << "----------------------------" << endl;
  cout << "Testing set and get school functions" << endl;
  cout << endl;
  
  cout << "temp3.setSchool(School::rsb);" << endl; 
  cout << "if (temp3.getSchool() == School::rsb)" << endl;
  cout << "\tcout << \"1\" << endl;" << endl;
  cout << "else" << endl;
  cout << "\tcout << \"0\" << endl;" << endl; 
  cout << endl;

  cout << "Expected output: 1" << endl;
  cout << endl;

  cout << "Actual output: ";
  temp3.setSchool(School::rsb);
  if (temp3.getSchool() == School::rsb)
      cout << "1" << endl;
  else
      cout << "0" << endl; 
  cout << endl;
  
  cout << "----------------------------" << endl;
  cout << "Testing set and get units completed functions" << endl;
  cout << endl;

  cout << "temp3.setUnitsCompleted(40.5);" << endl;
  cout << "temp3.getUnitsCompleted();" << endl;
  cout << endl;
  cout << "Expected output: 40.5" << endl;
  cout << endl;
  
  temp3.setUnitsCompleted(40.5);
  cout << "Actual output: " << temp3.getUnitsCompleted() << endl;
  cout << endl;
  
  cout << "----------------------------" << endl;
  cout << "Testing is and set full time functions" << endl;
  cout << endl;

  cout << "temp3.setFullTime(false);" << endl;
  cout << "temp3.isFullTime();" << endl;
  cout << endl;
  cout << "Expected output: 0" << endl;
  cout << endl;

  temp3.setFullTimeStatus(false);
  cout << "Actual output: " << temp3.isFullTime() << endl;
  cout << endl;
  
  cout << "----------------------------" << endl;
  cout << "Testing get and set GPA functions" << endl;
  cout << endl;

  cout << "temp3.setGPA(3.72);" << endl;
  cout << endl;
  cout << "Expected output: " << endl;
  cout << "get gpa: 3.72" << endl;
  cout << endl;

  temp3.setGPA(3.72);
  cout << "Actual output: " << endl;
  cout << "get gpa: " << temp3.getGPA() << endl;

  cout << endl;
  
  return 0;
}
