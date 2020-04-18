// The class Person allows the user to create an object of type Person, offering two constructors (the first being a default). 
// Each instance of Person has the following: a urID, netID, last name, first name, birthday (including day, month, and year), 
// email address, address, and phone number. There exists a getter and setter method to access or modifiy each value of protected 
// data that an instance of Person has. 

#ifndef __PERSON_H__
#define __PERSON_H__

#include <string>
#include <ctime>
#include <cwchar>
using namespace std;

class Person
{
    protected:
        int urID;
        string netID;
        string lastName;
        string firstName;
        string emailAddress; 
        string address; 
        long phone;
        struct tm tmp;

    public:
        Person();
        Person(const Person& other);
        Person(int urid, string netid, string lname, string fname,
               int dob_day, int dob_month, int dob_year,
               string email, string address, long phone);
        ~Person();

        string  getFirstName();
        string  getLastName();
        struct tm    getDateOfBirth();
            // see http://www.cplusplus.com/reference/ctime/tm/
        string  getAddress();
        string  getNetID();
        int     getURID();
        string  getEmail();
        long    getPhone();

        void setFirstName(string fname);
        void setLastName(string lname);
        void setDateOfBirth(int day, int month, int year);
        void setAddress(string address);
        void setNetID(string netid);
        void setURID(int urid);
        void setEmail(string email);
        void setPhone(long number);
};

#endif
