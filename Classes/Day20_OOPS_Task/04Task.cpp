// cpp-static-member-car


#include <iostream>
using namespace std;

class Car
{
public:
    string carName;
    float price;

    static int totalCars;  


    Car(string name, float p)
    {
        carName = name;
        price = p;
        totalCars++;  
    }

    void display()
    {
        cout << "Car Name: " << carName << endl;
        cout << "Price: " << price << endl;
        cout << "------------------" << endl;
    }


    static void showTotalCars()
    {
        cout << "Total Cars Created: " << totalCars << endl;
    }
};


int Car::totalCars = 0;

int main()
{
    Car c1("Toyota", 1500000);
    Car c2("Honda", 1200000);
    Car c3("BMW", 5000000);

    c1.display();
    c2.display();
    c3.display();

    Car::showTotalCars();

    return 0;
}