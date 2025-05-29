//create a class student that takes roll number as constrtuctor parameter and display them as a using a function
#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int rollNumber;
public:
    Student(string n, int roll) :name(n), rollNumber(roll) {}
    void displaydetails() {
        cout << "Roll Number: " << rollNumber << endl;
        cout<<"Name: " << name << endl;
    }
};
int main() {
    Student student("alice" ,101);
    cout << "Enter the name of the student: \n";
    student.displaydetails();
    return 0;
}