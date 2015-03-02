//
//  Object.cpp
//  Lesson_04
//
//  Created by wenyueyun on 3/2/15.
//  Copyright (c) 2015 wenyueyun. All rights reserved.
//

#include "Object.h"

Object::Object()
{
    //创建对象的时候执行构造函数（new）
    printf("create object \n");
}

Object::~Object()
{
    //删除对象的时候执行析构函数（delete）
    printf("delete object \n");
}