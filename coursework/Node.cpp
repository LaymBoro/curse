#include "Node.h"

template<typename T>
Node<T>::Node(T data, Node* Next)
{
	this->data = data;
	this->Next = Next;
}

