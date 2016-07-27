//
//  SummerArray.cpp
//  nodeProject
//
//  Created by Henrichsen, Cody on 7/27/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "SummerArray.h"
#include <assert.h>

template <class Type>

SummerArray<Type> :: SummerArray(int length)
{
    assert(length >0);
    
    this->length = length;
    modifiedNodes = new bool[length];
    front = nullptr;
    end = nullptr;
 
    DataNode<Type> *start = new DataNode<Type>();//make a start one first
    front = start;
    end = start;
    
    for(int index = 1; index < length; index ++)
    {
        DataNode<Type> *next = new DataNode<Type>();
        end->setNodePointer(next);
        end = next;

    }

    for(int index = 0; index < length; index++)
    {
        modifiedNodes[index] = false;
    }
}


