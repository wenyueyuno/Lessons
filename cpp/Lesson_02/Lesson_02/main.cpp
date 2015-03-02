//  命名空间
//  main.cpp
//  Lesson_02
//
//  Created by wenyueyun on 15/3/2.
//  Copyright (c) 2015年 wenyueyun. All rights reserved.
//

#include <iostream>
#include "People.h"

//使用命名空间
using namespace wenyueyun;

int main(int argc, const char * argv[]) {
    People * p = new People();
    p->sayHello();
    delete p;    return 0;
}
