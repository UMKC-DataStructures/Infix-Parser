#pragma once
#include <stdexcept>
#include "Node.h"

template <typename T>
class Stack
{
private:
	Node<T>* m_top;
	int m_size;
public:
	Stack();
	T pop() throw(std::runtime_error);
	void push(const T value);
	T peek() const throw(std::runtime_error);
	bool isEmpty() const;
	int returnSize() const;
	~Stack();
};