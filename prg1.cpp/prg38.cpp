//create a class rectangle with private members length and width,add a public functoin to set values and display the area
#include <iostream>
using namespace std;
class Rectangle {
private:
    float length;
    float width;
public:
    void setValues(float l, float w) {
        length = l;
        width = w;
    }

    float displayarea() {
        float area=length * width;
        cout << "Area of the rectangle: " << area << endl;
    }
};
int main() {
    Rectangle rect;
    rect.setValues(5.0, 3.0);
    rect.displayarea();
    return 0;
}
