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
    
    //list-data:
    cout<<"------------"<<endl;
    cout<<"LinkedList Example: "<<endl;
    linkListOne->getHead();
    linkListOne-> getTail();
    linkListOne->geTotalMembers();
    
    linkListOne->printList();
    
    
    
    return 0;
}

