//
//  BinaryTree.cpp
//  nodeProject
//
//  Created by Henrichsen, Cody on 7/28/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "BinaryTree.hpp"
#include <iostream>
using namespace std;

template <class Type>
BinaryTree<Type> :: BinaryTree()
{
    root = nullptr;
}

template <class Type>
void BinaryTree<Type> :: insert(Type data)
{
    BinaryTreeNode<Type> *insertedNode = new BinaryTreeNode<Type>(data);
    //created a new node pointer called insertedNode that is the Binary Tree Node Type.
    
    root = insert(insertedNode, root);//calling the same method within the method until it stops
    
}//This is recursion - IEEEEEKK!


template <class Type>
BinaryTreeNode<Type> *BinaryTree<Type> :: insert(BinaryTreeNode<Type> *insertedNode, BinaryTreeNode<Type> *currentRootNode)
{
    if(currentRootNode == nullptr)
    {
        return insertedNode;
    }
    else if(insertedNode->getNodeData() < currentRootNode->getNodeData())
    {
        currentRootNode->setLeftChild(insert(insertedNode, currentRootNode->getLeftChild()));
    }
    else if(insertedNode->getNodeData() > currentRootNode->getNodeData())
    {
        currentRootNode->setRightChild(insert(insertedNode, currentRootNode->getRightChild()));
    }
    
    return currentRootNode;
    
}

template <class Type>
void BinaryTree<Type> :: inOrderTraversal(BinaryTreeNode<Type>*currentNode)
{
    if(currentNode != nullptr)
    {
        inOrderTraversal(currentNode->getLeftChild());
        std::cout << currentNode->getNodeData() << ", ";
        inOrderTraversal (currentNode->getRightChild());
        
    }
}

template <class Type>
void BinaryTree<Type> :: preOrderTraversal(BinaryTreeNode<Type>*currentNode)
{
    if(currentNode != nullptr)
    {
        std::cout << currentNode->getNodeData() << ", ";
        preOrderTraversal(currentNode->getLeftChild());
        
        preOrderTraversal (currentNode->getRightChild());
        
    }
}

template <class Type>
void BinaryTree<Type> :: postOrderTraversal(BinaryTreeNode<Type>*currentNode)
{
    if(currentNode != nullptr)
    {
        
        postOrderTraversal(currentNode->getLeftChild());
        
        postOrderTraversal (currentNode->getRightChild());
        std::cout << currentNode->getNodeData() << ", ";
        
    }
}

template <class Type>
BinaryTreeNode<Type> *BinaryTree<Type> :: getRoot()
{
    return root;
}

template <class Type>
void BinaryTree<Type> :: calculateSize(BinaryTreeNode<Type> *currentNode)
{
    if(currentNode != nullptr)
    {
        calculateSize(currentNode->getLeftChild());
        calculateSize(currentNode->getRightChild());
        size++;
    }
}

template <class Type>
int BinaryTree<Type> :: getSize()
{
    size = 0;
    calculateSize(root);
    return size;
}