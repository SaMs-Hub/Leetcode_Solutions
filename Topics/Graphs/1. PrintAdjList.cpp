#include <bits/stdc++.h>
using namespace std;

class Graph{
    // vertices and array of ll
    int V;
    list<int> *l;
    public:
        Graph(int V){
            this->V = V;
            l = new list<int>[V];
        }

        void addEdge(int x, int y){
            // push x and y onto each other
            l[x].push_back(y);
            l[y].push_back(x);
        }

        void printAdjList(){
            // traverse over all the vertices
            // print vertex i 
            // iterate over l[i] neighbor print neighbor, 
            //and head next line
            for (int i = 0; i < V;i++){
                cout << "Vertex" << i << "->";
                for (int nbr: l[i]){
                    cout << nbr <<',';

                }
                cout << endl;
            }
        }

};


int main()
{  
    Graph G(4);
    G.addEdge(0, 1);
    G.addEdge(0, 2);
    G.addEdge(2, 3);
    G.addEdge(1, 2);

    G.printAdjList();
    return 0;
}
