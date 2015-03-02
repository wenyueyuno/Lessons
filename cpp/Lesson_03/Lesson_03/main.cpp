//  继承
//  main.cpp
//  Lesson_03
//
//  Created by wenyueyun on 15/3/2.
//  Copyright (c) 2015年 wenyueyun. All rights reserved.
//

#include <iostream>
#include "Man.h"


int main(int argc, const char * argv[]) {
    Man * m = new Man();
    m -> sayHello();
    m -> getAge();
    delete m;
    return 0;
}
