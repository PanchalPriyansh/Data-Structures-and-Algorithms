#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    float cgpa;

public:
    // constructor for Student Class
    Student(string name, float cgpa)
    {
        this->name = name;
        this->cgpa = cgpa;
    }

    // getter for name
    string getName()
    {
        return this->name;
    }

    // getter for cgpa
    float getCgpa()
    {
        return this->cgpa;
    }

    // member function(method)
    float getPercentage()
    {
        return (this->cgpa * 10);
    }
};

int main()
{
    Student s1("Priyansh", 8.5);

    cout << "Student name: " << s1.getName() << endl;
    cout << "Student CGPA: " << s1.getCgpa() << endl;
    cout << "Percentage score: " << s1.getPercentage() << "%" << endl;
    return 0;
}