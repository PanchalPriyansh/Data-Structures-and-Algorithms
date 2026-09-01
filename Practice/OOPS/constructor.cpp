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
    Student s2("Samarth", 8.7);

    cout << "Student1 name: " << s1.getName() << endl;
    cout << "Student1 CGPA: " << s1.getCgpa() << endl;
    cout << "Percentage score: " << s1.getPercentage() << "%" << endl;

    cout << "Student2 name: " << s2.getName() << endl;
    cout << "Student2 CGPA: " << s2.getCgpa() << endl;
    cout << "Percentage score: " << s2.getPercentage() << "%" << endl;
    return 0;
}