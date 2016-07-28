//
//  BinaryTreeNode.cpp
//  nodeProject
//
//  Created by Henrichsen, Cody on 7/28/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "BinaryTreeNode.hpp"

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : DataNode<Type>()
//we call the superclass in the header line
{
    parent = nullptr;
    rightChild = nullptr;
    leftChild = nullptr;
    
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : DataNode<Type>(data)
//passing data parameter to the superclass constructor
{
    //this->setNodeData(data); This is not needed b/c of "DataNode<Type>(data)" above- you don't have to call it b/c it is implicit
    parent = nullptr;
    rightChild = nullptr;
    leftChild = nullptr;
    //setNodeData(data); //wou compile b/c of inheritance

}

template<class Type>
BinaryTreeNode<Type>*BinaryTreeNode<Type> :: getParent()
{
    return parent;
}

template<class Type>
BinaryTreeNode<Type>*BinaryTreeNode<Type> :: getRightChild()
{
    return rightChild;
}

template<class Type>
BinaryTreeNode<Type>*BinaryTreeNode<Type> :: getLeftChild()
{
    return leftChild;
}

template <class Type>
void BinaryTreeNode<Type> :: setLeftChild(BinaryTreeNode<Type>*leftChild)
{
    this ->leftChild = leftChild;
}

template <class Type>
void BinaryTreeNode<Type> :: setRightChild(BinaryTreeNode<Type>*rightChild)
{
    this ->rightChild = rightChild;
}

template <class Type>
void BinaryTreeNode<Type> :: setParent(BinaryTreeNode<Type>*parent)
{
    this ->parent = parent;
}
