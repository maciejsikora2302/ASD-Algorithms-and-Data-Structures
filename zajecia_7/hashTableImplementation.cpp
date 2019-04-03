#include <iostream>

using namespace std;

struct node {
    int val;
    node *next;
    node *prev;
};

struct HashTable {
    int elements_in_table;
    node **elements;
};

HashTable *init_hash_table(int max_size) {
    HashTable *hs = new HashTable;
    hs->elements_in_table = max_size;
    hs->elements = new node *[max_size];
    for (int i = 0; i < max_size; i++) {
        hs->elements[i] = nullptr;
    }
    return hs;
}

int hash_function(int a, int elements_in_table) {
    return a % elements_in_table;
}

void insert_into_chain(int x, node *&head) {
    if (head == nullptr) {
        node *tmp = new node;
        tmp->next = nullptr;
        tmp->prev = nullptr;
        tmp->val = x;
        head = tmp;
        return;
    }
    node *tmp = new node;
    tmp->next = head;
    head->prev = tmp;
    tmp->prev = nullptr;
    tmp->val = x;
    head = tmp;


}

void put_in_hash_table(HashTable *hs, int x) {
    insert_into_chain(x, hs->elements[hash_function(x, hs->elements_in_table)]);
}

node *find_in_chain(node *head, int x) {
    while (head != nullptr and head->val != x) {
        head = head->next;
    }
    if (head == nullptr) return nullptr;
    if (head->val == x) return head;
}

node *find_in_hash_table(HashTable *hs, int x) {
    return find_in_chain(hs->elements[hash_function(x, hs->elements_in_table)], x);
}

void delete_from_chain_list(node *&head, int x) {
    node *first = head;
    if (first == nullptr) return;
    if (first->next == nullptr and first->prev == nullptr) {
        head = nullptr;
        return;
    }
    while (first != nullptr and first->val != x) first = first->next;
    if (first == nullptr) return;
    if (first->val == x) {
        node *tmp = first->prev;
        if (first->prev != nullptr) first->prev->next = first->next;
        if (first->next != nullptr) first->next->prev = tmp;
        delete first;
    }
}

void delete_from_table(HashTable *hs, int x) {
    delete_from_chain_list(hs->elements[hash_function(x, hs->elements_in_table)], x);
}

void wypisz_chain(node *head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
}

void wypisz_HT(HashTable *ht) {
    for (int i = 0; i < ht->elements_in_table; i++) {
        wypisz_chain(ht->elements[i]);
        cout << endl;
    }
}

void reorganise_hash_table(HashTable* HT, node** element_to_delete, int number_of_elements_to_delete){
    for(int i=0;i<number_of_elements_to_delete;i++){
        delete_from_table(HT,element_to_delete[i]->val);
    }
}

int main() {
    int size;
    cin >> size;
    HashTable *HT = init_hash_table(size);
    cin >> size;
    for (int i = 0; i < size; i++) {
        int pom;
        cin >> pom;
        put_in_hash_table(HT, pom);
    }
    wypisz_HT(HT);
    while (true) {
        int tmp;
        cin >> tmp;
        delete_from_table(HT, tmp);
        wypisz_HT(HT);
        cout << "======" << endl;
    }
    return 0;
}