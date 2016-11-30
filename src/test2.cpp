////============================================================================
//// Name        : test.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : Hello World in C++, Ansi-style
////============================================================================
//#include <cstdlib>
//#include <time.h>
//#include "Porshe.cpp"
//#include "Point.h"
////#include "Node.h"
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//namespace {
//
//const int DENSITY = 70;
//
//}
//
//using namespace std;
//
//int* sort(int tab[]) {
//	for (int i = 0; i < sizeof(tab); i++) {
//		for (int j = sizeof(tab); j > 0; j--) {
//			if (tab[j] > tab[j - 1])
//				swap(tab[j], tab[j - 1]);
//
//		}
//	};
//	return tab;
//}
//template<class T>
//T sum(T arr[]) {
//	double sum = 0;
//	for (int i = 0; i < sizeof(arr); i++) {
//		sum += arr[i];
//	}
//	return sum;
//}
//
//template<class T>
//void write(T arr[], int size) {
//	for (int i = 0; i < size; i++) {
//		cout << arr[i] << "\n";
//	}
//}
//ostream& operator<<(ostream& out, const Point* a) {
//	out << "(" << a->getX() << "," << a->getY() << ")" << "\n";
//	return out;
//}
//int prob() {
//	double x = ((rand() % 100));
//	return x < DENSITY ? 1 : 0;
//}
//
//void printGraph(int size, int** g) {
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j < size; j++) {
//			cout << " " << g[i][j];
//		}
//		cout << "\n";
//	}
//}
//
//
//
//	int** g = new int*[size];
//	for (int i = 0; i < size; ++i)
//		g[i] = new int[size];
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j < size; j++) {
//			if (i == j)
//				g[i][j] = 0;
//			else {
//				g[i][j] = g[j][i] = prob() * ((rand() % 10) + 1);
//			}
//		}
//	}
//	printGraph(size, g);
//	return g;
//}
//
////void addToOpenSet(int size, int newNode, int** g, vector<int>& closedSet,
////		vector<Node*>& openSet) {
////	for (int i = 0; i < size; i++) {
////		if ((g[newNode][i] != 0)) {
////			Node* newN = new Node(i,g[newNode][i]);
////			openSet.push_back(newN);
////		}
////	}
////}
//
//void addToOpenSet(int size, int newNode, int** g, vector<int>& closedSet,
////		vector<int>& openSet) {
////	for (int i = 0; i < size; i++) {
////		if ((g[newNode][i] != 0)) {
////			Node* newN = new Node(i,g[newNode][i]);
////			openSet.push_back(newN);
////		}
////	}
////}
//
//bool isGraphClosed(int** g, int size) {
//	vector<int> closedSet;
//	vector<int> openSet;
//	int row = 0;
//	closedSet.push_back(row);
//	addToOpenSet(size, row, g, closedSet, openSet);
//	while (!openSet.empty()) {
//		int newNode = *(--(openSet.end()));
//		closedSet.push_back(newNode);
//		openSet.pop_back();
//		addToOpenSet(size, newNode, g, closedSet, openSet);
//	}
//	if (closedSet.size() == size)
//		return true;
//
//	return false;
//
//}
//
//
////int getDijkstraShortestPath(int** graph, int graphSize) {
////	vector<Node*> closedSet;
////	vector<Node*> openSet;
////	int** initNode = graph[0][0];
////	closedSet.push_back(initNode);
////	addToOpenSet(graphSize, initNode, graph, closedSet, openSet);
////	int minPath = graph[row][1];
////	int minNode = row;
////	for(int i=1; i<graphSize; i++){
////		if(graph[row][i] < minPath){
////			minPath = graph[row][i];
////			minNode = i;
////		}
////	}
////	if(minNode==graphSize) return minPath;
////
////	return 0;
////}
//
////int main() {
////	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
//////	Car* vehicle = new Porshe();
//////	vehicle->drive();
////////	auto<Porshe> p(new Porshe);
//////	delete vehicle;
//////	Car v2;
//////	v2.drive();
//////	Porshe v3;
//////	v3.drive();
//////
//////	int table[] = { 100, 3, 77, 18, 0 };
//////	int* t2p;
//////	t2p = sort(table);
//////	for (int i = 0; i < 5; i++) {
//////		cout << "sort: " << t2p[i] << endl;
//////	}
//////	int a[10];
//////	int* p = &a[10];
//////	*p = 9;
//////	a[10] = 11;
//////	cout << "aaa: " << a[10] << "\n";
//////
//////	double ar[] = { 2.2, 1.1, 3.3 };
//////	write(ar,3);
//////	cout << "sum " << sum(ar) << "\n";
//////	write(table,5);
//////	cout << "sum2 " << sum(table) << "\n";
//////	Point* a1 = new Point(1,2);
//////	Point* b1 = new Point(2,3);
//////	Point* c1 = *a1 + *b1;
//////	cout << "c" << c1;
////
////	cout << "isClosed: " << isGraphClosed(generateGraph(5), 5) << "\n";
////
////}
