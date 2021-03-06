#include "main.h"

void test_addEdge() {
	std::cout << "Testing addEdge()...\n";
	Graph<int> graf(5, false);
	graf.addEdge(0, 5);
	assert(graf.hasEdge(0,5) == 0 && graf.getE() == 0);
	graf.addEdge(0, 1);
	assert(graf.hasEdge(0,1) == 1 && graf.getE() == 1);
	graf.addEdge(1, 2);
	graf.addEdge(1, 3);
	graf.addEdge(1, 4);
	graf.addEdge(1, 4);
	graf.addEdge(1, 5);
	graf.addEdge(1, 5);
	graf.addEdge(1, 6);
	graf.display();
	assert(graf.getE() == 4);

	Graph<int> graf2(5, true);
	graf2.addEdge(0, 5);
	assert(graf2.hasEdge(0,5) == 0 && graf2.getE() == 0);
	graf2.addEdge(0, 1);
	assert(graf2.hasEdge(0,1) == 1 && graf2.getE() == 1);
	graf2.addEdge(1, 2);
	graf2.addEdge(1, 3);
	graf2.addEdge(1, 4);
	graf2.addEdge(1, 4);
	graf2.addEdge(1, 5);
	graf2.addEdge(1, 5);
	graf2.addEdge(1, 6);
	graf2.display();
	assert(graf2.getE() == 4);

}

void test_removeEdge() {
	std::cout << "Testing removeEdge()...\n";
	Graph<int> graf(4, true);
	graf.addEdge(0, 1);
	graf.addEdge(0, 2);
	graf.addEdge(0, 3);
	graf.addEdge(1, 2);
	graf.addEdge(1, 3);
	graf.addEdge(2, 1);
	assert(graf.getE() == 6);
	graf.removeEdge(0, 2);
	graf.removeEdge(0, 1);
	graf.removeEdge(1, 3);
	graf.removeEdge(2, 1);
	assert(graf.getE() == 2);

	Graph<int> graf2(4, false);
	graf2.addEdge(0, 1);
	graf2.addEdge(0, 2);
	graf2.addEdge(0, 3);
	graf2.addEdge(1, 2);
	graf2.addEdge(1, 3);
	graf2.addEdge(2, 1);
	assert(graf2.getE() == 5);
	graf2.removeEdge(0, 2);
	graf2.removeEdge(0, 1);
	graf2.removeEdge(1, 3);
	graf2.removeEdge(2, 1);
	assert(graf2.getE() == 1);
}

void test_clear() {
	std::cout << "Testing clear()...\n";
	Graph<int> graf(4, true);
	graf.addEdge(0, 1);
	graf.addEdge(0, 2);
	graf.addEdge(0, 3);
	graf.addEdge(1, 2);
	graf.addEdge(1, 3);
	graf.addEdge(2, 1);
	assert(graf.getE() == 6);
	graf.clear();
	assert(graf.getE() == 0);
}

void test_BFS_DFS() {
	std::cout << "Testing BFS() and DFS()...\n";
	Graph<int> graf(8, true);
	graf.addEdge(0, 1);
	graf.addEdge(0, 2);
	graf.addEdge(0, 3);
	graf.addEdge(1, 2);
	graf.addEdge(1, 3);
	graf.addEdge(2, 1);
	graf.addEdge(3, 1);
	graf.addEdge(4, 2);
	graf.addEdge(5, 3);
	graf.addEdge(6, 2);
	graf.addEdge(2, 4);
	graf.addEdge(3, 5);
	graf.addEdge(4, 1);
	graf.addEdge(6, 7);
	graf.addEdge(2, 5);
	graf.addEdge(3, 1);
	graf.addEdge(4, 2);
	graf.addEdge(5, 2);
	graf.addEdge(6, 2);
	graf.addEdge(7, 3);
	graf.addEdge(2, 1);
	std::cout << "BFS: ";
	graf.BFS(0);
	std::cout << "\n";
	std::cout << "DFS: ";
	graf.DFS(0);
	std::cout << "\n";
}

int main() {
	
	test_addEdge();
	test_removeEdge();
	test_clear();
	test_BFS_DFS();
}