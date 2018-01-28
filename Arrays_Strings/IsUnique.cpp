//
// Created by Ksenia Burova on 1/17/18.
//
#include "IsUnique.h"

bool IsUnique::allUnique(const string &s) {
    int check, i;
    check = 0;

    for ( i = 0; i < s.size(); i++) {
        if ( check & (1 << (s[i] - 'a')) ) return false;
        check |= 1 << (s[i] - 'a');
    }
    return true;
}