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
#include <string>
#include <iostream>

using namespace std;

void NodeController :: tryNodes()
{
    
}

void NodeController :: tryArray()
{
    SummerArray<int> testArray(3);
}

void NodeController :: start()
{
    tryArray();
}