//
//  BST.hpp
//  BST
//
//  Created by Eddie on 4/12/17.
//  Copyright © 2017 Idrees Ashraf. All rights reserved.
//

#ifndef BST_hpp
#define BST_hpp

#include <stdio.h>

#include "StudentData.hpp"

class BST {
    
    StudentData *root;
    
public:
    BST();
    void insert(StudentData *student);
    bool search(StudentData *student);
    
};

#endif /* BST_hpp */
