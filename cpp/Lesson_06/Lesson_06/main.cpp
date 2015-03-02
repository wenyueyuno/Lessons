//
//  main.cpp
//  Lesson_06
//
//  Created by wenyueyun on 3/2/15.
//  Copyright (c) 2015 wenyueyun. All rights reserved.
//

#include <iostream>
#include "Man.h"
int main(int argc, const char * argv[]) {
    Man * m = new  Man(5);
    m -> sayHello();
    //m -> People::sayHello();
    delete m;
    
    return 0;
}
