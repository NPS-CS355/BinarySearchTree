#include "Node.h"
#include <chrono>

using namespace std::chrono;

int main()
{
	binarySearchTree<int> tree;
	const int MAX = 1000;

	//(best) Omega
	
	//time start
	auto start = high_resolution_clock::now();

	//insert function
	for(int i=0; i < MAX ; i++)
	{
		tree.insertNode(i);
	}
	cout << "This function had " << MAX << " inputs." << endl;
	//time stop
	auto stop = high_resolution_clock::now();
	//time measure
	auto duration = duration_cast<seconds>(stop - start);

	cout << "The insert function took " << duration.count()<< "seconds to complete" << endl;
	return 0;
}
