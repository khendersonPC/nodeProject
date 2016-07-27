//
//  main.cpp
//  nodeProject
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include <iostream>
#include "NodeController.hpp"

int main()
{
    std::cout <<"Starting NodeController" <<std::endl;
    NodeController * app = new NodeController();
    app->start();
    std::cout << "ending nodecontroller" << std::endl;
    
    
    return 0;
}
