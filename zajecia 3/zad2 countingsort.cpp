#include <iostream>
using namespace std;

void countingSort(int A[],int B[], int k){
    int kk=k*k;
    int C[kk];
    for(int i=0;i<kk;i++){
        C[i]=0;
    }
    for(int i=0;i<k;i++){
        C[A[i]]++;
    }
    for(int i=0;i<kk-1;i++){
        C[i+1]+=C[i];
    }
    for(int i=k-1;i>=0;i--){
        B[C[A[i]]]=A[i];
        C[A[i]]--;
    }
}


int main(){
}
