//create a class employee make three objects store and display data for three different employees using each object
#include <iostream>
using namespace std;
class Employee {
    private:
        string name;
        int id;
        float salary;

    public:
        void setData(string n, int i, float s) {
            name = n;
            id = i;
            salary = s;
        }

        void displayData() {
            cout << "Employee Name: " << name << endl;
            cout << "Employee ID: " << id << endl;
            cout << "Employee Salary: " << salary << endl;
        }
};
int main() {
    Employee emp1, emp2, emp3;

    emp1.setData("Alice", 101, 50000);
    emp2.setData("Bob", 102, 60000);
    emp3.setData("Charlie", 103, 70000);

    cout << "Employee 1 Details:" << endl;
    emp1.displayData();
    cout << endl;

    cout << "Employee 2 Details:" << endl;
    emp2.displayData();
    cout << endl;

    cout << "Employee 3 Details:" << endl;
    emp3.displayData();
    cout << endl;
    return 0;
}
