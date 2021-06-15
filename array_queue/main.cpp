#include <iostream>
#include "Array_queue.cpp"
using namespace std;
int main(void)
{
	Array_queue<string> ahmed(3);
	ahmed.Enqueue("ahmed");
	ahmed.Enqueue("mohamed");
	ahmed.Enqueue("abulfarh");
	while (!ahmed.Empty())
		cout <<ahmed.Dequeue()<<" ";
}
