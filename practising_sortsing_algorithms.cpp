#include <iostream>
#include <limits.h>

using namespace std;


void CSort(int A[], int n, int k) {
    int B[n];
    int C[k];
    for (int i = 0; i < k; i++) C[i] = 0;
    for (int i = 0; i < n; i++) C[A[i]]++;
    for (int i = 0; i < k - 1; i++) C[i + 1] += C[i];
    for (int i = n - 1; i >= 0; i--) {
        C[A[i]]--;
        B[C[A[i]]] = A[i];
    }
    for (int i = 0; i < n; i++) {
        A[i] = B[i];
    }
}

void UberMerge(int tab[], int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;
    int L[n1];
    int R[n2];
    for (int i = 0; i < n1; i++) {
        L[i] = tab[left + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = tab[middle + i + 1];
    }
    int i = 0, j = 0, k = left;
    while (i < n1 and j < n2) {
        if (L[i] <= R[j]) {
            tab[k] = L[i];
            i++;
            k++;
        } else {
            tab[k] = R[j];
            j++;
            k++;
        }
    }
    while (i < n1) {
        tab[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        tab[k] = R[j];
        j++;
        k++;
    }
}

void ThirdMerge(int tab[], int left, int right) {
    if (left < right) {
        int q = (left + right) / 2;
        ThirdMerge(tab, left, q);
        ThirdMerge(tab, q + 1, right);
        UberMerge(tab, left, q, right);
    }
}

int partition(int tab[], int left, int right) {
    int pivot = tab[right];
    int i = left - 1;
    for (int j = left; j < right; j++) {
        if (tab[j] < pivot) {
            i++;
            swap(tab[i], tab[j]);
        }
    }
    swap(tab[i + 1], tab[right]);
    return i + 1;
}

int podzial(int tab[], int left, int right) {
    int pivot = tab[right];
    int j = left - 1;
    for (int i = left; i < right; i++) {
        if (tab[i] < pivot) {
            j++;
            swap(tab[i], tab[j]);
        }
    }
    swap(tab[j + 1], tab[right]);
    return j + 1;
}

void QSort(int tab[], int left, int right) {
    if (left < right) {
        int q = partition(tab, left, right);
        QSort(tab, left, q - 1);
        QSort(tab, q + 1, right);
    }
}

void Merge(int tab[], int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;
    int L[n1 + 2], R[n2 + 2];
    for (int i = 1; i < n1; i++) {
        L[i] = tab[left + i];
    }
    for (int i = 1; i < n2; i++) {
        R[i] = tab[middle + i + 1];
    }
    L[n1 + 1] = LONG_MAX;
    R[n2 + 1] = LONG_MAX;
    int i = 1, j = 1;
    for (int k = left; k <= right; k++) {
        if (L[i] <= R[j]) {
            tab[k] = L[i];
            i++;
        }
        if (L[i] > R[j]) {
            tab[k] = R[j];
            j++;
        }
    }
}

void MergeSort(int tab[], int left, int right) {
    if (left < right) {
        int q = (left + right) / 2;
        MergeSort(tab, left, q);
        MergeSort(tab, q + 1, right);
        Merge(tab, left, q, right);
    }
}

void MyMerge(int tab[], int left, int middle, int right) {
    int n1 = middle - left - 1;
    int n2 = right - middle;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++) L[i] = tab[i + left];
    for (int i = 0; i < n2; i++) R[i] = tab[middle + i + 1];
    int i = 0;
    int j = 0;
    int k = left;
    while (i < n1 and j < n2) {
        if (L[i] <= R[j]) {
            tab[k] = L[i];
            i++;
        } else {
            tab[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        tab[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        tab[k] = R[j];
        j++;
        k++;
    }
}

void MyMergeSort(int tab[], int left, int right) {
    if (left < right) {
        int q = (left + right) / 2;
        MyMergeSort(tab, left, q);
        MyMergeSort(tab, q + 1, right);
        MyMerge(tab, left, q, right);
    }
}

void szbSort(int tab[], int left, int right) {
    if (left < right) {
        int q = podzial(tab, left, right);
        szbSort(tab, left, q - 1);
        szbSort(tab, q + 1, right);
    }
}

int SelectPartition(int tab[], int left, int right) {
    int pivot = tab[right];
    int i = left - 1;
    for (int j = left; j < right; j++) {
        if (tab[j] < pivot) {
            i++;
            swap(tab[i], tab[j]);
        }
    }
    swap(tab[i + 1], tab[right]);
    return i + 1;
}

int QuickSelect(int tab[], int left, int right, int k) {
    if (left < right) {
        int q = SelectPartition(tab, left, right);
        if (k == q) return tab[q];
        if (k < q) {
            return QuickSelect(tab, left, q - 1, k);
        }
        if (k > q) {
            return QuickSelect(tab, q + 1, right, k);
        }
    }
}


struct node {
    int val;
    node *next;
};


void insert(node *&head, node *x) {
    if (head == nullptr) {
        head = x;
    } else {
        x->next = head;
        head = x;
    }
    return;
}

void wypisz(node *head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
};

void DivideList(node *head, node *&a, node *&b) {
    node *fast = head->next;
    node *slow = head;
    while (fast != nullptr) {
        fast = fast->next;
        if (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
    }
    //cout << "cos";
    a = head;
    b = slow->next;// albo slow->next nie jestem pewny
    slow->next = nullptr;
}

node *MergeLists(node *a, node *b) {
    node *result = nullptr;
    if (a == nullptr) {
        return b;
    }
    if (b == nullptr) {
        return a;
    }

    if (a->val < b->val) {
        result = a;
        result->next = MergeLists(a->next, b);
    } else {
        result = b;
        result->next = MergeLists(a, b->next);
    }
    return result;
}

void MergeSortList(node *&head) {
    if (head == nullptr or head->next == nullptr) {
        return;
    } else {
        node *a;
        node *b;
        DivideList(head, a, b);
        MergeSortList(a);
        MergeSortList(b);
        head = MergeLists(a, b);
    }
}


int main() {
/*
    int tab[10] = {6, 7, 2, 4, 3, 5, 8, 9, 1, 10};
    szbSort(tab, 0, 9);
    for (int i = 0; i < 10; i++) {
        cout << tab[i] << " ";
    }


    int tab1[10] = {6, 7, 2, 4, 3, 5, 8, 9, 1, 10};
    CSort(tab1, 10, 11);
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << tab1[i] << " ";
    }

    int tab2[10] = {6, 7, 2, 4, 3, 5, 8, 9, 10, 1};
    //cout << endl << QuickSelect(tab2, 0, 9,2);
    ThirdMerge(tab2, 0, 9);
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << tab2[i] << " ";
    }
*/
    int n = 100;
    node *head = new node;
    head = nullptr;
    for (int i = 0; i < n; i++) {
        node *x = new node;
        x->val = rand() % 100 + 1;
        x->next = nullptr;
        insert(head, x);
    }
    wypisz(head);
    MergeSortList(head);
    cout << endl;
    wypisz(head);
    return 0;
}