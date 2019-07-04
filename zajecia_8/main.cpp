#include <iostream>
#include <vector>

using namespace std;
enum color {
    black, grey, white
};
//Biblioteka
//Jeżeli libraryCost jest mniejsze od kosztu drogi to robimy wszędzie biblioteki i działą
//Jeżeli koszta drogi jest mniejszy to budujemy bibliotekęw każdej spójnej składowej i robimy minimum spanning tree i działa
//DFS do spójnych składowych, MST Kruskal/Prim | w sumie MST nie jest potrzebne, wystarczy sam DFS który da drzewo rozpinające

//Żeglarz Henryk
//Macierz sąsiedztwa, wyliczamy odległości wszystkich punktów od wszystkich
//Odpowiednio modyfikujemy wagi krawędzi
//I potem Disktra, pamiętając, że jak do końca wchodzimy po krawędzi 2 to trzeba odjąć jeden dzień

//Drogi w Bajtoce
//MST
//W wierzchołku trzymamy ilość poddrzewa
//I potem dla każdej krawędzi liczymy jaka jest wielkość danego poddrzewa
//potem dfs który rozpatruje te krawędzie i liczy tą odpowiedną sumę
struct node {
    vector<int> adj;
    int parent;
    enum color color;
};
//niedokonczone
#define u ver[ver[v].adj[i]]
const int n=100;
int dfs(node ver[], int v, int &suma) {
    ver[v].color=grey;
    int size=0;
    for(int i=0;i<ver[v].adj.size();i++){
        if(ver[ver[v].adj[i]].color==white){
            int k=dfs(ver,u,suma);
            suma+=(n-k);
        }
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}