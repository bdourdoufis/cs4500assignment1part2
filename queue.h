//lang::CwC

#pragma once
#include "object.h"
#include <cstddef>

//Queue implementation that uses a simplified underlying linked list to manage data.
class Queue : public Object{
public:


	// Creates an empty queue
	Queue();

	// Creates a queue by performing a shallow copy of q's elements.
	Queue(Queue* q);

	// Queue destructor
	~Queue() {}

	//Add a new element to the back of the queue.
	void enqueue(Object* add);

	//Remove the element at the front of the queue and return it.
	Object* dequeue();

	//Returns the element at the front of the queue without removing it from the queue.
	Object* peek();

	//Returns true if there are no elements in the queue.
	bool isEmpty();

	//Determines if the given object is equal to this Queue object.
	bool equals(Object* o);

	//Hashes the queue object.
	size_t hash();

	// Get the size of the queue
	size_t size();
};
