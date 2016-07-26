//
//  DataNode.cpp
//  nodeProject
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "DataNode.h"

template <class Type>
DataNode<Type> :: DataNode()
{
    this ->nodePointer = nullptr;//or NULL
    this ->nodeData =
    
}

template <class Type>
DataNode<Type> :: DataNode(Type nodeData)
{
    this->nodeData = nodeData;
    this->nodePonter = nullptr;
}

//end of constructors

template <class Type>
Type DataNode<Type> :: getNodeData()
{
    return nodeData;
}//end of getter

template <class Type>
DataNode<Type>* DataNode<Type> :: getNodePointer()
{
    return nodePointer;
}//end of getter

template <class Type>
void DataNode<Type> :: setnodeData(Type nD)
{
    this->nodeData = nodeData;
}

template <class Type>
void DataNode<Type> :: setnodePointer(DataNode<Type>* nodePointer)
{
    this ->nodePointer = nodePointer;
}



//My guess:
//void DataNode :: getnodeData()
//{
//    return nodeData;
//}//end of getnodeData method
//
//void DataNode :: setnodeData)

