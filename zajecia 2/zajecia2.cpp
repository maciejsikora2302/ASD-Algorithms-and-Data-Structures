#include <iostream>

using namespace std;

struct node {
    int val;
    node *next;
    node *prev;

};

node *merge(node *l1, node *l2) {
    node *head = NULL;
    node *i = head;

    while (l1 != NULL and l2 != NULL) {
        if (l1->val > l2->val) {
            if (head == NULL) {
                head = i = l2;
            } else {
                i->next = l2;
                l2->prev = i;
                i = i->next;
            }
        } else {
            if (head == NULL) {
                head = i = l1;
            } else {
                i->next = l1;
                i = i->next;
                l1->prev = i;
            }
            l1 = l1->next;
        }

    }
    if (l1 != NULL) {
        i->next = l1;
        l1->prev = i;
    }
    if (l2 != NULL) {
        i->next = l2;
        l2->prev = i;
    }

    return head;
}


node *odetnij(node *h) {
    node *p = h;
    while (p->next != nullptr and p->next->val >= p->val) p = p->next;
    node *q = p->next;
    if (q != nullptr) q->prev = nullptr;
    p->next = nullptr;
    return q;
}


node *sort(node *head) {
    node *sorted = nullptr;
    node *end;
    node *s1, s2, q;
    while (true) {
        //s1=odetnij(head);
        //s2=odetnij(head);
        s1 = head;
        head = odetnij(head);
        if (head == nullptr) {
            if (sorted == nullptr) return s1;
            else {
                end->next = s1;
                s1->prev = end;
                head = sorted;
                sorted = end = nullptr;
            }
        } else {
            s2 = head;
            head = odetnij(head);
            q = merge(s1, s2);
            if (sorted = nullptr) {
                sorted = q;
            } else {
                end->next = q;
                q->prev = end;
            }
            while (q->next != nullptr) q = q->next;
            end = q;
            if (head == nullptr) {
                head = sorted;
                sorted = end = nullptr;
            }
        }
    }
}

int removemin(heap h) {}

int removemax(heap h) {}

void insert_minHeap(heap h, int n) {}

void insert_maxHeap(heap h, int n) {}

int size(heap h) {}

int getMin(heap h) {}

int getMax(heap h) {}


struct fMedian {
    heap *MaxHeap;
    heap *MinHeap;
};

int removeMedian(fMedian *fm) {
    if (size(fm->MaxHeap) > size(fm->MinHeap)) {
        return removemax(fm->MaxHeap);
    } else {
        return removemin(fm->MinHeap);
    }
}

void insert(fMedian *fm, int x) {
    if (x < getMax(fm->MaxHeap)) {
        insert_maxHeap(fm->MaxHeap, x);
        if (size(fm->MaxHeap) == size(fm->MinHeap) + 2) {
            insert_minHeap(fm->MinHeap, removemax(fm->MaxHeap));
        }
    } else {
        insert_minHeap(fm->MinHeap, x);
        if (size(fm->MinHeap) == size(fm->MaxHeap) + 2) {
            insert_maxHeap(fm->MaxHeap, removemin(fm->MinHeap));
        }
    }
}

//partition zwraca pozycje piwota do quick sorta
//napisać quick sorta tak żeby zużywał maksymalnie log(n) pamięci na stosie

int partition(int[] tab, int p, int q) {}

void qs(int[] tab, int p, int q) {
    int z = partition(tab, p, q);
//    if(p<z) qs(tab,p,z);
//    if(z<q) qs(tab,z+1,q);
    if (z - p < q - z) {
        qs(tab, p, z - 1)
        p = z + 1
    } else {
        qs(tab, z + 1, q);
        q = z - 1;
    }
}


//w domu zapisać to na stosie, bez rekurencji
//dostepny stos, pop, push

int main() {

}
