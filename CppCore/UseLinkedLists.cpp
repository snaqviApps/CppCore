//
//  UseLinkedLists.cpp
//  CppCore
//
//  Created by Sayyid Naqvi on 11/26/23.
//

#include "UseLinkedLists.hpp"

using namespace std;

UseLinkedLists::UseLinkedLists(int value) {
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
    length = 1;
}

UseLinkedLists::~UseLinkedLists() {         // Destructor
    Node* temp = head;
    while (head) {
        head = head->next;
        delete temp;
        temp = head;
    }
}

void UseLinkedLists::append(int value) {
    Node* newNode = new Node(value);
    if (length == 0) {                      // if linked List is empty
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
    length++;
}

void UseLinkedLists::prepend(int value) {
    Node* newNode = new Node(value);
    if(length == 0) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
    length++;
    
}

void UseLinkedLists::deleteLast() {

    if(length == 0) return;                 // if list is empty
    Node* temp = head;                      // if list has more than '1' element
    if(length == 1) {
        head = nullptr;
        tail = nullptr;
    } else {
        Node* pre = head;
        while (temp->next) {                    // will be only true if temp->next is not at the end of the list
            pre = temp;                         // starting of iteration, both pre-n-temp point to the 'head'
            temp = temp->next;                  // temp is moved to the next list-memeber
        }
        tail = pre;
        tail->next = nullptr;
    }
    delete temp;                            // deletes finally last 'node' or memeber of list
    length--;
}

void UseLinkedLists::printList() {
    Node* temp = head;
    while (temp != nullptr) {                       // same as (temp != nullptr)
        cout << temp->value << endl;
        temp = temp->next;
    }
}

void UseLinkedLists::getHead() {
    cout <<"Head: " << head->value << endl;
}

void UseLinkedLists::getTail() {
    cout <<"Tail: " << tail->value << endl;
}

void UseLinkedLists::getTotalMembers() {
    cout <<"Total members in the List: " << length << endl;
}

