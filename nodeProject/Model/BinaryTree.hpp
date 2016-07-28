//
//  BinaryTree.hpp
//  nodeProject
//
//  Created by Henrichsen, Cody on 7/28/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef BinaryTree_hpp
#define BinaryTree_hpp

#include <stdio.h>
#include "BinaryTreeNode.hpp"

template <class Type>
class BinaryTree
{
    
private:
    BinaryTreeNode<Type> *root;
    
public:
    BinaryTree();
    void insert(Type data);
    void preOrderTraversal();
    void postOrderTraversal();
    void inOrderTraversal();
    int calculateSize();
    bool remove(Type data);
    
};

#endif /* BinaryTree_hpp */