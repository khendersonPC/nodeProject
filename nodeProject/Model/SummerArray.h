//
//  SummerArray.h
//  nodeProject
//
//  Created by Henrichsen, Cody on 7/27/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef SummerArray_h
#define SummerArray_h
#include "DataNode.h"
#include <stdio.h>

template <class Type>
class SummerArray
{
private:
    int length;
    bool *modifiedNodes;//* is a pointer
    DataNode <Type> front;
    DataNode<Type> end;
    
    
};

#endif /* SummerArray_h */
