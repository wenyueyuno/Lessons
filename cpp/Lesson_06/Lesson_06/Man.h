//
//  Man.h
//  Lesson_03
//
//  Created by wenyueyun on 3/2/15.
//  Copyright (c) 2015 wenyueyun. All rights reserved.
//

#ifndef __Lesson_03__Man__
#define __Lesson_03__Man__

#include <stdio.h>
#include "People.h"

//继承people
class Man:public People {
    
    
public:
    Man(int age);
    void sayHello();
};

#endif /* defined(__Lesson_03__Man__) */
