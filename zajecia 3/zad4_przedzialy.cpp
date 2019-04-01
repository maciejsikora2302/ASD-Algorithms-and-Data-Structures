#include <iostream>
using namespace std;

const int n=5;

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


int main(){
    int pocz[n]={90,5,3,8,10};
    int konce[n]={100,17,4,16,15};
    cout<<endl<<endl<<przedzialy(pocz,konce);
}
