#include <iostream>

using namespace std;

struct Osoba {
    string nazwa;
    string tel;
    bool zaj;//open adressing
    bool us; //usuniety
    /*
     * poczatkowo FF
     * po wprowadzeniu będzie TF
     * do usuniecia będzie FT
     * po usunieciu bedzie TF
     */
};

unsigned int numeric_key(string s) {
    unsigned int key = 0;
    for (int i = 0; i < s.size(); i++) {
        key += int(s[i]) << (i % 4) * 8;
    }
    return key;
}

int hashFunc(unsigned int a, int size, int proba) {
    return (a + proba * proba) % size;
}

bool insert(Osoba t[], int size, Osoba o) {
    unsigned int nKey = numeric_key(o.nazwa);
    for (int np = 0; np < size; np++) {
        int key = hashFunc(nKey, size, np);
        if (!t[key].zaj) {
            t[key] = o;
            t[key].zaj = true;
            return true;
        }
    }
    return false;
}
//nauczyc sie reorganizacji w miejscu
bool delete_from_OPTable(Osoba t[], int size, string nazwisko) {
    unsigned int nKey = numeric_key(nazwisko);
    int np = 0;
    for(int np=0;np<size;np++){
        int adr=hashFunc(nKey, size, np);
        if(t[adr].zaj and t[adr].nazwa==nazwisko){
            t[adr].us=true;
            t[adr].zaj=false;
            return true;
        }
        if(!t[adr].zaj && !t[adr].us) return false;
    }
    return false;
}

int main() {

    return 0;
}