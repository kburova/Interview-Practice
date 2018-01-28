
#include <iostream>
#include "Trees/mintree.cpp"

using namespace std;

int main() {

    int arr[] = { 0, 1, 2, 3, 4, 5, 6};
    mintree mt;
    node *n = mt.toTree(arr, 7);

    cout << mt.isBS(n) <<endl;
    return 0;
}