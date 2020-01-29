#include "object.h"
#include "string.h"
#include "queue.h"
#include <assert.h>
#include <stdio.h>
int main() {
	Queue* q = new Queue();
	Queue* q2 = new Queue();

	String* one = new String("one");
	String* two = new String("two");

	//Check that the isEmpty function correctly identifies the empty queue.
	assert(q->isEmpty());

	//Enqueue the first string, then check that it was added to the front of the queue.
	q->enqueue(one);
	assert(reinterpret_cast<String*>(q->peek())->equals(one));

	//Enqueue the second string, then check that the first string is still at the front.
	q->enqueue(two);
	assert(reinterpret_cast<String*>(q->peek())->equals(one));

	//Dequeue the first string and ensure that it was returned correctly.
	assert(reinterpret_cast<String*>(q->dequeue())->equals(one));

	//Check that the isEmpty function correctly identifies the non-empty queue.
	assert(!q->isEmpty());

	//Check that the second string is now at the front of the queue.
	assert(reinterpret_cast<String*>(q->peek())->equals(two));

	//Dequeue the second string and ensure that it was returned correctly.
	assert(reinterpret_cast<String*>(q->dequeue())->equals(two));

	//Check that the isEmpty function correctly identifies the empty queue.
	assert(q->isEmpty());

	//Check that empty queues are equal.
	assert(q->equals(q2));

	//Check that the empty queue is not equal to non-empty queue.
	q->enqueue(one);
	assert(!q->equals(q2));

	//Check that the queue size is properly updated.
	assert(q2->size() == 0);

	//Check queue equality after the same element is added to each.
	q2->enqueue(one);
	assert(q->equals(q2));

	//Check that the queue size is properly updated.
	assert(q2->size() == 1);

	//Check that the queues are not equal after another element is added to one of them.
	q2->enqueue(two);
	assert(!q->equals(q2));

	//Check that the queue size is properly updated.
	assert(q2->size() == 2);

	printf("This message indicates that all tests ran successfully.\n");

  // cleanup

  // delete each queue
  delete q;
  delete q2;

  // deleting a queue does *not* delete its elements.
  // therefore, we have to manually deallocate each queue
  // element.
  delete one;
  delete two;
}
