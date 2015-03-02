//
//  Man.cpp
//  Lesson_03
//
//  Created by wenyueyun on 3/2/15.
//  Copyright (c) 2015 wenyueyun. All rights reserved.
//

#include "Man.h"

//执行父类的构造函数
Man::Man(int age):People(age,1)
{
    
}

void Man::sayHello()
{
    //执行父类的方法
    People::sayHello();
    
    printf("man say hello \n");
}