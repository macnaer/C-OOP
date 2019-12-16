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

	~NodeList() {
		cout << "NodeList destructor => " << endl;
		DeleteFirst();
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

	void Insert(T data, const int index) {

		if (index == 0) {
			Pop(data);
		}
		else {
			Container<T> *prev = this->head;
			for (int i = 0; i < index -1; i++) {
				prev = prev->NextNode;
			}
			Container<T> *newContainer = new Container<T>(data, prev->NextNode);
			prev->NextNode = newContainer;
			size++;
		}
		
	}

	void Pop(T data) {
		head = new Container<T>(data, head);
		size++;
	}

	void RemoveByIndex(const int index) {
		if (index == 0) {
			DeleteFirst();
		}
		else {
			Container<T> *prev = this->head;
			for (int i = 0; i < index -1; i++) {
				prev = prev->NextNode;
			}

			Container<T> *toDel = prev->NextNode;
			prev->NextNode = toDel->NextNode;
			delete toDel;
			size--;
		}


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

	void DeleteFirst() {
		Container<T> *temp = head;
		head = head->NextNode;
		delete temp;
		size--;
	}

	void ClearList() {
		while (size)
		{
			DeleteFirst();
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

	cout << "List size =====> " << list.GetSize() << endl;
	list.DeleteFirst();
	cout << "List size =====> " << list.GetSize() << endl;
	cout << "Testing Pop =====>"  << endl;
	list.Pop(22);
	list.Pop(123);
	list.Pop(231);
	cout << "Before insert " << endl;
	list.Insert(1001, 1);
	cout << list[1] << endl;
	cout << "After insert ============================" << endl;

	for (int i = 0; i < list.GetSize(); i++) {
		cout << "Elem[" << i << "] = " << list[i] << endl;
	}
	cout << "List size =====> " << list.GetSize() << endl;

	cout << "Remove by index #########################" << endl;
	list.RemoveByIndex(5);
	cout << list[1] << endl;
	cout << "Remove by index " << endl;

	for (int i = 0; i < list.GetSize(); i++) {
		cout << "Elem[" << i << "] = " << list[i] << endl;
	}
	cout << "List size =====> " << list.GetSize() << endl;
	/*cout << "Clear list: " << endl;*/
	/*list.ClearList();
	cout << "List size =====> " << list.GetSize() << endl;*/


	system("pause");
	return 0;
}