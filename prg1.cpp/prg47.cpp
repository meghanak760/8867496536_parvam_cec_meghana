// create a class box with private variables ,length,width,and height 
#include <iostream>
using namespace std;
class Box {
private:
    float length;
    float width;
    float height;
public:
    void setDimensions(float l, float w, float h) {
        length = l;
        width = w;
        height = h;
    }
    float calculateVolume() {
        return length * width * height;
    }
    
};
int main() {
    Box box;
    float length, width, height;
    cout << "Enter the length of the box: ";
    cin >> length;
    cout << "Enter the width of the box: ";
    cin >> width;
    cout << "Enter the height of the box: ";
    cin >> height;
    box.setDimensions(length, width, height);
    float volume = box.calculateVolume();
    cout << "The volume of the box is: " << volume << endl;
    return 0;
}
