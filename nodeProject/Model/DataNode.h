//
//  DataNode.h
//  nodeProject
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef DataNode_h
#define DataNode_h

#include <stdio.h>

template <class Type>

class DataNode
{
private:
    Type nodeData;
    DataNode * nodePointer;
    
public:
    DataNode();
    DataNode(Type nodeData);
    //end of constructors
    
    void setNodeData(Type nodeData);
    void setNodePointer(DataNode * nodePointer);
    //end of setters
    
    Type getNodeData();
    DataNode * getNodePointer();
    //end of getters

//    string getnodeData();
//    string setnodeData();
    
};

#endif /* DataNode_h */
