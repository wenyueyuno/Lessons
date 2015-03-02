//
//  People.h
//  Lesson_01
//
//  Created by wenyueyun on 15/3/1.
//  Copyright (c) 2015年 wenyueyun. All rights reserved.
//

#ifndef __Lesson_01__People__
#define __Lesson_01__People__

#include <stdio.h>

class People
{
private:
    int age;
    int sex;
    
public:
    People();
    People(int age,int sex);
    int getAge();
    int getSex();
    void sayHello();
};


#endif /* defined(__Lesson_01__People__) */
