//#include<iostream>
//using namespace std;
//template <typename T>
//class Node
//{
//public:
//	int data;
//	Node<T>* next;
//	Node<T>* prev;
//	Node()
//	{
//		data = 0;
//		next = nullptr;
//		prev = nullptr;
//	}
//	~Node()
//	{
//		/*delete next;
//		delete prev;*/
//	}
//};
//template <typename T>
//class ll
//{
//public:
//	Node<T>* head;
//	Node<T>* tail;
//	ll()
//	{
//		head = nullptr;
//		tail = nullptr;
//	}
//	~ll()
//	{
//		Node<T>* current = head;
//		while (current != nullptr)
//		{
//			Node<T>* next = current->next;
//			delete current;
//			current = next;
//		}
//		head = nullptr;
//		tail = nullptr;
//	}
//	void insertathead(T value)
//	{
//		Node<T>* extra = new Node<T>;
//		extra->data = value;
//		extra->next = tail;
//		extra->prev = nullptr;
//		if (head==nullptr)
//		{
//			head = extra;
//			head->next = nullptr;
//			head->prev = nullptr;
//			tail = head;
//			cout << "new node is added at head ";
//			return;
//		}
//		else
//		{
//			extra->prev = head;
//			head->next = extra;
//			head = extra;
//		}
//	}
//	void insertattail(T value)
//	{
//		Node<T>* extra = new Node<T>;
//		extra->data = value;
//		extra->next = nullptr;
//		extra->prev = nullptr;
//
//		if (tail == nullptr)
//		{
//			head = extra;
//			tail = extra;
//		}
//		else
//		{
//			extra->prev = tail;
//			tail->next = extra;
//			tail = extra;
//		}
//		cout << "\nnode is added at tail\n";
//	}
//	void print()
//	{
//		if (head == nullptr)
//		{
//			cout << "no ll ";
//			return;
//		}
//		Node<T>* ptr = head;
//		while (ptr!=nullptr)
//		{
//			cout << " -> " << ptr->data ;
//			ptr = ptr->next;
//		}
//	}
//	void deleteatstart()
//	{
//		Node<T>* ptr = head;
//		if (head==nullptr)
//		{
//			delete head;
//			head = NULL;
//			delete tail;
//			tail = NULL;
//		}
//		else
//		{
//			head = head->next;
//			head->prev = nullptr;
//			ptr->next = NULL;
//			ptr->prev = nullptr;
//			delete ptr;
//			ptr = NULL;
//		}
//		cout << "\nstart is deleted\n";
//	}
//	void deleteatend()
//	{
//		Node<T>* ptr = tail;
//		if (tail == nullptr) 
//		{
//			cout << "no ll" << endl;
//			return;
//		}
//		else if (head == tail) 
//		{
//			delete tail;
//			tail = nullptr;
//			head = nullptr;
//			
//		}
//		else 
//		{
//			tail = tail->prev;
//			tail->next = nullptr;
//			delete ptr;
//		}
//		cout << "\nnode is deleted at tail\n";
//	}
//};
//int main()
//{
//	ll<int> obj;
//	obj.insertathead(1);
//	cout << endl;
//	obj.print();
//	obj.insertattail(2);
//	obj.print();
//	obj.deleteatstart();
//	obj.print();
//	obj.deleteatend();
//	obj.print();
//}