#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll INF = 4e18;

// G -> Vector de vector de pares, guarda el grafo con pesos.
// n -> Cantidad de nodos.
// s -> Nodo inicial
vector<ll> dijkstra(vector < vector < pair < ll, ll >>> G, int n, int s) {
  vector<ll> dis(n + 1, INF);
  dis[s] = 0;

  // Vamos a guardar pares {w, nodo} donde w es el costo con el que llegamos al nodo.
  // Es importante que primero este el costo w, ya que de ese modo se ordenara de acuerdo a los pesos.
  priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq; // Cola de prioridad que nos da los menores primero. pq.push({0, s}); // El primer nodo pendiente es s, con peso 0.

  while (!pq.empty()) {
    // Mientras existan nodos pendientes.
    pair<ll, ll> menor = pq.top();

    pq.pop();
    int w = menor.first;
    int nodo = menor.second;

    if (dis[nodo] < w) continue;

    for (auto to G[nodo]) {
      int v = to.first;
      int cost = to.second;
      // Recuperamos el nodo con menor distancia.
      // Lo quitamos de pendientes.
      // Costo del nodo actual
      // Nodo actual
      // Anteriormente encontramos una distancia menor a la del costo actual, asi que ahora no hacemos nada
      // Nodo vecino
      // Costo para ir al nodo v
      if (dis[nodo] + cost < dis[v])
      {
        dis[v] = dis[nodo] + cost;
        pq.push({dis[v], v});
        // Se puede mejorar la distancia minima al nodo v
        // Actualizamos la distancia mejorada
        // Hicimos una mejora, asi que lo insertamos en pendientes al nodo mejorado
        return dis;
      }
    }
  }
}
