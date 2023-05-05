#include <iostream>
using namespace std;

class Machine {
private:
    int X, P, V;
public:
    Machine() {
        X = 0;
        P = 0;
        V = 0;
    }
    Machine(int x, int p, int v) {
        X = x;
        P = p;
        V = v;
    }
    void print() {
        cout << "X: " << X << endl;
        cout << "P: " << P << endl;
        cout << "V: " << V << endl;
    }
};

int main() {
    Machine m1;
    m1.print();

    Machine m2(10, 20, 30);
    m2.print();

    return 0;
}
