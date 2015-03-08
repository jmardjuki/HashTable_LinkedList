//=+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=
// HashTable_LinkedList
//=+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=
// Name        : LinkedList.h
// Completed by: Janet Mardjuki
// Description : Header File for Linked List
//==========================================================================================================================
#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

//====================================================================================
//=============================== NODE CLASS =========================================
//====================================================================================
class Node
{
public:
	string data;
	Node* next;

	//-> Node constructor
	Node(string value, Node* nd): data(value), next(nd){};
};

//====================================================================================
//============================= LINKED LIST CLASS ====================================
//====================================================================================
class LinkedList
{
public:
	//==========================================================================================================================
	// Default Constructor
	//==========================================================================================================================
	// Create a Linked List
	//	// PRE: N/A
	//	// POST: Set the head as NULL and currentSize of list to zero
	//	// PARAM: N/A
	//==========================================================================================================================
	LinkedList();

	//==========================================================================================================================
	// Copy Constructor
	//==========================================================================================================================
	// Construct and array and copy contents from the list parameter
	//	// PRE: N/A
	//	// POST: Deep copy the toBeCopied to the calling linked list
	//	// PARAM: toBeCopied is the Linked List to be copied
	//==========================================================================================================================
	LinkedList(const LinkedList &);

	//==========================================================================================================================
	// Destructor
	//==========================================================================================================================
	// De-allocate all the memory associated with the calling linked list
	//	// PRE: N/A
	//	// POST: De-allocate all the memory associated with the calling linked list by calling removeAll function
	//	// PARAM: N/A
	//==========================================================================================================================
	~LinkedList();

	//==========================================================================================================================
	// Assignment Operator =
	//==========================================================================================================================
	// Assign the operator = so it will deep copy the parameter to 'this'
	//	// PRE: N/A
	//	// POST: If the calling object is not the parameter -> Deallocate all the memory associated with the calling object
	//		   : -> Deep copy the contents of parameter and put in the calling object.
	//		   : Return the calling object
	//	// PARAM: N/A
	//==========================================================================================================================
	LinkedList& operator= (const LinkedList &);

	//==========================================================================================================================
	// Insert
	//==========================================================================================================================
	// Insert item to the next availiable position in the list
	//	// PRE: N/A
	//	// POST: Insert item to the front of the linkked list. Return true if it's succesfully inserted; false otherwise
	//	// PARAM: toBeInserted is the the string to be inserted in the list 
	//==========================================================================================================================
	bool insert(string);

	//==========================================================================================================================
	// Remove
	//==========================================================================================================================
	// Remove the specific string that user wanted to remove
	//	// PRE: N/A
	//	// POST: Removes item from the linked list. Return true if it's succesfully removed; false otherwise
	//	// PARAM: toBeRemoved is the the string to be removed from the list 
	//==========================================================================================================================
	bool remove(string);
	
	//==========================================================================================================================
	// Search
	//==========================================================================================================================
	// Check if the string user want to find exist
	//	// PRE: N/A
	//	// POST: Search the linked list, check if the string exist in the list. Return true if found, otherwise return false.
	//	// PARAM: toBeSearched is the the string to be found in the list
	//==========================================================================================================================
	bool search(string) const;

	//==========================================================================================================================
	// get
	//==========================================================================================================================
	// Get the vector of the calling linked list
	//	// PRE: N/A
	//	// POST: Return the vector that has the contents of the calling list
	//	// PARAM: N/A
	//==========================================================================================================================
	vector<string> get() const;

private:
	Node* head;
	int currentSize;

	//==========================================================================================================================
	// Copy Helper ( Helper for [copy constructor & operator=] )
	//==========================================================================================================================
	// Deep copy the parameter to the calling object
	//	// PRE: N/A
	//	// POST: Deep copy the parameter to the calling object
	//	// PARAM: toBeCopied is the Linked List to be copied
	//==========================================================================================================================
	void copyHelper(const LinkedList &);

	//==========================================================================================================================
	// Remove All ( Helper for [destructor & operator=] )
	//==========================================================================================================================
	// De-allocate the memory associated with the calling object
	//	// PRE: N/A
	//	// POST: De-allocate the memory associated with the calling object and set the size of list to zero
	//	// PARAM: N/A
	//==========================================================================================================================
	void removeAll();
};

