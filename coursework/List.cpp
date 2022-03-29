#include "List.h"



template<typename T>
List<T>::List()
{
	size = 0;
	head = nullptr;
}


template<typename T>
void List<T>::push_back(T data)
{
	if (head == nullptr)
	{
		head = new Node<T>(data);
	}
	else
	{
		Node<T>* current = this->head;

		while (current->Next != nullptr)
		{
			current = current->Next;
		}

		current->Next = new Node<T>(data);
	}
	size++;
}

template<typename T>
void List<T>::push_index(T data, size_t index)
{
	Node<T>* current = this->head;
	Node<T>* prev = nullptr;
	Node<T>* input = new Node<T>(data);
	size_t i = 0;

	while (current != nullptr)
	{

		if (i == index)
		{
			input->Next = current;
			prev->Next = input;
		}
		prev = current;
		current = current->Next;
		i++;
	}
	size++;
}

template<typename T>
void List<T>::replace(size_t fromIndex, size_t toIndex)
{
	Node<T>* current = this->head;
	Node<T>* to = nullptr;
	Node<T>* from = nullptr;
	Node<T>* term = nullptr;
	size_t i = 0;

	while (current != nullptr)
	{
		if (i == toIndex)
		{
			to = current;
		}
		if (i == fromIndex)
		{
			from = current;
		}

		current = current->Next;
		i++;
	}
	term = to;
	to = from;
	from = to;
}

template<typename T>
void List<T>::erase(size_t index)
{
	Node<T>* current = this->head;
	Node<T>* prev = nullptr;
	size_t i = 0;

	while(current != nullptr)
	{

		if(i == index)
		{
			prev->Next = current->Next;
		}
		prev = current;
		current = current->Next;
		i++;
	}
	size--;
}

template<typename T>
void List<T>::findByKey(int key)
{
	Node<T>* current = this->head;
	int key;
	std::cin >> key;
	while (current != nullptr)
	{
		if (current->data.key == key)
		{
			std::cout << key;
		}

		current = current->Next;
	}
}

template<typename T>
void List<T>::Print()
{
	Node<T>* current = this->head;
	if (this->head != nullptr)
	{
		while (current != nullptr)
		{
			std::cout << current->data;

			current = current->Next;
		}
	}
	else
	{
		std::cout << "list is empty \n";
	}
}

