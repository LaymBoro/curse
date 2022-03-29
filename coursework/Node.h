#pragma once
#include "MobilePhone.h"


template<typename T>
class Node
{
private:
	T data;
	Node<T>* Next;

public:
	Node(T data = T(), Node* Next = nullptr);


};