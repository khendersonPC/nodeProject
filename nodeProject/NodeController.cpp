//
//  NodeController.cpp
//  nodeProject
//
//  Created by Henrichsen, Cody on 7/27/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "NodeController.hpp"
#include "Model/DataNode.cpp"
#include "Model/SummerArray.cpp"
#include "Model/HashTable.cpp"
#include <string>
#include <iostream>
#include "Model/BinaryTree.cpp"

using namespace std;

void NodeController :: tryNodes()
{
    DataNode<int> numberNode;
    
}

void NodeController :: tryArray()
{
    SummerArray<int> testArray(3);
    //int derpy[3]; //same as the code we wrote above
    //cout << derpy
}

void NodeController :: tryTree()
{
    BinaryTree<int> sampleTree;
    sampleTree.insert(7);
    sampleTree.insert(5);
    cout <<"Using the calculate size. . ." <<sampleTree.getSize() <<endl;
    sampleTree.insert(213);
    sampleTree.insert(-123);
    sampleTree.insert(978098);
    sampleTree.insert(5);
    sampleTree.insert(0);
    sampleTree.insert(235432);
    
    cout <<"The in order traversal" << endl;
    sampleTree.inOrderTraversal(sampleTree.getRoot());
    cout << endl;
    
    cout <<"The pre order traversal" << endl;
    sampleTree.preOrderTraversal(sampleTree.getRoot());
    cout << endl;
    
    cout <<"The post order traversal" << endl;
    sampleTree.postOrderTraversal(sampleTree.getRoot());
    cout << endl;
    
    cout <<"HOORAY!" <<endl;
    
    cout <<"Using the calculate size. . ." <<endl;
    cout <<sampleTree.getSize();
    cout << endl;
    
}

void NodeController :: tryHash()
{
    HashTable<int> numbersInHash;
    numbersInHash.add(342);
    numbersInHash.add(343);
    numbersInHash.add(5);
    numbersInHash.add(-3422);
    numbersInHash.add(34908);
    
    cout <<"here they are" << endl;
    numbersInHash.displayContents();
    cout << endl;
    
    HashTable<string> stringsInHash;
    stringsInHash.add("yo ho ho");
    stringsInHash.add(" ;) ");

    cout <<"second table" << endl;
    stringsInHash.displayContents();
    cout << endl;
    
}

void NodeController :: start()
{
    tryHash();
}
