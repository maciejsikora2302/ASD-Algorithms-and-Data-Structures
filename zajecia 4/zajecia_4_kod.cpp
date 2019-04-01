#include <iostream>
using namespace std;
struct node{
    int val;
    node* next;
};

const int N=10;
const int n=6;

//rozwiazanie na stronie https://github.com/beneckimateusz/asd/blob/master/compulsory%20tasks%202/quick%20sort%20on%20a%20linked%20list/quciksort_list.cpp
// node* quickSort(node* head){
//     if(head==nullptr or head->next == nullptr) return head;
//     node* pivot = head, current=pivot->next;
// }
/*
int digit(int n, int base, int c){
    if(c==1){
        return n%base;
    }
    if(c==2){
        return n/base;
    }
}

void countingSort(int A[],int N,int c){
    int B[N];
    int C[N];
    for(int i=0;i<N;i++) C[i]==0;
    for(int i=0;i<N;i++){
        C[digit(A[i],N,c)]++;
    }
    for(int i=1;i<N;i++){
        C[i]+=C[i-1];
    }
    for(int i=N-1;i>=0;i--){
        // B[A[C[i]]]=A[i];
        B[--C[digit(A[i],N,c)]]=A[i];
        // C[i]--;
    }
}

void radixSort(int t[],int N){
    //najmniej znacząca cyfta jest ostatnia
    countingSort(t,N,1);
    countingSort(t,N,2);
}


*/

void bubSort(int tab[],int tab2[], int tab3[]){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(tab[j]>=tab[j+1]){
                swap(tab[j],tab[j+1]);
                swap(tab2[j],tab2[j+1]);
                swap(tab3[j],tab3[j+1]);
            }

        }
    }
}

int przedzialy(int pocz[],int konce[]){
    int indexy[n];
    for(int i=0;i<n;i++) indexy[i]=0;


    bubSort(pocz,konce,indexy);
    for(int i=0;i<n;i++){
        indexy[i]=i;
    }
    bubSort(konce,pocz,indexy);
    for(int i=0;i<n;i++){
        indexy[i]=i-indexy[i];
    }


    int max=indexy[0];
    for(int i=0;i<n;i++){
        cout<<i<<": "<<indexy[i]<<"   "<<pocz[i]<< " " <<konce[i]<<endl;
        if(max<indexy[i]) max=indexy[i];
    }
    return max;
}






/*

mamy dwa słowa A i B
każde słowo ma długość N
te słowa mają znaki z alfabetu o rozmiarze K
chcemy sprawdzić czy te dwa słowa są annagramami
z liter pierwszego słowa można stworzyć drugie słowo
wolno on wykonać conajwyżej O(n) operacji
nie może być zależy od rozmiaru słownika

int t[k];

dla pierwszego słowa zerujemy t[każda_litera]
potem t[każda_litera]++ 
potem t[każda_litera_B]=0
potem t[każda_litera_B]--
wędzie musi być zero

*/

/*

!!!!NA ZADANIE!!!!
zrobienie hash mapy za operacjami:
init(n) klucze od 0 do n-1
w czasie O(1)
insert(index,val) O(1) nadpisuje wartosc
get(index) O(1) odczywac wartość z danego indexu lub dowiedziec sie ze nic tam nie ma 

*/


/*

operacje: mnożenie, dodawanie, porównywanie
pokazać, że
zał: sotowanie n liczb kosztuje Omega(n*logn)
teza: znalezienie otoczki wypukłej w tym modelu ma złożoność omega(n*logn)

*/

/*

A[n] różnych wartości jest conajwyżej log n
podać algorytm do jak najszybszego posortowania


=============================

quickerSort || na trzy przedziały, mniejsze | równe | większe
z gruba losowo wartość środkowa
zejść będzie log(logn)
złożoność nlog(logn)
złożoność ze structurą nlog(logn)

*/




int main(){
    int pocz[n]={1,2,4,2};
    int konce[n]={7,3,5,6};
    cout<<endl<<endl<<przedzialy(pocz,konce);
}