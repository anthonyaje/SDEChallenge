#include <iostream>
#include "MovingAverage.hpp"

using namespace std;

void test1() {
    cout << "============ test 1 ===============" << endl;
    anthony::MovingAverage m(3);
    for (int i = 1; i <= 10; i++) {
        m.AddElement(i);
        cout << "avg: " << m.GetMovingAvg() << endl;
    }

    assert(m.GetElement(4) == 5);
    cout << "5th el: " << m.GetElement(4) << endl;

    assert(m.WindowSize() == 3);
}

void test2() {
    cout << "============ test 2 ===============" << endl;
    anthony::MovingAverage m(1);
    for (int i = 1; i <= 10; i++) {
        m.AddElement(i);
        assert(m.GetMovingAvg() == i);
        cout << "avg: " << m.GetMovingAvg() << endl;
    }
}

void test3() {
    cout << "============ test 3 ===============" << endl;
    anthony::MovingAverage m(10);
    for (int i = 1; i <= 10; i++) {
        m.AddElement(i);
    }

    cout << "avg: " << m.GetMovingAvg() << endl;
    assert(m.GetMovingAvg() == 5.5);
}

int main() {
    test1();
    test2();
    test3();

    return 0;
}