
struct Node
{
	int value;
	Node *next;
};

class Queue
{
public:
	Queue();
	~Queue();

	void push(int value);
	int pop();
	void print();

private:
	Node *tail;
	Node *head;
};








