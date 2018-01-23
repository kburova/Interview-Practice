//
// Created by Ksenia Burova on 1/17/18.
//

#include "oneway.h"

bool oneway::oneedit(const string & s1, const string & s2){
    bool diff;
    int i, j, size1, size2;

    i = 0;
    j = 0;
    size1 = (int)s1.size();
    size2 = (int)s2.size();
    diff = false;

    while( i < size1 && j < size2 ) {
        if (s1[i] != s2[j]) {
            if ( diff ) return false;
            if (size1 > size2) {
                i++;
            }if (size2 > size1) {
                j++;
            }else{
                i++;
                j++;
            }
            diff = true;
        }else{
            i++;
            j++;
        }
    }

    return true;
}