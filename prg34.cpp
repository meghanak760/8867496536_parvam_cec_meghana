#include<iostream>
using namespace std;
class Employee
{
   public:
   int id;
   string name;
    float salary;
    Employee(int empId, string empName, float empSalary)
    {
        id = empId;
        name = empName;
        salary = empSalary;
    }
    void display()
    {
        cout << id << " " << name << " " << salary << endl;
    }
};
int main(void)
{
    Employee e1(101, "Alice", 50000.0);
    Employee e2(102, "Bob", 60000.0);
    
    cout << "Employee 1: ";
    e1.display();
    
    cout << "Employee 2: ";
    e2.display();
    
    return 0;
}