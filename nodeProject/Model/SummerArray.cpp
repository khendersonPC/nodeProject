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

template <class Type>
//writing a method below
Type SummerArray<Type> :: getFromIndex(int index) //retrieve what is at an index
{
    //when there is a return type- declare an instance of a return type1
    assert(index>= 0);
    assert(index < length);
    //assert basically makes the program die if it doesn't meant the parameters
    
   
    
    Type retrievedValue;
    
    DataNode<Type> *indexPointer = front;
    for(int position = 0; position < index; position++)
    {
        indexPointer =  indexPointer->getNodePointer(); //-> is the same as . dot method
    }
    
    retrievedValue = indexPointer->getNodeData();
    
    return retrievedValue;
}//end method getFromIndex

template <class Type>
Type SummerArray<Type> :: getFirst()
{
    return front->getNodeData();
}//end method getFirst

template <class Type>
Type SummerArray<Type> :: getLast()
{
    return end->getNodeData();
}//end method getFirst


template <class Type>
void SummerArray<Type> :: setAtIndex(int index, Type data)//go to an index and replace it with what is being supplied- destroys existing data
{
    assert(index>= 0 && index < length);
    
    DataNode<Type> *indexPointer = front;
    
    for (int position = 0; position < index; position ++)
    {
        indexPointer = indexPointer->getNodePointer();
    }//end of for loop
    
    indexPointer->setNodeData(data);
}//end of setAtIndex method
