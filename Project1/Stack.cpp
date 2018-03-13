#include "Stack.h"


template <typename T>
Stack<T>::Stack()
{
	m_top = nullptr;
	m_size = 0;
}

template <typename T>
Stack<T>::~Stack()
{
	Node<T>* temp = m_top;
	for (int i = 0; i < m_size; i++)
	{
		delete temp;
	}
}

template <typename T>
bool Stack<T>::isEmpty() const
{
	return(m_top == nullptr);
}

template <typename T>
T Stack<T>::pop() throw(std::runtime_error)
{
	if (m_size <= 0)
	{
		throw(std::runtime_error("Cannot pop on an empty stack"));
	}
	else
	{
		Node<T>* old_top = m_top;
		Node<T>* new_top = m_top->getNext();
		m_top = new_top;
		return(old_top);
		delete old_top;
		m_size--;
	}
}

template <typename T>
void Stack<T>::push(const T value)
{
	Node<T>* old_top = m_top;
	Node<T>* new_top = new Node<T>(value);
	new_top->setNext(old_top);
	m_top = new_top;
	m_size++;
}

template <typename T>
T Stack<T>::peek() const throw(std::runtime_error)
{
	if (isEmpty())
	{
		throw(std::runtime_error("Cannot peek on an empty stack"));
	}
	else
	{
		return(m_top->getData());
	}
}

template <typename T>
int Stack<T>::returnSize() const
{
	return(m_size);
}