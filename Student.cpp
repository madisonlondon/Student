// The class Student inherits from the class Person, thus in addition to having all the attributes
// of the Person class, it also allows the user to create instances of admitance date, which school
// within University of Richmond they belong to, whether they are full time, number of units completed
// GPA, and courses. With each there are getter and setter methods, specifically with courses you can
// get, add, remove, print, set, and clear. There are three contructors: a default, a copy, and 
// parameterized.

#include "Student.h"
#include <iostream>

Student::Student() : Person(){
   admitDate.tm_yday = 0;
   admitDate.tm_mon = 0;
   admitDate.tm_year = 0;
   schoolOf = School::undefined;
   is_Full_Time = true;
   units_Completed = 0.0;
}

Student::Student(const Student& other) : Person(other){
   admitDate.tm_yday = other.admitDate.tm_yday;
   admitDate.tm_mon = other.admitDate.tm_mon;
   admitDate.tm_year = other.admitDate.tm_year;
   schoolOf = other.schoolOf;
   is_Full_Time = other.is_Full_Time;
   units_Completed = other.units_Completed;
}

Student::Student(int urid, std::string netid, std::string lname, std::string fname, 
               int dob_day, int dob_mo, int dob_yr, 
               std::string email, std::string address, long phone,
               int day_admit, int month_admit, int year_admit,
               School school, bool is_full_time, 
               double units_completed) : Person(urid, netid, lname, fname, dob_day,
               dob_mo, dob_yr, email, address, phone){
                   admitDate.tm_yday = day_admit;
                   admitDate.tm_mon = month_admit;
                   admitDate.tm_year = year_admit;
                   schoolOf = school;
                   is_Full_Time = is_full_time;
                   units_Completed = units_completed;
               }

Student::~Student() {}

std::list<std::string> Student::getCourses(){
    return courses;
}

void Student::addCourse(std::string course){
    courses.push_back(course);
}

void Student::removeCourse(std::string course){
    courses.remove(course);
}

void Student::printCourses(){
  for (auto course: courses){
      cout << course << " ";
  }
  cout << endl;
}

void Student::setCourses(std::list<std::string> courses){
    this->courses = courses;
}

void Student::clearCourses(){
    courses.clear();
}

struct tm Student::getAdmitDate(){ 
    return admitDate;
}

School Student::getSchool(){ 
    return schoolOf; 
}

double Student::getGPA(){ 
    return GPA;
}

double Student::getUnitsCompleted(){ 
    return units_Completed; 
}

bool Student::isFullTime(){ 
    return is_Full_Time; 
}

void Student::setAdmitDate(int day, int month, int year){
    admitDate.tm_yday = day;
    admitDate.tm_mon = month;
    admitDate.tm_year = year;
}

void Student::setSchool(School school){
    schoolOf = school;
}

void Student::setFullTimeStatus(bool isFullTime){
    is_Full_Time = isFullTime;
}

void Student::setGPA(double gpa){
    GPA = gpa;
}

void Student::setUnitsCompleted(double units){
    units_Completed = units;
}
