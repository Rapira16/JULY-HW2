#include <iostream>
#include <string>

class Person
{
public:
    std::string m_name;
    int m_age;
    std::string m_gender;
    int m_mass;
    
    void setname (std::string name = "vova") {m_name = name; }
    void setage (int age = 23) {m_age = age; }
    void setmass (int mass = 70) {m_mass = mass; }
    
    class Student 
    {
    public:
        int m_year;
    
    class Student : public Person {}
    
    void setyear (int year = 2021) {m_year = year;}
    };
};