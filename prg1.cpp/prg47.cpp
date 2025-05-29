// create a class box with private variables ,length,width,and height 
#include <iostream>
using namespace std;
class Box {
private:
    float length;
    float width;
    float height;
public:
    // Function to set dimensions of the box
    void setDimensions(float l, float w, float h) {
        length = l;
        width = w;
        height = h;
    }

    // Function to calculate and return the volume of the box
    float calculateVolume() {
        return length * width * height;
    }
};
int main() {
    Box box;
    float length, width, height;

    // Input dimensions from the user
    cout << "Enter the length of the box: ";
    cin >> length;
    cout << "Enter the width of the box: ";
    cin >> width;
    cout << "Enter the height of the box: ";
    cin >> height;

    // Set dimensions and calculate volume
    box.setDimensions(length, width, height);
    float volume = box.calculateVolume();

    // Output the volume
    cout << "The volume of the box is: " << volume << endl;

    return 0;
}
