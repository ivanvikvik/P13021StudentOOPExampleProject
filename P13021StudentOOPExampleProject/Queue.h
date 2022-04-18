#pragma once

// FIFO - first input first output
class Queue
{
private:
	int size;
	int* queue;

public:
	void enqueue(int item);
	int dequeue();
	int size();
	bool empty(); // true - queue is empty, false - otherwise
	void clear();
};

