#pragma once
template <typename T>
class Node
{
private:
	T m_data;
	Node<T>* m_next;
public:
	Node(T value);
	T getData();
	void setNext(Node* next);
	void setValue(T value);
	Node<T>* getNext();
	virtual ~Node();
};

