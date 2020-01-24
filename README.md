README
Brennan Dourdoufis & Mark Aldrich
CS4500 Assignment 1 Part 2 - Queue API

This is a simple Queue API which will use a simplified linked list structure to store data.

The Queue's underlying list can store Objects (which includes other lists/queues) and Strings.

For the Queue's core functionality, there are four functions laid out:
	-> enqueue(Object* o), which adds an object to the queue.
	-> dequeue(), which returns the first object in the queue and removes it from the queue.
	-> peek(), which returns the first object in the queue without removing it.
	-> isEmpty(), which returns a boolean indicating whether or not there are any objects in the queue.
    -> size(), which returns the size of the queue

Two additional functions, equals(Object* o) and hash() are included so that the queue may better integrate with other Objects.
