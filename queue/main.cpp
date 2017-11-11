#include "Queue.h"
#include <cstdlib>

int main()
{
	Queue q1;
	q1.print();

	q1.push(3);
	q1.push(6);
	q1.push(1);
	q1.print();

	q1.pop();
	q1.print();

	q1.pop();
	q1.print();

	q1.pop();
	q1.print();

	Queue q2;
	q2.print();

	q2.push(3);
	q2.push(6);
	q2.push(1);
	q2.print();
}
