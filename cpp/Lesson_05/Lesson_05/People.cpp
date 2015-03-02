//
//  People.cpp
//  Lesson_01
//
//  Created by wenyueyun on 15/3/1.
//  Copyright (c) 2015年 wenyueyun. All rights reserved.
//

#include "People.h"

//默认构造函数
People::People()
{
    this -> age = 10;
    this -> sex = 1;
}

//带参数的构造函数
People::People(int age, int sex)
{
    this -> age = age;
    this -> sex = sex;
}

int People::getAge()
{
    return this -> age;
}

int People::getSex()
{
    return this -> sex;
}

void People::sayHello()
{
    printf("继承。。。\n");
}
