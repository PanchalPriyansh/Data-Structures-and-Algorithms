#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    float cgpa;

public:
    // getter and setters for name
    string getName()
    {
        return this->name;
    }
    void setName(string name)
    {
        this->name = name;
    }

    // getters and setters for cgpa
    float getCgpa()
    {
        return this->cgpa;
    }
    void setCgpa(float cgpa)
    {
        this->cgpa = cgpa;
    }

    // member function(method)
    float getPercentage()
    {
        return (this->cgpa * 10);
    }
};

int main()
{
    Student s1;
    s1.setName("Priyansh");
    s1.setCgpa(8.5);

    cout << "Student name: " << s1.getName() << endl;
    cout << "Student CGPA: " << s1.getCgpa() << endl;
    cout << "Percentage score: " << s1.getPercentage() << "%" << endl;
    return 0;
}