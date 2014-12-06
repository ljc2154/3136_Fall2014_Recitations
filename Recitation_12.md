# Recitation 12 #

## Graphs ##

### Graph Notation ###
We say G = (V, E) for a graph G where
  * V is a set of vertices (or nodes)
  * E is a set of edges (node connections)
  * an edge is a tuple (u,v) for vertices u and v

### Graph Representation in a Program ###

#### Using an adjacency matrix ####
One way is this:
If there are n vertices (nodes), initialize a n x n array (array of arrays) storing integers.
Store a 1 in ary[u][v] if there is an edge connecting u to v and a 0 there otherwise.

#### Using an adjacency list ####
One way is this:
If there are n vertices (nodes), initialize an array of n lists storing integers.
If there is a connection from the uth vertex to the vth vertex, append a v to the list at the uth index of the array.

### BFS ###

