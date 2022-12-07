#pragma once

#pragma once
#include "Node.h"


template <class T>
class Queue {
public:
	Queue() : head_(nullptr), size_(0), last(nullptr) {}
public:
	bool isEmpty();
	size_t size();
	void push(T data);
	void pop();
	T front();

private:
	Node<T>* head_;
	Node<T>* last;
	size_t size_;
};


template<class T>
size_t Queue<T>::size() {
	return this->size_;
}

template<class T>
bool Queue<T>::isEmpty() {
	return (size_ <= 0);
}

template <class T>
void Queue<T>::push(T data) {
	Node<T>* newNode = new Node<T>(data);
	if (isEmpty()) {
		head_ = newNode;
		last = head_;
		this->size_++;
		return;
	}
	last->setNext(newNode);
	last = last->getNext();
	Node <T>* temp = head_;
	this->size_++;
}

template<class T>
void Queue<T>::pop(){
	if (isEmpty() || head_ == nullptr)
		return;
	Node <T>* temp = head_;
	head_ = head_->getNext();
	delete temp;
	size_--;
}

template<class T>
T Queue<T>::front(){
	if (head_ != nullptr) {
		return head_->getData();
	}
	return T();
}


