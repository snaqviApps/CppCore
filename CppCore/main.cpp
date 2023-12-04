//
//  main.cpp
//  CppCore
//
//  Created by Sayyid Naqvi on 11/20/23.
//

#include "Cookie.hpp"
#include "UseLinkedLists.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hi, C++ World! ... it has been a while to visit you\n";

    
    /** Pointers */
    cout << "\nPointers\n" << endl;
    int* num3 = new int(110);
    int *num4 = num3;
    
    *num3 = 220;
    
    cout <<"num3 address: " << num3 << ", nme3 content: " << *num3 << endl;
    cout <<"num4 address: " << num4 << ", nme4 content: " << *num4 << endl; // with pointers,'num4' is same
    
    // Using Cookie instance
    Cookie* cookieOne = new Cookie("Yellow");
    Cookie* cookieTwo = new Cookie("Green");
    cout << "\nCookie1: " << cookieOne-> getColor() << endl;
    cout << "Cookie2: " << cookieTwo-> getColor() << endl;
    cookieOne-> setColor("blue");
    cout << "Cookie1 sets new color: " << cookieOne->getColor() << endl;
    
    // LinkedList at work
    UseLinkedLists* linkListOne = new UseLinkedLists(5);
    cout<<"-----------------------"<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"LinkedList Example:\n\n";
    linkListOne->getHead();
    linkListOne-> getTail();
    linkListOne->printList();
    
    // add list memeber
    linkListOne->append(20);
    linkListOne->getTotalMembers();
    cout <<"member added with value: " << linkListOne->tail->value << endl;
    linkListOne->printList();
    
    // delete last-list memeber with 03 possible scenario
    linkListOne->append(50);
    cout <<"before deleting last node (member) of the list\n";
    linkListOne->getTotalMembers();
    linkListOne->printList();
    
    // scenario: 1
    linkListOne->deleteLast();
    cout <<"\nLL after firt call to deleteLast(): \n";
    linkListOne->printList();
    
    // scenario: 2
    linkListOne->deleteLast();
    cout <<"\nLL after 2nd call to deleteLast(): \n";
    linkListOne->printList();
    
    // scenario: 3
    linkListOne->deleteLast();
    cout <<"\nLL after 3rd call to deleteLast(): \n";
    linkListOne->printList();
    
    // using now prepend()
    cout << "Using prepend() call: " << endl;
    linkListOne->append(3);
    linkListOne->prepend(5);        // adding at the 'head' or beginning of the list
    linkListOne->printList();
    
    
    return 0;
}

