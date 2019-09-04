#include <iostream>
#include "bean/Person.h"
#include "math/Math.h"
#include "data/Computer.h"

using namespace std;

/**
 * 枚举 默认第一个成员赋值为0 后面一次大1
 */
enum Status {
    status1, status2, status3
};

namespace first {
    void print() {
        printf("first");
    }
}
namespace second {
    void print() {
        printf("second");
    }
}

int a(10);

int main() {
    method();
    cout << Status::status1 << endl;
    cout << Status::status2 << endl;
    cout << Status::status3 << endl;
    first::print();
    second::print();

    cout << a << endl;
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
