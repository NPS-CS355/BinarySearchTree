#include "Node.h"
#include <chrono>

using namespace std::chrono;

int main()
{
	binarySearchTree<int> tree;
	const int MAX = 25000;
	char user = ' ';
	
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
	auto duration = duration_cast<seconds>(stop - start);

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
		duration = duration_cast<seconds>(stop - start);
	
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
		duration = duration_cast<seconds>(stop - start);

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
		duration = duration_cast<seconds>(stop - start);

		cout << "The postorder function took " << duration.count() << " seconds to complete" << endl;
		user = ' ';
	}
	
	//time start
	start = high_resolution_clock::now();

	tree.search(1);

	//time stop
	stop = high_resolution_clock::now();
	//time measure
	duration = duration_cast<seconds>(stop - start);

	cout << "The search function took " << duration.count() << " seconds to find 1" << endl;

	//time start
	start = high_resolution_clock::now();

	//deleteTree function
	tree.deleteTree();
	//stop time
	stop = high_resolution_clock::now();
	//time measure
	duration = duration_cast<seconds>(stop - start);

	cout << "The destroyTree function took " << duration.count() << " seconds to complete" << endl;
	return 0;
}
