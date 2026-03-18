#include <iostream>
using namespace std;

class Rectangle {
private:
    double width, height;   // private data

public:
    // setter with validation
    void setDimensions(double w, double h) {
        if (w > 0 && h > 0) {
            width = w;
            height = h;
        } else {
            cout << "Invalid dimensions!" << endl;
        }
    }

    // get area
    double getArea() {
        return width * height;
    }

    // get perimeter
    double getPerimeter() {
        return 2 * (width + height);
    }
};

int main() {
    Rectangle r;              // object create
    r.setDimensions(5, 3);    // set values

    cout << "Area = " << r.getArea() << endl;
    cout << "Perimeter = " << r.getPerimeter() << endl;

    return 0;
}