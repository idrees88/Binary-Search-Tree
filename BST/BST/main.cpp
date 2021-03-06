//
//  main.cpp
//  BST
//
//  Created by Eddie on 4/12/17.
//  Copyright © 2017 Idrees Ashraf. All rights reserved.
//

#include <iostream>

#include "BST.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    BST *bst = new BST();
    
    StudentData *student4 = new StudentData("idrees", "40", 40);
    StudentData *student5 = new StudentData("idrees", "4", 4);
    StudentData *student3 = new StudentData("idrees", "3", 3);
    StudentData *student2 = new StudentData("idrees", "2", 2);
    StudentData *student1 = new StudentData("idrees", "1", 1);
    
    
    
    bst->insert(student4);
    bst->insert(student5);
    bst->insert(student3);
    bst->insert(student2);
    bst->insert(student1);
    
    
    
    
    
    if(bst->search(student3)) {
        cout<<"Found \n\n";
    }
    else {
        cout<<"Not Found \n\n";
    }
    
    bst->printInOrderTraverse();
    
    return 0;
}
