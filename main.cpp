#include <iostream>
#include "bean/Person.h"
#include "math/Math.h"
#include "data/Computer.h"

using namespace std;


int main() {
    Computer computer;
    computer.cpu = "intel i5";
    computer.keyboard = "kkkb";
    computer.neicuntiao = "kingston";
    computer.yingpan = "summing";
    cout << computer.cpu << computer.keyboard << computer.neicuntiao << computer.yingpan << endl;
    Phone phone;
    phone.cpu = "麒麟芯片";
    phone.payee = "华为";
    phone.price = "¥3999";
    phone.type = "Android";
    cout << phone.cpu
         << phone.type
         << phone.price
         << phone.payee
         << endl;
    Math math;
    cout << "Hello, World!" << endl;
    cout << math.sumOneToTen() << endl;
    cout << "请输入两个数字求和:" << endl;
    math.sum();
    cout << "-10000的绝对值是" << math.math_abs(-10000) << endl;
    Person person;
    cout << person.getInfo() << endl;
    return 0;
}
