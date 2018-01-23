//
// Created by Ksenia Burova on 1/17/18.
//

#include "urlify.h"
#include <iostream>

string urlify::Urlify(string s, int l){
    int index, i;
    index = s.size()-1;
    for ( i = l-1; i>=0 ; i--) {
        if ( s[i] == ' ') {
            s[index--] = '0';
            s[index--] = '2';
            s[index--] = '%';
        } else {
            s[index--] = s[i];
        }
    }
    return s;
}