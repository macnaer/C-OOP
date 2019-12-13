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
			head = new Container<T>(data);
		}
		else {
			Container<T> *current = this->head;
			while (current->NextNode != nullptr)
			{
				current = current->NextNode;
			}
			current->NextNode = new Container<T>(data);
		}
		size++;
	}

	T& operator[](const int index) {
		int counter = 0;
		Container<T> *current = this->head;

		while (current != nullptr) {
			if (counter == index) {
				return current->data;
			}
			current = current->NextNode;
			counter++;
		}
	}

private:
	template <typename T>
	class Container {
	public:
		Container *NextNode;
		T data;

		Container(T data = T(), Container *NextNode=nullptr) {
			this->data = data;
			this->NextNode = NextNode;
		}

	};
	int size;
	Container<T> *head;
};

int main() {

	NodeList<int> list;
	int containersCount = 0;
	cout << "How many number do you want to use? " << endl;
	cin >> containersCount;
	cout << "==========================================" << endl;

	for (int i = 0; i < containersCount; i++) {
		int choice = 0;
		cout << "Enter " << i << " element: " << endl;
		cin >> choice;
		list.Push(choice);
	}

	for (int i = 0; i < list.GetSize(); i++) {
		cout << "Elem[" << i << "] = " << list[i] << endl;
	}

	system("pause");
	return 0;
}