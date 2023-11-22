//
//  Cookie.cpp
//  CppCore
//
//  Created by Sayyid Naqvi on 11/22/23.
//

#include "Cookie.hpp"

using namespace std;

class Cookie {
private:
    string color;
    
public:
    Cookie(string color) {
        this->color = color;
    }
    string getColor() {
        return color;
    }
    void setColor(string color) {
        this->color = color;
    }

};
