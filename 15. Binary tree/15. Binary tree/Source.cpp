#include <iostream>

using namespace std;

struct Node {
	int data;
	struct Node *left;
	struct Node *right;
};

Node *CreateNewNode(int data) {
	Node *newNode = new Node();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

Node *Insert(Node *root, int data) {
	if (root == NULL) {
		root = CreateNewNode(data);
	}
	else if (data <= root->data) {
		root->left = Insert(root->left, data);
	}
	else {
		root->right = Insert(root->right, data);
	}

	return root;
}

bool Search(Node* root, int data) {
	if (root == NULL) {
		return false;
	}
	else if (root->data == data) {
		return true;
	}
	else if (data <= root->data) {
		return Search(root->left, data);
	}
	else {
		return Search(root->right, data);
	}
}

int main() {
	int number;

	Node *root = NULL;
	root = Insert(root, 50);
	root = Insert(root, 20);
	root = Insert(root, 23);
	root = Insert(root, 60);

	cout << "Enter number for search: " << endl;
	cin >> number;
	if (Search(root, number) == true) {
		cout << "Number: " << number << " Found" << endl;
	}
	else {
		cout << number << " Not found" << endl;
	}



	system("pause");
	return 0;
}