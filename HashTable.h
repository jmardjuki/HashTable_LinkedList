//=+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=
// HashTable_LinkedList
//=+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=+=+==+=
// Name        : HashTable.h
// Completed by: Janet Mardjuki
// Description : Header File for Hash Table
//==========================================================================================================================
#pragma once
#include "LinkedList.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class HashTable
{
public:
	//==========================================================================================================================
	// Default Constructor
	//==========================================================================================================================
	// Create a default sized hash table
	//	// PRE: N/A
	//	// POST: Create a hash table of size 101. Set the arraySize to 101. Set the number item as 0 (empty)
	//	// PARAM: N/A
	//==========================================================================================================================
	HashTable(void);

	//==========================================================================================================================
	// Constructor
	//==========================================================================================================================
	// Create a hash table with the specified size
	//	// PRE: n cannot be negative
	//	// POST: Create a hash table of size ~2n (prime number nearest to 2n). Set the arraySize to ~2n. Set the number item as 0 (empty)
	//	// PARAM: N/A
	//========================================================================================================================== 
	HashTable(int n);

	//==========================================================================================================================
	// Copy Constructor
	//==========================================================================================================================
	// Create a new hashtable with a deep copy of the parameter hash table
	//	// PRE: N/A
	//	// POST: Deep copy the hash table parameter and create a new hash table with that contents
	//	// PARAM: toCopy is the reference parameter of hashtable that user wanted to copy
	//==========================================================================================================================
	HashTable(const HashTable &);

	//==========================================================================================================================
	// Destructor
	//==========================================================================================================================
	// De-allocate all the memory associated with the calling hash table
	//	// PRE: N/A
	//	// POST: De-allocate all the memory associated with the calling hash table
	//	// PARAM: N/A
	//==========================================================================================================================
	~HashTable(void);

	//==========================================================================================================================
	// Assignment Operator =
	//==========================================================================================================================
	// Assign the operator = so it will deep copy the hashtable parameter to 'this'
	//	// PRE: N/A
	//	// POST: If the calling hashtableis not the parameter -> Deallocate all the memory associated with the calling hashtable
	//		   : -> Deep copy the contents of hashtable parameter and put in the calling hashtable.
	//		   : Return the calling object
	//	// PARAM: toBeCopied is the hashtable that program will copy
	//==========================================================================================================================
	HashTable & operator= (const HashTable &);

	//==========================================================================================================================
	// Insert
	//==========================================================================================================================
	// Insert item to the hash table
	//	// PRE: N/A
	//	// POST: Insert item to the hash table index that determined by the hash function. Return true if it's succesfully inserted; false otherwise
	//	// PARAM: toInsert is the string to be inserted
	//==========================================================================================================================
	bool insert (string );

	//==========================================================================================================================
	// Remove
	//==========================================================================================================================
	// Remove item from the hash table
	//	// PRE: N/A
	//	// POST: Remove item from the hash table index that determined by the hash function. Return true if it's succesfully removed; false otherwise
	//	// PARAM: toRemove is the string to be inserted
	//==========================================================================================================================
	bool remove(string );

	//==========================================================================================================================
	// Search
	//==========================================================================================================================
	// Check if item exist in the hash table
	//	// PRE: N/A
	//	// POST: Search item in the hash table. Return true if it's faound in table; false otherwise
	//	// PARAM: toRemove is the string to be inserted
	//==========================================================================================================================	
	bool search(string ) const;

	//==========================================================================================================================
	// Size
	//==========================================================================================================================
	// Get the number of item in the table
	//	// PRE: N/A
	//	// POST: Return the number of item in the table
	//	// PARAM: N/A
	//==========================================================================================================================
	int size() const;

	//==========================================================================================================================
	// Max Size
	//==========================================================================================================================
	// Get the table size
	//	// PRE: N/A
	//	// POST: Return the size of the table (array)
	//	// PARAM: N/A
	//==========================================================================================================================
	int maxSize() const;

	//==========================================================================================================================
	// Load Factor
	//==========================================================================================================================
	// Get load factor of the table
	//	// PRE: N/A
	//	// POST: Return the load factor of the table
	//	// PARAM: N/A
	//==========================================================================================================================
	double loadFactor() const;

	//==========================================================================================================================
	// Intersection
	//==========================================================================================================================
	// Get the intersection of the the calling hash table and the parameter hash table
	//	// PRE: N/A
	//	// POST: Returns vector that contains the intersection of the calling hash table and the parameter hash table
	//	// PARAM: N/A
	//==========================================================================================================================
	vector<string> intersection(const HashTable &theSecond) const;

	//==========================================================================================================================
	// Union
	//==========================================================================================================================
	// Get the union of the the calling hash table and the parameter hash table
	//	// PRE: N/A
	//	// POST: Returns vector that contains the union of the calling hash table and the parameter hash table
	//	// PARAM: N/A
	//==========================================================================================================================
	vector<string> unions(const HashTable &) const;

	//==========================================================================================================================
	// Differnce 
	//==========================================================================================================================
	// Get the difference of the the calling hash table and the parameter hash table
	//	// PRE: N/A
	//	// POST: Returns vector that contains the fiffernce of the calling hash table and the parameter hash table
	//	// PARAM: N/A
	//==========================================================================================================================
	vector<string> difference(const HashTable &theSecond) const;

private:
	LinkedList* arr;
	int arraySize;
	int numberItem;

	//--------------------------------------------------------------------------------------------------------------------------
	//===================================================  HELPERS  ============================================================
	//--------------------------------------------------------------------------------------------------------------------------

	//==========================================================================================================================
	// Is It Prime
	//==========================================================================================================================
	// Check if the parameter number is a prime number
	//	// PRE: n cannot be negative
	//	// POST: Check if the parameter is a prime number
	//	// PARAM: n is the number to be check
	//==========================================================================================================================
	bool isItPrime(int n) const;

	//==========================================================================================================================
	// Hash Function
	//==========================================================================================================================
	// Calculate the index of where it has to put the string
	//	// PRE: N/A
	//	// POST: Returns the index of the where string should be
	//	// PARAM: toInsert is the string to be find the index number at the table
	//==========================================================================================================================
	int hashFunction(string toInsert) const;
};

