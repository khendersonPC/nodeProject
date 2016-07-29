//
//  HashTable.cpp
//  nodeProject
//
//  Created by Henrichsen, Cody on 7/29/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "HashTable.hpp"


template<class Type>

HashTable<Type> :: HashTable()
{
    
    
    this->capacity = 101;
    
    this->size = 0;
    
    this->efficiencyPercentage = 0.66;
    
    
    this->front = new HashNode<Type>();
    
    HashNode<Type> *currentEnd = front;

    for(int index = 1; index < capacity; index ++)
    {
        HashNode<Type> *next = new HashNode<Type>();
        currentEnd->setNode(next);
        currentEnd = next;
    }//end loop to create the 1st array of nodes for storage
    
}




