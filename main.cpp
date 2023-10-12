#include "Node.h"
#include <chrono>
#include <cstdlib>

using namespace std::chrono;

int main()
{
	binarySearchTree<int> tree;
	const int MAX = 25000;
	char user = ' ';
	char cont = ' ';
	int item = 24000;
	int randomNum = 0;
	
	//(best) Omega
	cout << "Experimenting on the Best Case (Omega)! Press Enter to continue" << endl << endl;
	cin.get(cont);
	//time start
	cout << "Loading " << MAX << " ordered input into the Binary Search Tree. Please wait" << endl; 
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

	cout << "The insert function took " << duration.count()<< " milliseconds to complete" << endl;
		
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

	
		cout << "The inorder function took " << duration.count()<< " milliseconds to complete" << endl;
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

		cout << "The preorder function took " << duration.count() << " milliseconds to complete" << endl;
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

		cout << "The postorder function took " << duration.count() << " milliseconds to complete" << endl;
		user = ' ';
	}

	//time start
	start = high_resolution_clock::now();

	if(tree.search(item))
	{

		//time stop
		stop = high_resolution_clock::now();
		//time measure
		duration = duration_cast<milliseconds>(stop - start);

		cout << "The search function took " << duration.count() << " milliseconds to find " << item << endl;
	}
       	else 
	{

		stop = high_resolution_clock::now();
		//time measure
		duration = duration_cast<milliseconds>(stop - start);

		cout << "The search function took " << duration.count() << " milliseconds but couldn't find " << item << endl;
	}

	//time start
	start = high_resolution_clock::now();

	//deleteTree function
	tree.deleteTree();
	//stop time
	stop = high_resolution_clock::now();
	//time measure
	duration = duration_cast<milliseconds>(stop - start);

	cout << "The destroyTree function took " << duration.count() << " milliseconds to complete" << endl;

	//(average) THETA
	
	binarySearchTree<int> AvgTree;

	//start time
	
	cout << "Experimenting on the Best Case (Theta)! Press Enter to continue" << endl << endl;
	cin.get(cont);
	//time start
	cout << "Loading " << MAX << " Random inputs into the Binary Search Tree. Please wait" << endl; 
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

	cout << "The insert function (avg case) took " << duration.count() << " milliseconds to complete" << endl;

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
	
		cout << "The inorder function took " << duration.count()<< " milliseconds to complete" << endl;
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

		cout << "The preorder function took " << duration.count() << " milliseconds to complete" << endl;
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

		cout << "The postorder function took " << duration.count() << " milliseconds to complete" << endl;
		user = ' ';
	}
	//worst case, item isnt in list
	item = 26000;
	//time start
	start = high_resolution_clock::now();

	if(AvgTree.search(item))
	{
		
		//time stop
		stop = high_resolution_clock::now();
		//time measure
		duration = duration_cast<milliseconds>(stop - start);

		cout << "The search function took " << duration.count() << " milliseconds to find " << item << endl;
	}
	else 
	{

		//time stop
		stop = high_resolution_clock::now();
		//time measure
		duration = duration_cast<milliseconds>(stop - start);

		cout << "The search function took " << duration.count() << " milliseconds but couldn't find " << item << endl;
	}


	return 0;

}
