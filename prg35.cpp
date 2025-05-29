// compute area of rectangle and triangle using classes
#include <iostream>
using namespace std;
class Rectangle {
    public:
        float length, breadth;
        void getData() {
            cout << "Enter length and breadth of rectangle: ";
            cin >> length >> breadth;
        }
        float computeArea() {
            return length * breadth;
        }
};
class Triangle {
    public:
        float base, height;
        void getData() {
            cout << "Enter base and height of triangle: ";
            cin >> base >> height;
        }
        float area() {
            return 0.5 * base * height;
        }
};
int main() {
    Rectangle rect;
    Triangle tri;

    rect.getData();
    cout << "Area of rectangle: " << rect.computeArea() << endl;

    tri.getData();
    cout << "Area of triangle: " << tri.area() << endl;

    return 0;
}