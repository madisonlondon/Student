// The class Person allows the user to create an object of type Person, offering two constructors (the first being a default). 
// Each instance of Person has the following: a urID, netID, last name, first name, birthday (including day, month, and year), 
// email address, address, and phone number. There exists a getter and setter method to access or modifiy each value of protected 
// data that an instance of Person has. 

#ifndef __PERSON_CPP__
#define __PERSON_CPP__

#include "Person.h"

Person::Person() 
{
  urID = 0;
  netID = "0";
  lastName = "";
  firstName = "";
  tmp.tm_yday = 0;
  tmp.tm_mon = 0;
  tmp.tm_year = 0;
  emailAddress = "";
  address = "";
  phone = 0;
}
Person::Person(const Person& other) 
{
  urID = other.urID;
  netID = other.netID;
  lastName = other.lastName;
  firstName = other.firstName; 
  struct tm copyStruct = other.tmp;
  tmp.tm_yday = copyStruct.tm_yday;
  tmp.tm_mon = copyStruct.tm_mon;
  tmp.tm_year = copyStruct.tm_year;
  emailAddress = other.emailAddress;
  address = other.address;
  phone = other.phone;
}
Person::Person(int urid, string netid, string lname, string fname,
       int dob_day, int dob_month, int dob_year,
       string email, string address, long phone) 
{
  urID = urid; 
  netID = netid; 
  lastName = lname; 
  firstName = fname; 
  tmp.tm_yday = dob_day;
  tmp.tm_mon = dob_month;
  tmp.tm_year = dob_year;
  emailAddress = email;
  this->address = address;
  this->phone = phone;
}
Person::~Person() {}

string Person::getFirstName()
{
  return firstName;
}

string Person::getLastName()
{
  return lastName;
}

struct tm Person::getDateOfBirth()
{
  return tmp;
}

string Person::getAddress()
{
  return address;
}

string Person::getNetID()
{
  return netID;
}

int Person::getURID()
{
  return urID;
}

string Person::getEmail()
{
  return emailAddress;
}

long Person::getPhone()
{
  return phone;
}

void Person::setFirstName(string fname) 
{
  firstName = fname; 
}

void Person::setLastName(string lname) 
{
  lastName = lname; 
}

void Person::setDateOfBirth(int day, int month, int year) 
{
  tmp.tm_yday = day;
  tmp.tm_mon = month;
  tmp.tm_year = year;
}

void Person::setAddress(string address) 
{
  this->address = address;
}

void Person::setNetID(string netid) 
{
  netID = netid;
}

void Person::setURID(int urid) 
{
  urID = urid;
}

void Person::setEmail(string email) 
{
  emailAddress = email;
}

void Person::setPhone(long number) 
{
  phone = number;
}

#endif
