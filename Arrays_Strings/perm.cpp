//
// Created by Ksenia Burova on 1/17/18.
//

#include "perm.h"

bool perm::isPermutaion(const string & s1, const string & s2){
    int check, i;

    if (s1.size() != s2.size()) return false;

    check = 0;
    for ( i = 0; i < s1.size(); i++){
        check ^= 1 << (s1[i] - 'a');
        check ^= 1 << (s2[i] - 'a');
    }

    if (check != 0) return false;
    return true;
}