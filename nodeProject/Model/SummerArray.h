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
private: //instance variables
    int length;
    bool *modifiedNodes;//* is a pointer
    DataNode <Type> *front;
    DataNode<Type> *end;
    
public:
    SummerArray(int length);//constructor- doesnt have return type
    
    Type getFromIndex(int index);
    Type getFirst();
    Type getLast();
    
    void setAtIndex(int index, Type data);
    
    void sort();
    void resize(int newSize);
    int getUnusedNodes();
    int getLength();
    
};

#endif /* SummerArray_h */
