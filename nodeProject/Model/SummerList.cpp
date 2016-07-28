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
    
    //create a node below
    DataNode<Type> *newNode = new DataNode<Type>(data);//newNode is the address- it is a pointer,it makes a new dataNode and a new Pointer
    
    if(index == 0)
    {
        addAtFront(data);
 
    }
    else if(index == size - 1)
    {
        add(data);

    }
    else
    {
        for(int position = 0; position < index - 1; position++)
        {
            indexPointer = indexPointer->getNodePointer();
        }//get to the spot before the spot i am adding
        
        
        
        DataNode<Type> *temp = indexPointer->getNodePointer();
        newNode->setNodePointer(temp);
        
        indexPointer->setNodePointer(newNode);
        //setting indexPointer to point to newNode address
        
        size++;
  
    }
}

template <class Type>
void SummerList<Type> :: add(Type data)
{
    DataNode<Type> *newNode = new DataNode<Type>(data);
    if(size == 0 )
    {
        front = newNode;
        end = newNode;
    }
    else
    {
        end->setNodePointer(newNode);
        end = newNode;
    }
    size++;
}

template <class Type>
void SummerList<Type> :: addAtFront(Type data)
{
    //create a node
    DataNode<Type> *newNode = new DataNode<Type>(data);
    
    if(size == 0)
    {
        front = newNode;
        end = newNode;
    }
    else
    {
        newNode->setNodePointer(front);//you can use front instead, it is the same thing
        front = newNode;

    }
    size++;
}

template <class Type>
Type SummerList<Type> :: remove(int index)
{
    assert (index >= 0 && index < size);
    Type removedValue;
    
    DataNode<Type> *indexPointer = front;
    DataNode<Type> *removedNode = nullptr;
    DataNode<Type> *next = nullptr;
    
    if (size == 1)
    {
        removedValue = front->getNodeData();
        
        delete indexPointer;
        front = nullptr;
        end = nullptr;
    }
    else if(index == 0)
    {
        removedValue = front->getNodeData();
        front = front->getNodePointer();
        
        delete indexPointer;
        
    }
    else
    {
        for(int position = 0; position < index - 1; position ++)
        {
            indexPointer = indexPointer->getNodePointer();
        }
        
        removedNode = indexPointer->getNodePointer();
        next = removedNode->getNodePointer();
        
        if(removedNode == end)
        {
            end = indexPointer;
        }
        
        indexPointer->setNodePointer(next);
        removedNode->setNodePointer(nullptr);
        
        removedValue = removedNode->getNodeData();
        
        delete removedNode;
    }
    size--;
    
    return removedValue;
}

template <class Type>
bool SummerList<Type> :: contains(Type data)
{
    bool isInList = false;
    
    DataNode<Type> *containsPointer = front;
    
    for(int index = 0; index < size; index ++)
    {
        if (data == containsPointer->getNodeData())
        {
            isInList = true;
        }
        containsPointer = containsPointer->getNodePointer();//changes the pointer to point to the next node
        
    }
    
    return isInList;
}
