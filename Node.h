#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;

// This is a data type created by the programmer
template <typename type>
struct Node
{
	type data;
	Node<type>* left;
	Node<type>* right;
};


// This is also a datatype created by the programmer

template <class type>
class binarySearchTree
{
private:
	Node<type>* root;

	void insertRecursively(Node<type>*& ptr, Node<type>*& trail, Node<type>*& newNode)
	{
		if (ptr == nullptr)
		{
			if(trail->data > newNode->data)
			{
				trail->left = newNode;
			}
			else
			{
				trail->right = newNode;
			}
		}
		else 
		{
			if(ptr->data > newNode->data)
			{
				insertRecursively(ptr->left, ptr, newNode);
			}
			else if(ptr->data < newNode->data)
			{
				insertRecursively(ptr->right, ptr, newNode);
			}

		}


	}

	void inorder(Node<type>* ptr)
	{
		if(ptr != nullptr)
		{
			inorder(ptr->left);
			cout << ptr->data;
			inorder(ptr->right);
		}
	}

	void preorder(Node<type>* ptr)
	{
		if (ptr != nullptr)
		{
			cout << ptr->data << " ";
			preorder(ptr->left);
			preorder(ptr->right);
		}
	}

	void postorder(Node<type>* ptr)
	{
		if(ptr != nullptr)
		{
			postorder(ptr->left);
			postorder(ptr->right);
			cout << ptr->data << " ";
		}
	}

	bool searchRecursively(Node<type>*& ptr, type item)
	{
		if(ptr == nullptr)
			return false;
		else if(ptr->data == item)
			return true;
		else if (item > ptr->info)
		{
			return searchRecursively(ptr->right, item);
		}
		else if (item < ptr->info)
		{
			return searchRecursively(ptr->left, item);
		}
	}



public:
	binarySearchTree()
	{
		root = nullptr;
	}
	
	void insertNode(const type& inputNode)
	{
		Node<type>* newNode;
		newNode = new Node<type>;
		newNode->data = inputNode;
		newNode->left = nullptr;
		newNode->right = nullptr;

		if(root == nullptr)
			root = newNode;
		else if(newNode->data > root)
		{
			insertRecursively(root->right, root, newNode);

		}
		else
		{
			//traverse left
			insertRecursively(root->left, root, newNode);
		}
	}

	void inorderTraversal()
	{
		inorder(root);
	}

	void preorderTraversal()
	{
		preorder(root);
	}

	void postorderTraversal()
	{
		postorder(root);
	}

	void deleteTree(Node<type>*& ptr)
	{
		if(ptr != nullptr)
		{
			destroy(ptr->left);
			destory(ptr->right);
			delete ptr;
			ptr = nullptr;
		}
	}

	bool search(type& item)
	{
		return searchRecursively(root, item);
	}

	
	
};


#endif
