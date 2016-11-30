// A C / C++ program for Dijkstra's single source shortest path algorithm.
// The program is for adjacency matrix representation of the graph

#include <stdio.h>
#include <limits.h>
#include <cstdlib>
#include <time.h>
#include "Porshe.cpp"
#include "point.h"
//#include "Node.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <queue>
#include <set>
#include <iterator>
#include <fstream>

#include "Card.h"
#include "Dealer.h"
#include "HexGraph.h"
#include "point3d.h"
#include "Player.h"
#include "MyContainer.h"


namespace {

const int DENSITY = 70;

}

using namespace std;

enum class Color {
	RED, BLUE, GREEN
};

// Number of vertices in the graph
#define V 9

// A utility function to find the vertex with minimum distance value, from
// the set of vertices not yet included in shortest path tree
int minDistance(int dist[], bool sptSet[]) {
	// Initialize min value
	int min = INT_MAX, min_index;

	for (int v = 0; v < V; v++)
		if (sptSet[v] == false && dist[v] <= min)
			min = dist[v], min_index = v;

	return min_index;
}

// A utility function to print the constructed distance array
void printSolution(int dist[], int n) {
	printf("Vertex   Distance from Source\n");
	for (int i = 0; i < V; i++)
		printf("%d \t\t %d\n", i, dist[i]);
}

// Funtion that implements Dijkstra's single source shortest path algorithm
// for a graph represented using adjacency matrix representation
void dijkstra(int** graph, int src) {
	int dist[V];     // The output array.  dist[i] will hold the shortest
					 // distance from src to i

	bool sptSet[V]; // sptSet[i] will true if vertex i is included in shortest
					// path tree or shortest distance from src to i is finalized

	// Initialize all distances as INFINITE and stpSet[] as false
	for (int i = 0; i < V; i++)
		dist[i] = INT_MAX, sptSet[i] = false;

	// Distance of source vertex from itself is always 0
	dist[src] = 0;

	// Find shortest path for all vertices
	for (int count = 0; count < V - 1; count++) {
		// Pick the minimum distance vertex from the set of vertices not
		// yet processed. u is always equal to src in first iteration.
		int u = minDistance(dist, sptSet);

		// Mark the picked vertex as processed
		sptSet[u] = true;

		// Update dist value of the adjacent vertices of the picked vertex.
		for (int v = 0; v < V; v++)

			// Update dist[v] only if is not in sptSet, there is an edge from
			// u to v, and total weight of path from src to  v through u is
			// smaller than current value of dist[v]
			if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX
					&& dist[u] + graph[u][v] < dist[v])
				dist[v] = dist[u] + graph[u][v];
	}

	// print the constructed distance array
	printSolution(dist, V);
}
int prob() {
	double x = ((rand() % 100));
	return x < DENSITY ? 1 : 0;
}

void printGraph(int size, int** g) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << " " << g[i][j];
		}
		cout << "\n";
	}
}
int** generateGraph(int size) {
	int** g = new int*[size];
	for (int i = 0; i < size; ++i)
		g[i] = new int[size];
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j)
				g[i][j] = 0;
			else {
				g[i][j] = g[j][i] = prob() * ((rand() % 10) + 1);
			}
		}
	}
	printGraph(size, g);
	return g;
}

class Edge {
public:
	int dest;
	int value;
	Edge(int dest, int value) :
			dest(dest), value(value) {

	}
};
struct smallerEdge {
	bool operator()(const Edge& lhs, const Edge& rhs) const {
		return lhs.value > rhs.value;
	}
};

bool isPresentInNodes(vector<int> nodesVisited, int dest) {
	if (find(nodesVisited.begin(), nodesVisited.end(), dest)
			== nodesVisited.end())
		return false;
	return true;
}

int jarnikPrimMst(int** graph, int size) {
	int mst = 0;
	int node = 0;
	cout << "node " << node << "\n";
	cout << "mst " << mst << "\n";
	vector<int> nodesVisited;
	priority_queue<Edge, std::vector<Edge>, smallerEdge> edgesAvailable;
	while (nodesVisited.size() < size) {

		nodesVisited.push_back(node);
		for (int i = 0; i < size; i++) {
			if (graph[node][i] != 0 && !isPresentInNodes(nodesVisited, i)) {
				Edge* edge = new Edge(i, graph[node][i]);
				edgesAvailable.push(*edge);
			}
		}

		Edge nextEdge = edgesAvailable.top();
		node = nextEdge.dest;
		mst += nextEdge.value;
		cout << "node " << node << "\n";
		cout << "mst " << mst << "\n";
		edgesAvailable.pop();
	}
	return mst;
}
void readingFromFile() {
	ifstream filee("C:\\Users\\askoczyl\\workspaceCpp\\test\\src\\t.txt");
	istream_iterator<string> start(filee), end;
	vector<string> words(start, end);
	cout << "words: \n";
	for (auto wr : words)
		cout << wr << "\n";
	sort(words.begin(), words.end());
	for (auto wr : words)
		cout << wr << "\n";
}
enum class logical
	:short {NO = 1, MAYBE, YES = 2 * MAYBE,
};

int main() {
	srand(time(0));
	dijkstra(generateGraph(V), 0);

	int mst = jarnikPrimMst(generateGraph(V), V);
	cout << "MST= " << mst << "\n";

	vector<Card> deck(52);
	Dealer dealer;
	dealer.initDeck(deck);
	int howMany = 100;
	int flush = 0;
	int str = 0;
	int str_flush = 0;
	Player player;
	for_each(deck.begin(), deck.end(),[](Card c){cout << c.getPips().get_pips() << "\n";});
	for (int i = 0; i < howMany; i++) {
		random_shuffle(deck.begin(), deck.end());
		vector<Card> hand(5);

		for (int j = 0; j < 5; j++) {
			hand[j] = deck[j];
		}
		if (player.isFlush(hand))
			flush++;
		if (player.isStraight(hand))
			str++;
		if (player.isFlushAndStraight(hand))
			str_flush++;

	}
	cout << "Flushes: " << flush << "\n";
	cout << "Straights: " << str << "\n";
	cout << "flush straight: " << str_flush << "\n";

	cout << "runs: " << howMany << "\n";
	point p(1.2, 3.4);
//	p.setFirst(3);
//	p.setSecond(5);
	cout << "first of p:" << p.getFirst() << "\n";
	cout << "length of p:" << p.length() << "\n";

	point3d* p2 = new point3d(4,3,7);
	point* p3 = p2;
//	p.setFirst(3);
//	p.setSecond(5);
	cout << "first of p:" << p2->getFirst() << "\n";
	cout << "length of p:" << p2->length() << "\n";
	cout << "length of p:" << p3->length() << "\n";

	HexGraph* g = new HexGraph();
	g->printGraph();

	MyContainer<int,4>* cont = new MyContainer<int, 4>();
	int t[4] = {1,2,3,4};
	MyContainer<int,4> cont2(t);
	cont2.printMe();
	cout << "\n";
	for(auto it = cont2.begin(); it<cont2.end(); it++){
		cout << "it: "<< *it << "\n";
	}
	cout << "cont2[2] "<<cont2[2];

	return 0;
}
