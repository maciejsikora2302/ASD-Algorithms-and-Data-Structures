#include <iostream>
#include <fstream>

using namespace std;


//piateczki u kurdziela
//int nMedian(int *tab, int n){
//    if(n<=5){
//        iSort(tab,n);
//        return tab[n/2];
//    }else{
//        int a=(n+4)/5;
//        int *M= new int[a];
//        for(int i=0;i<a;i++){
//            int begin = 5*i;
//            int size=min(5,n-begin);
//            iSort(tab+begin,size);
//            M[i]=tab[begin+2];
//        }
//        return nMedian(M,a);
//    }
//}






int median(int a, int b, int c, int d, int e) {
    int tab[5] = {a, b, c, d, e};
    for (int j = 4; j >= 2; j--) {
        for (int i = 0; i < j; i++) {
            if (tab[i] > tab[i + 1]) swap(tab[i], tab[i + 1]);
        }
    }
    return tab[2];
}

int magic_fives(int tab[], int elements) {

    if (elements >= 5) {
        int number_of_medians = elements / 5;
        if (elements % 5 != 0) number_of_medians++;
        int medians[number_of_medians];
        for (int i = 0; i < elements; i += 5) {
            medians[i / 5] = median(tab[i], tab[i + 1], tab[i + 2], tab[i + 3], tab[i + 4]);
        }
        return magic_fives(medians, number_of_medians);
    } else {
        if (elements == 1) return tab[0];
        for (int j = elements; j >= 0; j--) {
            for (int i = 0; i < j; i++) {
                if (tab[i] > tab[i + 1]) swap(tab[i], tab[i + 1]);
            }
        }
        return tab[(elements - 1) / 2];
    }
}


int main() {
    ifstream data;
    data.open("C:\\Users\\admin\\Documents\\Studia\\Semestr II\\ASD\\zadania\\magical_fives\\dane.txt");
    int n;
    data >> n;
    int tab[n];
    for (int i = 0; i < n; i++) {
        int pom;
        data >> pom;
        tab[i] = pom;
    }
    cout << magic_fives(tab, n);
    return 0;
}