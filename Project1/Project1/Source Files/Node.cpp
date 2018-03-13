#include "Node.h"


template <typename T>
Node<T>::Node(T value)
{
	m_data = value;
	m_next = nullptr;
}

template <typename T>
void Node<T>::setNext(Node<T>* next)
{
	m_next = next;
}

template <typename T>
T Node<T>::getData()
{
	return(m_value);
}

template <typename T>
void Node<T>::setValue(T value)
{
	m_value = value;
}

template <typename T>
Node<T>* Node<T>::getNext()
{
	return(m_next);
}
