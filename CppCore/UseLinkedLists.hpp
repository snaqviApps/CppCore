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
    int length;
    
    
public:
    Node* tail;
    UseLinkedLists(int value);     // constructor
    ~UseLinkedLists();     // constructor
    
    void append(int value);
    void prepend(int value);
    void deleteLast();
    bool insert(int index, int value);
    void printList();
    void getHead();
    void getTail();
    void getTotalMembers();
};

#endif /* UseLinkedLists_hpp */
