#include <iostream>
using namespace std;

class student {
public:
    student() {
        cout << "constructor called:" << endl;
    }

    void hello() {
        cout << "hello:" << endl;
    }

    ~student() {
        cout << "destructor called:" << endl;
    }
};

int main() {
    student s1;
    s1.hello();
    return 0;
}
