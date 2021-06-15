#pragma once
template <class T>
class Array_queue
{
private :
	int capacity;
	T* arr;
	int front;
	int back;
	int element;
	void Expand();
public :
	Array_queue(int);
	T Dequeue();
	T Front();
	bool Empty();
	int Lenght();
	void Enqueue(T);
	T Back();
};

