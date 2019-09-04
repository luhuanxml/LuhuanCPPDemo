#include <iostream>
#include "Person.h"

using namespace std;

int sumOneToTen();

int sum();

int main() {
    cout << "Hello, World!" << endl;
    cout << sumOneToTen() << endl;
    Person person;
    cout << person.getInfo() << endl;
    sum();
    return 0;
}

/**
 * 两数相加 大于20超出范围 不参与计算
 * @return  result
 */
int sum() {
    while (true) {
        int x;
        int y;
        cin >> x >> y;
        cout << x + y << endl;
        if (x + y > 20) {
            cout << "超出计算范围" << endl;
            return 0;
        }

    }
}

/**
 * 计算1 --- 10的总和
 * @return result
 */
int sumOneToTen() {
    int sum = 0;
    for (int i = 1; i <= 10; ++i) {
        sum += i;
    }
    return sum;
}
