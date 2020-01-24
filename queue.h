#pragma once
#include "object.h"
#include <cstddef>
//Simple linked list implementation that will be used by Queue.
class LinkedList : public Object {
	public:
		Object* data;
		LinkedList* next;
		//Elements keep track of their own indicies, just to make things a bit easier.
		size_t index;

		LinkedList();

		~LinkedList();

		//Adds a value to the front of the list (at index 0).
		void add_front(Object* a);

		//Returns the object stored in the node at the end of the list.
		//Returns NULL if the list is empty or the last node of the list has not been set.
		Object* get_end();

		//Returns the object stored in the list at the given index.
		//Returns NULL if the given index is out of bounds.
		Object* get_at(size_t ind);

		//Removes the final node of the list.
		void remove_end();

		//Gets the index of a given object.
		//Returns -1 if the object is not found in the list;
		size_t index_of(Object* o);

		//Returns the size of the list.
		size_t size();

		//Returns true if this list is equal to the given Object.
		bool equals(Object* o);

		//Returns the lists' hash (calculated by adding the hashes of the list's elements).
		size_t hash();
};

//Queue implementation that uses a simplified underlying linked list to manage data.
class Queue : public Object{
	public:

		LinkedList* queue_list;

		Queue();

		~Queue();

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
