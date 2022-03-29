#pragma once
#include "Node.h"



template<typename T>
class List
{
private:
	Node<T> *head;
public:
	size_t size;
	List();
	void push_back(T data);
	void push_index(T data, size_t index);
	void replace(size_t fromIndex, size_t toIndex);
	void erase(size_t index); //remove
	void findByKey(int key);
	void Print();

};

