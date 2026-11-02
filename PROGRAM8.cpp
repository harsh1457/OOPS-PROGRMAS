#include <iostream>
using namespace std;
class BasicInfo
{
protected:
int id;
string name;
int age;
public:
void readBasicInfo()
{
cout << "Enter Employee ID: ";
cin >> id;
    cout << "Enter Employee Name: ";
    cin >> name;
    cout << "Enter Employee Age: ";
    cin >> age;
}
void displayBasicInfo()
{
    cout << "Employee ID: " << id << endl;
    cout << "Employee Name: " << name << endl;
    cout << "Employee Age: " << age << endl;
}
};
class DepartmentInfo
{
protected:
string department;
float salary;
public:
void readDepartmentInfo()
{
cout << "Enter Department: ";
cin >> department;

    cout << "Enter Salary: ";
    cin >> salary;
}
void displayDepartmentInfo()
{
    cout << "Department: " << department << endl;
    cout << "Salary: " << salary << endl;
}
};
class Employee : public BasicInfo, public DepartmentInfo
{
public:
void read()
{
readBasicInfo();
readDepartmentInfo();
}
void display()
{
    displayBasicInfo();
    displayDepartmentInfo();
}
};
int main()
{
Employee e;
cout << "Enter Employee Information\n";
e.read();
cout << "\nEmployee Details\n";
e.display();
return 0;
}
}
