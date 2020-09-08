#include <iostream>
#include <list>
#include <stack> // pilha para usar na DFS

using namespace std;

class Grafo
{
	int V; // número de vertices
	list<int> *adj;

public:
	Grafo(int V);
	void adicionarAresta(int v1, int v2);

	// faz uma DFS a partir de um vértice, retorna se achou ciclo ou não
	bool dfs(int v);

	// verifica se o grafo direcionado tem ciclo
	bool temCiclo();
};

Grafo::Grafo(int V)
{
	this->V = V;
	adj = new list<int>[V];
}

void Grafo::adicionarAresta(int v1, int v2)
{
	adj[v1].push_back(v2);
}

bool Grafo::dfs(int v)
{
	stack<int> pilha;
	bool visitados[V], pilha_rec[V];

	// inicializa visitados e pilha_rec com false
	for(int i = 0; i < V; i++)
		visitados[i] = pilha_rec[i] = false;

	// faz uma DFS
	while(true)
	{
		bool achou_vizinho = false;
		list<int>::iterator it;

		if(!visitados[v])
		{
			pilha.push(v);
			visitados[v] = pilha_rec[v] = true;
		}

		for(it = adj[v].begin(); it != adj[v].end(); it++)
		{
			// se o vizinho já está na pilha é porque existe ciclo
			if(pilha_rec[*it])
				return true;
			else if(!visitados[*it])
			{
				// se não está na pilha e não foi visitado, indica que achou
				achou_vizinho = true;
				break;
			}
		}

		if(!achou_vizinho)
		{
			pilha_rec[pilha.top()] = false; // marca que saiu da pilha
			pilha.pop(); // remove da pilha
			if(pilha.empty())
				break;
			v = pilha.top();
		}
		else
			v = *it;
	}

	return false;
}

bool Grafo::temCiclo()
{
	for(int i = 0; i < V; i++)
	{
		if(dfs(i))
			return true;
	}
	return false;
}

int main(int argc, char *argv[])
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin) ;
        freopen("out.txt", "w", stdout) ;
    #endif
    int tc, n, m, a, b;

    scanf("%d",&tc);
    for(int i = 0; i < tc; i++)
    {   
        scanf("%d %d",&n, &m);
        Grafo grafo(n+10);
        while(m--)
        {
            scanf("%d %d",&a, &b);
            grafo.adicionarAresta(a, b);
        }
        if(grafo.temCiclo()) cout << "SIM\n";
        else cout << "NAO\n";
    }
	return 0;
}
