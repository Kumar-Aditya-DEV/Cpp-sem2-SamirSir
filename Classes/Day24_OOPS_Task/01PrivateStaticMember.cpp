#include <iostream>
using namespace std;

class Config {
private:
    static int value;   // ye mera private static member hai

public:
    // ye hai static setter
    static void setValue(int v) {
        value = v;
    }

    // ye mera static getter
    static int getValue() {
        return value;
    }
};

// static member definition padh le 
int Config::value = 0;

int main() {
    Config::setValue(42);
    cout << Config::getValue();  
    
}


