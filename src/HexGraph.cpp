/*
 * HexGraph.cpp
 *
 *  Created on: 08.SIZE.2016
 *      Author: ASKOCZYL
 */

#include "HexGraph.h"

#include <iostream>
HexGraph::~HexGraph() {
	// TODO Auto-generated destructor stub
}

void HexGraph::makeNode(int i, int j, deque<int>& edges) {
	if (j < SIZE-1)
		edges.push_front(i * SIZE + j + 1);
	if (i < SIZE-1) {
		edges.push_front((i + 1) * SIZE + j);
		if (j < SIZE-1)
			edges.push_front((i + 1) * SIZE + j + 1);
	}

	if (i > 0) {
		edges.push_front((i - 1) * SIZE + j);
		if (j > 0)
			edges.push_front((i - 1) * SIZE + j - 1);
	}
	if (j > 0)
		edges.push_front(i * SIZE + j - 1);
}

void HexGraph::printGraph() {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			printEdges(edgesList[i * 11 + j]);
			cout << "\t";
		}
		cout << "\n";
	}
}

void HexGraph::printEdges(deque<int> nodeEdges) {
	cout << "n: [";
	for (auto node : nodeEdges) {
		cout << node << " ";
	}
	cout << "] ";
}
