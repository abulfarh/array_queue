#include "Array_queue.h"
#include <assert.h>
template <class T>
bool Array_queue<T> ::Empty()
{
	return (element == 0);
}
template <class T>
int Array_queue<T> ::Lenght()
{
	return (element);
}
template <class T>
void Array_queue<T> ::Enqueue(T x)
{
	if (capacity == element)
		Expand();
	if (element == 0)
		front = 0;
	back = (back + 1) % capacity;
	arr[back] = x;
	element++;
}
template <class T>
T Array_queue<T> ::Dequeue()
{
	assert(!(element == 0));
	T tmp = arr[front];
	if (element == 1)
		front = back = -1;
	else
		front = ((front + 1) % capacity);
	element--;
	return tmp;
}
template <class T>
T Array_queue<T> ::Front ()
{
	return (arr[front]);
}
template <class T>
T Array_queue<T> ::Back()
{
	return (arr[back]);
}
template <class T>
void Array_queue<T> ::Expand()
{
	T* arr2 = new T[capacity + 10];
	for (int i = 0; i < capacity; i++)
		arr2[i] = arr[i];
	delete[] arr;
	arr = arr2;
	capacity += 10;
}
template <class T>
Array_queue<T> ::Array_queue(int x)
{
	capacity = x;
	arr = new T[capacity];
	back = -1;
	front = -1;
	element = 0;
}