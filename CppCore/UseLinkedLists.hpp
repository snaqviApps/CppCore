//
//  UseLinkedLists.hpp
//  CppCore
//
//  Created by Sayyid Naqvi on 11/26/23.
//

#ifndef UseLinkedLists_hpp
#define UseLinkedLists_hpp

#include <iostream>

class Node {
public:
    int value;
    Node* next;
    
    Node(int value){
        this->value = value;
        this->next = nullptr;
    }
};

class UseLinkedLists {
private:
    Node* head;
    Node* tail;
    int length;
    
public:
    
    UseLinkedLists(int value);     // constructor
    
    void append(int value);
    void prepend(int value);
    bool insert(int index, int value);
    void printList();
    void getHead();
    void getTail();
    void geTotalMembers();
};

#endif /* UseLinkedLists_hpp */
