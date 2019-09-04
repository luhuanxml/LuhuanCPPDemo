//
// Created by ShengChang on 2019/9/4.
//

#include <iostream>
#include "Math.h"

using namespace std;

int Math::math_abs(int value) {
    return value > 0 ? value : -value;
}

int Math::sum() {
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

int Math::sumOneToTen() {
    int sum = 0;
    for (int i = 1; i <= 10; ++i) {
        sum += i;
    }
    return sum;
}
