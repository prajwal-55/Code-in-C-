// C++ program for different tree traversals

#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *left;
    struct Node *right;
};

Node* newNode(int data)
{
	Node* temp = new Node;
	temp->data = data;
	temp->left = NULL;
    temp->right = NULL;
	return temp;
}

void printPreorder(struct Node* node){

	if (node == NULL)
		return;

	/* first print data of node */
	cout << node->data << " ";

	/* then recur on left subtree */
	printPreorder(node->left);

	/* now recur on right subtree */
	printPreorder(node->right);
}

int main()
{

    /*                     1
                        /     \
                       2       3
                      / \     / \
                     4   5   6   7
     
    */
	struct Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
    
	root->left->left = newNode(4);
	root->left->right = newNode(5);
    root->right->left = newNode(6);
	root->right->right = newNode(7);

    root->left->left->left = newNode(8);
	root->left->right->right = newNode(9);
    root->left->right->left = newNode(10);
	root->left->right->right = newNode(11);

    root->right->left->left = newNode(12);
	root->right->left->right = newNode(13);
    root->right->right->left = newNode(14);
	root->right->right->right = newNode(15);

	// Function call
	cout << "\nPreorder traversal of binary tree is \n";
	printPreorder(root);

	return 0;
}






















// // Checking if a binary tree is a complete binary tree in C++
// #include <iostream>
// using namespace std;

// struct Node {
//   int key;
//   struct Node *left, *right;
// };

// // Create node
// struct Node *newNode(char k) {
//   struct Node *node = (struct Node *)malloc(sizeof(struct Node));
//   node->key = k;
//   node->right = node->left = NULL;
//   return node;
// }

// // Count the number of nodes
// int countNumNodes(struct Node *root) {
//   if (root == NULL)
//     return (0);
//   return (1 + countNumNodes(root->left) + countNumNodes(root->right));
// }

// // Check if the tree is a complete binary tree
// bool checkComplete(struct Node *root, int index, int numberNodes) {
  
//   // Check if the tree is empty
//   if (root == NULL)
//     return true;

//   if (index >= numberNodes)
//     return false;

//   return (checkComplete(root->left, 2 * index + 1, numberNodes) && checkComplete(root->right, 2 * index + 2, numberNodes));
// }

// int main() {
//   struct Node *root = NULL;
//   root = newNode(1);
//   root->left = newNode(2);
//   root->right = newNode(3);
//   root->left->left = newNode(4);
//   root->left->right = newNode(5);
//   root->right->left = newNode(6);

//   int node_count = countNumNodes(root);
//   int index = 0;

//   if (checkComplete(root, index, node_count))
//     cout << "The tree is a complete binary tree\n";
//   else
//     cout << "The tree is not a complete binary tree\n";
// }


// #include <iostream>

// struct Node {
// int data;
// Node* left;
// Node* right;

// Node(int data) {
// 	this->data = data;
// 	this->left = nullptr;
// 	this->right = nullptr;
// }
// };

// class BinaryTree {
// public:
// Node* root;

// BinaryTree() {
// 	root = nullptr;
// }

// void addNode(int data) {
// 	Node* newNode = new Node(data);

// 	if (root == nullptr) {
// 	root = newNode;
// 	} else {
// 	Node* focusNode = root;
// 	Node* parent;

// 	while (true) {
// 		parent = focusNode;

// 		if (data < focusNode->data) {
// 		focusNode = focusNode->left;
// 		if (focusNode == nullptr) {
// 			parent->left = newNode;
// 			return;
// 		}
// 		} else {
// 		focusNode = focusNode->right;
// 		if (focusNode == nullptr) {
// 			parent->right = newNode;
// 			return;
// 		}
// 		}
// 	}
// 	}
// }

// void preOrderTraversal(Node* focusNode) {
// 	if (focusNode != nullptr) {
// 	std::cout << focusNode->data << " ";
// 	preOrderTraversal(focusNode->left);
// 	preOrderTraversal(focusNode->right);
// 	}
// }
// };

// int main() {
// BinaryTree tree;

// tree.addNode(50);
// tree.addNode(25);
// tree.addNode(75);
// tree.addNode(12);
// tree.addNode(37);
// tree.addNode(43);
// tree.addNode(30);

// tree.preOrderTraversal(tree.root);

// return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// class Node{

//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data=data;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };

//  void preOrderTraversal(Node* focusNode) {
//     if (focusNode != nullptr) {
//       std::cout << focusNode->data << " ";
//       preOrderTraversal(focusNode->left);
//       preOrderTraversal(focusNode->right);
//     }
//   }
// int main(){

//     Node* root = new Node(1);
//     root->left= new Node(2);
//     root->left= new Node(3);

// return 0;
// }