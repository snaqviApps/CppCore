//
//  main.cpp
//  CppCore
//
//  Created by Sayyid Naqvi on 11/20/23.
//

#include <iostream>
#include "Cookie.cpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hi, C++ World! ... it has been a while to visit you\n";
    
    int num1 = 11;
    int num2 = num1;
    
    num1 = 22;
    cout <<"num1: " << num1 << endl;
    cout <<"num2: " << num2 << endl; // not using pointer still 'num2' is 11, though 'num1' is now '22'
    
    
    /** now using Pointers */
    cout << "\nnow with pointers\n" << endl;
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
    
    
    return 0;
}

