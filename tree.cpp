#include <bits/stdc++.h>
using namespace std;
#define ll long long
class node {
public:
	int data;
	node* left;
	node* right;

// parameterised constructor
	node(int val) {
		data = val;
		left = right = NULL;
	}
};

int main() {
	/*
	   The below 4 lines of code will execute only on your local machine not on online judge,
	   so you can use it on your local machine as well as online (competitive programming).
	*/

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif

	/*
	             3
	            / \
	           4   7
	          / \
	         9   5
	*/

	node *root  = NULL; // empty tree
	root = new node(3);
	root->left = new node(4);
	root->right = new node(7);
	root->left->left = new node(9);
	root->left->right = new node(5);


	return 0;
}