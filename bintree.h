#include "nodedata.h"

class BinTree 
{	
public:
	BinTree();								// constructor
	BinTree(const BinTree& otherTree);			// copy constructor
	~BinTree();								// destructor, calls makeEmpty	
	bool isEmpty() const;					// true if tree is empty, otherwise false
	void makeEmpty();						// make the tree empty so isEmpty returns true
	
	bool insert(NodeData* newNode);
	bool retrieve(const NodeData& node, NodeData*& nodePtr) const;  // can this be constant??
	void displaySideways() const;			// displays the tree sideways
    int  getHeight(const NodeData& nodePtr) const; 
	void bstreeToArray(NodeData* nodeArrayPtr); // removed []?
	void arrayToBSTree(NodeData* nodeArrayPtr); // removed []?

    BinTree& operator=(const BinTree& otherTree);
	bool operator==(const BinTree& otherTree) const;
	bool operator!=(const BinTree& otherTree) const;

private:
	struct Node 
	{
		NodeData* data;						// pointer to data object
		Node* left;							// left subtree pointer
		Node* right;						// right subtree pointer
	};
	Node* root;								// root of the tree

// utility functions
void inorderHelper( ... ) const;
void sideways(Node*, int) const;			// provided below, helper for displaySideways()
};