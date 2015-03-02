//
//  main.cpp
//  Lesson_01
//
//  Created by wenyueyun on 15/3/2.
//  Copyright (c) 2015年 wenyueyun. All rights reserved.
//

#include <iostream>
#include "People.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    People * p = new People();
    p -> sayHello();
    delete p;
  
    return 0;
}
