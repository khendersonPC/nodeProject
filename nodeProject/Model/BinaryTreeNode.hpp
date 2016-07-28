//
//  BinaryTreeNode.hpp
//  nodeProject
//
//  Created by Henrichsen, Cody on 7/28/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef BinaryTreeNode_hpp
#define BinaryTreeNode_hpp

#include <stdio.h>
#include "DataNode.h"

template <class Type>
class BinaryTreeNode : public DataNode<Type> //: is keyword for inheritance
{
private:
    BinaryTreeNode<Type> *leftChild;
    BinaryTreeNode<Type> *rightChild;
    BinaryTreeNode<Type> *parent;
    
public:
    
    BinaryTreeNode();
    BinaryTreeNode(Type data);
    
    BinaryTreeNode<Type> *getLeftChild();
    BinaryTreeNode<Type> *getRighttChild();
    BinaryTreeNode<Type> *getParent();
    
    void setRightChild(BinaryTreeNode<Type> *rightChild);
    void setLeftChild(BinaryTreeNode<Type> *leftChild);
    void setParent(BinaryTreeNode<Type> *parent);
};

#endif /* BinaryTreeNode_hpp */
