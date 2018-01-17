#include "bintree.h"

BinTree::BinTree() {}

BinTree::BinTree(const BinTree& otherTree) {}

BinTree::~BinTree()
{
	makeEmpty();
}

bool BinTree::insert(NodeData* newNodePtr)
{
	// if tree is empty, insert new node

	// if not empty, call retrieve (which modifies insertion point)
	bool success = retrieve(*newNodePtr, nodePtr);
}

//------------------------- displaySideways ---------------------------------
// Displays a binary tree as though you are viewing it from the side;
// hard coded displaying to standard output.
// Preconditions: NONE
// Postconditions: BinTree remains unchanged.
void BinTree::displaySideways() const 
{
	sideways(root, 0);
}

//---------------------------- Sideways -------------------------------------
// Helper method for displaySideways
// Preconditions: NONE
// Postconditions: BinTree remains unchanged.
void BinTree::sideways(Node* current, int level) const 
{
	if (current != NULL) {
		level++;
		sideways(current->right, level);

		// indent for readability, 4 spaces per depth level 
		for (int i = level; i >= 0; i--) {
			cout << "    ";
		}
// for testing, call your data file something appropriate, e.g., data2.txt
		cout << *current->data << endl;        // display information of object
		sideways(current->left, level);
	}
}