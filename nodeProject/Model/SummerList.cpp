//
//  SummerList.cpp
//  nodeProject
//
//  Created by Henrichsen, Cody on 7/27/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "SummerList.hpp"
#include <assert.h>

template <class Type>
SummerList<Type> :: SummerList()
{
    size = 0;
    front = nullptr;
    end = nullptr;
}//end of constructor method for the list

template <class Type>

void SummerList<Type> :: addAtIndex(int index, Type data)
{
    assert(index>=0 && index <= size);
    //different from array- we can add to the end
    
    DataNode<Type> *indexPointer = front;
    
    for(int position = 0; position < index - 1; position++)
    {
        indexPointer = indexPointer->getNodePointer();
    }//get to the spot before the spot i am adding
    
    DataNode<Type> * newNode = new DataNode<Type>(data);//newNode is the address- it is a pointer
    
    newNode->setNodePointer(indexPointer->getNodePointer());
    
//    DataNode<Type> *temp = indexPointer->getNodePointer();
//    newNode->setNodePointer(temp); - this is the same as the one above
}
