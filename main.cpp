#include "Node.h"
#include <chrono>
#include <cstdlib>

using namespace std::chrono;

int main()
{
	binarySearchTree<int> tree;
	const int MAX = 25000;
	char user = ' ';
	int item = 1;
	int randomNum = 0;
	
	//(best) Omega
	
	//time start
	auto start = high_resolution_clock::now();

	//insert function
	for(int i=0; i < MAX ; i++)
	{
		tree.insertNode(i);
	}
	cout << "This function had " << MAX << " ordered inputs." << endl;
	//time stop
	auto stop = high_resolution_clock::now();
	//time measure
	auto duration = duration_cast<milliseconds>(stop - start);

	cout << "The insert function took " << duration.count()<< " seconds to complete" << endl;
		
	cout << "Test Inorder function? y/n" << endl;
	cin >> user;
	if(user == 'y')
	{
		//time start
		start = high_resolution_clock::now();
	
		//inorder function
		tree.inorderTraversal();
	
		//stop time
		stop = high_resolution_clock::now();
		//time measure
		duration = duration_cast<milliseconds>(stop - start);
	
		cout << "The inorder function took " << duration.count()<< " seconds to complete" << endl;
		user = ' ';
	}

	cout << "Test Preorder function? y/n" << endl;
	cin >> user;
	if(user == 'y')
	{
		//time start
		start = high_resolution_clock::now();
	
		//preorder function
		tree.preorderTraversal();

		//time stop
		stop = high_resolution_clock::now();
		//time measure
		duration = duration_cast<milliseconds>(stop - start);

		cout << "The preorder function took " << duration.count() << " seconds to complete" << endl;
		user = ' ';
	}

	cout << "Test postorder function? y/n" << endl;
	cin >> user;
	if(user == 'y')
	{
		//time start
		start = high_resolution_clock::now();

		//postorder Function
		tree.postorderTraversal();

		//time stop
		stop = high_resolution_clock::now();
		//time measure
		duration = duration_cast<milliseconds>(stop - start);

		cout << "The postorder function took " << duration.count() << " seconds to complete" << endl;
		user = ' ';
	}
	
	//time start
	start = high_resolution_clock::now();

	tree.search(item);

	//time stop
	stop = high_resolution_clock::now();
	//time measure
	duration = duration_cast<milliseconds>(stop - start);

	cout << "The search function took " << duration.count() << " seconds to find 1" << endl;

	//time start
	start = high_resolution_clock::now();

	//deleteTree function
	tree.deleteTree();
	//stop time
	stop = high_resolution_clock::now();
	//time measure
	duration = duration_cast<milliseconds>(stop - start);

	cout << "The destroyTree function took " << duration.count() << " seconds to complete" << endl;

	//(average) THETA
	
	binarySearchTree<int> AvgTree;

	//start time
	start = high_resolution_clock::now();
	//insert function
	for(int count = 0; count < MAX; count++)
	{
		AvgTree.insertNode((rand() % MAX) + 100);
	}

	//stop time
	stop = high_resolution_clock::now();
	//time measure
	duration = duration_cast<milliseconds>(stop - start);

	cout << "The insert function (avg case) took " << duration.count() << "seconds to complete" << endl;

	cout << "Test Inorder function? y/n" << endl;
	cin >> user;
	if(user == 'y')
	{
		//time start
		start = high_resolution_clock::now();
	
		//inorder function
		AvgTree.inorderTraversal();
	
		//stop time
		stop = high_resolution_clock::now();
		//time measure
		duration = duration_cast<milliseconds>(stop - start);
	
		cout << "The inorder function took " << duration.count()<< " seconds to complete" << endl;
		user = ' ';
	}
	
	cout << "Test Preorder function? y/n" << endl;
	cin >> user;
	if(user == 'y')
	{
		//time start
		start = high_resolution_clock::now();
	
		//preorder function
		AvgTree.preorderTraversal();

		//time stop
		stop = high_resolution_clock::now();
		//time measure
		duration = duration_cast<milliseconds>(stop - start);

		cout << "The preorder function took " << duration.count() << " seconds to complete" << endl;
		user = ' ';
	}
	
	cout << "Test postorder function? y/n" << endl;
	cin >> user;
	if(user == 'y')
	{
		//time start
		start = high_resolution_clock::now();

		//postorder Function
		AvgTree.postorderTraversal();

		//time stop
		stop = high_resolution_clock::now();
		//time measure
		duration = duration_cast<milliseconds>(stop - start);

		cout << "The postorder function took " << duration.count() << " seconds to complete" << endl;
		user = ' ';
	}
	
	//time start
	start = high_resolution_clock::now();

	tree.search(item);

	//time stop
	stop = high_resolution_clock::now();
	//time measure
	duration = duration_cast<milliseconds>(stop - start);

	cout << "The search function took " << duration.count() << " seconds to find 1" << endl;
	
	return 0;
}
