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

void UseLinkedLists::printList(){
    Node* temp = head;
    while (temp) {                          // same as (temp != nullptr)
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

void UseLinkedLists::geTotalMembers() {
    cout <<"Length: " << length << endl;
}

