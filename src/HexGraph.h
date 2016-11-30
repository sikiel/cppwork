/*
 * HexGraph.h
 *
 *  Created on: 08.11.2016
 *      Author: ASKOCZYL
 */

#ifndef SRC_HEXGRAPH_H_
#define SRC_HEXGRAPH_H_
#include <deque>
#include <vector>

using namespace std;

class HexGraph {
public:
	HexGraph() {
		int count = 0;
		edgesList.resize(121);
		for (int i = 0; i < 11; i++) {
			for (int j = 0; j < 11; j++) {
				makeNode(i, j, edgesList[count++]);
			}
		}
	}
	virtual ~HexGraph();

	void printGraph();

private:
	vector<deque<int>> edgesList;
	const int SIZE = 11;
	void makeNode(int i, int j, deque<int>& edges);
	void printEdges(deque<int> nodeEdges);

};

#endif /* SRC_HEXGRAPH_H_ */
