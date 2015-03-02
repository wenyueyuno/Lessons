//
//  main.cpp
//  Lesson_04
//
//  Created by wenyueyun on 3/2/15.
//  Copyright (c) 2015 wenyueyun. All rights reserved.
//

#include <iostream>
#include "Object.h"

void run()
{
//    {
        Object obj;//代码块里面执行构造跟析构函数
//    }
    printf("run end \n");
}

int main(int argc, const char * argv[]) {
//    Object * obj = new Object();
//    delete obj;
    
    run();
    printf("end \n");
    return 0;
}
