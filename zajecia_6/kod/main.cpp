#include <iostream>

struct node {
    int val;
    node **next;
};


struct SList {
    node *head;
    int maxlvl;
};

int generujLvl(int max) {} //prototyp funkcji zwracającej losowy poziom

void insertSkipList(int value, SList *s) {
    int lvl = generujLvl(s->maxlvl);
    node *n = new node;
    n->val = value;
    n->next = new node*[lvl];
    node* tmp= s->head;
    for(int i=s->maxlvl;i>=0;i--){
        while(tmp->next[i]->val<value) tmp=tmp->next[i];
        if(i<=lvl){
            n->next[i]=tmp->next[i];
            tmp->next[i]=n;
        }
    }
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}