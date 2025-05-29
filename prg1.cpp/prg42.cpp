//create a class Circle with private members radius and a public function to input the radius and calculate the area
#include <iostream>
using namespace std;
class Circle {
private:
    float radius;
public:
    void inputRadius(float r) {
        radius = r;
    }

    float calculateArea() {
        return 3.14 * radius * radius; // Using 3.14 as an approximation for π
    }
};
int main() {
    Circle circle;
    float r;

    cout << "Enter the radius of the circle: ";
    cin >> r;

    circle.inputRadius(r);
    float area = circle.calculateArea();

    cout << "The area of the circle is: " << area << endl;

    return 0;
}
