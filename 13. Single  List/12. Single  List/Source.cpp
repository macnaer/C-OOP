#include <iostream>
#include <string>

using namespace std;

template <typename T>
class NodeList {
public:
	NodeList() {
		this->size = 0;
		this->head = nullptr;
	}
	int GetSize() {
		return this->size;
	}

	void Push(T data) {
		if (head == nullptr) {
			head = new Node<T>(data);
		}
		else {
			Node<T> *current = this->head;
			while (current->NextNode != nullptr)
			{
				current = current->NextNode;
			}
			current->NextNode = new Node<T>(data);
		}
		size++;
	}

private:
	template <typename T>
	class Node {
	public:
		Node *NextNode;
		T data;

		Node(T data = T(), Node *NextNode=nullptr) {
			this->data = data;
			this->NextNode = NextNode;
		}

	};
	int size;
	Node<T> *head;
};

int main() {

	NodeList<int> list;
	list.Push(11);
	list.Push(111);
	list.Push(11111);


	cout << list.GetSize() << endl;

	system("pause");
	return 0;
}