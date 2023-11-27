//
//  Cookie.cpp
//  CppCore
//
//  Created by Sayyid Naqvi on 11/22/23.
//

#include "Cookie.hpp"

using namespace std;

Cookie::Cookie(string color) {
        this->color = color;
    }

    string Cookie::getColor() {
        return color;
    }

    void Cookie::setColor(string color) {
        this->color = color;
        
    }
