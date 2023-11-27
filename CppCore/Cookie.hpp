//
//  Cookie.hpp
//  CppCore
//
//  Created by Sayyid Naqvi on 11/22/23.
//

#ifndef Cookie_hpp
#define Cookie_hpp

#include <iostream>

using namespace std;

class Cookie {

private:
    string color;
    
public:
    Cookie(string color);
    string getColor();
    void setColor(string color);
};

#endif /* Cookie_hpp */
