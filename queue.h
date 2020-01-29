//lang::CwC

#pragma once
#include "object.h"
#include <cstddef>

// Standard Queue API. This queue does NOT own its elements; they must be
// freed separately.
class Queue : public Object{
public:


	// Creates an empty queue
	Queue();

	// Creates a queue by performing a shallow copy of q's elements.
	Queue(Queue* q);

	// Queue destructor
	virtual ~Queue() {}

	//Add a new element to the back of the queue.
	virtual void enqueue(Object* add);

	//Remove the element at the front of the queue and return it.
	virtual Object* dequeue();

	//Returns the element at the front of the queue without removing it from the queue.
	virtual Object* peek();

	//Returns true if there are no elements in the queue.
	virtual bool isEmpty();

	//Determines if the given object is equal to this Queue object.
	virtual bool equals(Object* o);

	//Hashes the queue object.
	virtual size_t hash();

	// Get the size of the queue
	virtual size_t size();
};
