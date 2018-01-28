//
// Created by Ksenia Burova on 1/24/18.
//

#include <cstddef>
#include <iostream>
#include <cmath>
#include <list>
using namespace std;

struct node{
    struct node *parent;
    struct node *left;
    struct node *right;

    int value;
};

struct gnode{
    int value;
    bool temp;
    bool perm;
    struct gnode *parent;
    vector <struct gnode*> children;
};

struct graph{
    vector <gnode*> nodes;
};

node* helper(int arr[], int start, int end);
int depthHelper(node *n);
void visit(gnode *n);

class mintree {
private:
    int data = -1;
public:
    node* toTree(int arr[], int N) {
        node *root = helper(arr, 0, N-1);
        return root;
    }

    bool isBalanced(node *root){
        int l = depthHelper(root->left);
        int r = depthHelper(root->right);

        return (fabs(l-r)<=1);
    }

    bool isBS(node *r){
        if (r == NULL) return true;

        if  (! isBS(r->left)) return false;
        if (data != -1 and (data > r->value)) return false;
        data = r->value;
        if (! isBS(r->right)) return false;
        return true;
    }

    bool topSort(graph *g){
        list <gnode*> sorted;
        while(int i = 0; i < g->nodes.size(0); i++) {
            if (!g->nodes[i]->visited) {
                if (! visit(g->nodes[i], sorted)) return 1;
            }
        }
    }
};

int visit(gnode *n, list <gnode*> & sorted){
    if (n->perm) return 1;
    if (n->temp) return 0;

    n->temp = 1;

    for (int i = 0; i < n->children.size(); i++) {
        if (!visit(n->childern[i])) return 0;
    }

    n->perm = 1;
    sorted.push_front(n);
}

node* helper(int arr[], int start, int end){
    node *n = new node;
    int mid;
    if(start == end) {
        n->value = arr[start];
        n->left = NULL;
        n->right = NULL;
    }else {
        mid = (end - start + 1) / 2 + start;
        n->value = arr[mid];
        n->left = helper(arr, start, mid - 1);
        n->right = helper(arr, mid + 1, end);

        n->left->parent = n;
        n->right->parent = n;
    }
    return n;
}

int depthHelper(node *n) {

    if (n == NULL) {
        return 0;
    }

    int left = depthHelper(n->left);
    int right = depthHelper(n->right);

    if ((left - right) > 0) return left + 1;
    else return right + 1;
}
