//
//  BST.cpp
//  BST
//
//  Created by Eddie on 4/12/17.
//  Copyright © 2017 Idrees Ashraf. All rights reserved.
//

#include "BST.hpp"

#include <iostream>

using namespace std;

BST::BST() {
    this->root = nullptr;
}

void BST::insert(StudentData *student) {
    if (this->root == nullptr) {
        this->root = student;
        return;
    }
    
    StudentData *traverse = this->root;
    
    bool isAdded = false;
    
    while (!isAdded) {
        if (student->getStudentID() > traverse->getStudentID()) {
            if (traverse->getRight() != nullptr) {
                traverse = traverse->getRight();
            }
            else {
                traverse->setRight(student);
                isAdded = true;
            }
        }
        else {
            if (traverse->getLeft() != nullptr) {
                traverse = traverse->getLeft();
            }
            else {
                traverse->setLeft(student);
                isAdded = true;
            }
        }
    }
    
    if (!isAdded) {
        cout<<"Student with ID "<<student->getStudentID()<<" already exist\n\n";
    }
}

bool BST::search(StudentData *student) {
    bool isFound = false;
    
    StudentData *traverse = this->root;
    
    while (!isFound && traverse != nullptr) {
        if (traverse->getStudentID() == student->getStudentID()) {
            isFound = true;
            break;
        }
        else {
            if (student->getStudentID() > traverse->getStudentID()) {
                traverse = traverse->getRight();
            }
            else {
                traverse = traverse->getLeft();
            }
        }
    }
    
    return isFound;
}
