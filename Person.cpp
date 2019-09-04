//
// Created by ShengChang on 2019/9/4.
//

#include "Person.h"

string Person::getInfo() {
    age = 20;
    name = "鲁欢";
    return name + "的年龄"+to_string(age);
}
