#pragma once

#pragma once

template <class T>
class Node {
public:
	Node() :data(0), next(nullptr) {}
	Node(T data) :data(data), next(nullptr) {}
	Node(const Node& n) : data(n.getData()), next(n.getNext()) {}


	T& getData() { return this->data; }
	Node<T>* getNext() const { return this->next; }

	void setNext(Node* next) { this->next = next; }
	void setData(T data) { this->data = data; }

private:
	T data;
	Node<T>* next;
};
