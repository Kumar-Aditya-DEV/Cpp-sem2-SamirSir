// constructor-object-array

#include <iostream>
using namespace std;

class Book
{
public:
    int book_id;
    string book_name;
    float price;


    Book(int id, string name, float p)
    {
        book_id = id;
        book_name = name;
        price = p;
    }


    void display()
    {
        cout << "Book ID: " << book_id << endl;
        cout << "Book Name: " << book_name << endl;
        cout << "Price: " << price << endl;
        cout << endl;
    }
};

int main()
{

    Book b1(1, "C++ Basics", 300);
    Book b2(2, "Data Structures", 450);
    Book b3(3, "Algorithms", 500);


    b1.display();
    b2.display();
    b3.display();

    return 0;
}