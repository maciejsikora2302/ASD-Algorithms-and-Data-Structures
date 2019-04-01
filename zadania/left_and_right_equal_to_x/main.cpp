#include <iostream>
#include <fstream>

using namespace std;

bool sum_left_right(int tab[], int n, int x) {
    int i = 0, j = n - 1;
    while (i < j) {
        if (tab[i] + tab[j] == x) return true;
        if (tab[i] + tab[j] < x) i++;
        if (tab[i] + tab[j] > x) j--;
    }
    return false;
}


int main() {
    ifstream dane;
    dane.open("C:\\Users\\admin\\Documents\\Studia\\Semestr II\\ASD\\zadania\\left_and_right_equal_to_x\\dane.txt");
    int n;
    dane >> n;
    int tab[n];
    for (int i = 0; i < n; i++) {
        int pom;
        dane >> pom;
        tab[i] = pom;
        cout << tab[i] << " ";
    }
    cout << endl;
    if(sum_left_right(tab,n,15)){
        cout<<"Yay, dziala, udalo sie"<<endl;
    } else{
        cout<<"Cos sie zjebalo"<<endl;
    }
    return 0;
}