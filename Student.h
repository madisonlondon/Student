// The class Student inherits from the class Person, thus in addition to having all the attributes
// of the Person class, it also allows the user to create instances of admitance date, which school
// within University of Richmond they belong to, whether they are full time, number of units completed
// GPA, and courses. With each there are getter and setter methods, specifically with courses you can
// get, add, remove, print, set, and clear. There are three contructors: a default, a copy, and 
// parameterized.

#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <list>
#include "Person.h"

// enum: see http://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-enum
// for printing: use static_cast<typename std::underlying_type<School>::type>()
enum class School {as, jsls, law, rsb, spcs, undefined};

class Student : public Person
{
    protected:
        struct tm admitDate;
        School schoolOf;
        bool is_Full_Time;
        double units_Completed;
        std::list<std::string> courses;
        double GPA;
        
    public:
        Student();                      // explicitly call Person() on implementation
        Student(const Student& other);  // call Person(other) on implementation
        Student(int urid, std::string netid, std::string lname, std::string fname, 
               int dob_day, int dob_mo, int dob_yr, 
               std::string email, std::string address, long phone,
               int day_admit, int month_admit, int year_admit,
               School school, bool is_full_time, 
               double units_completed);
        ~Student();

        std::list<std::string> getCourses();
        void                   addCourse(std::string course);
        void                   removeCourse(std::string course);
        void                   printCourses();
        void                   setCourses(std::list<std::string> courses);
        void                   clearCourses();

        struct tm              getAdmitDate();
        School                 getSchool();
        double                 getGPA();
        double                 getUnitsCompleted();
        bool                   isFullTime();

        void setAdmitDate(int day, int month, int year);
        void setSchool(School school);
        void setFullTimeStatus(bool isFullTime);
        void setGPA(double gpa);
        void setUnitsCompleted(double units);
};

#endif
