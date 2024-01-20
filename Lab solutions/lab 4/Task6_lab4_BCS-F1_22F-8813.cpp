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
//		/*Node<T>* ptr = head;
//		while (ptr != nullptr)
//		{
//			Node<T>* next = ptr->next;
//			delete ptr;
//			ptr = next;
//		}
//		head = nullptr;
//		tail = nullptr;*/
//	}
//	void insertathead(T value)
//	{
//		Node<T>* extra = new Node<T>;
//		extra->data = value;
//		extra->next = tail;
//		extra->prev = nullptr;
//		if (head == nullptr)
//		{
//			head = extra;
//			head->next = nullptr;
//			head->prev = nullptr;
//			tail = head;
//			return;
//		}
//		else
//		{
//			extra->prev = head;
//			head->next = extra;
//			head = extra;
//		}
//	}
//	void insert(T value)
//	{
//		if (head == nullptr)
//		{
//			insertathead(value);
//		}
//		else
//		{
//			Node<T>* extra = new Node<T>;
//			extra->data = value;
//			extra->next = nullptr;
//			extra->prev = nullptr;
//			Node<T>* ptr = head;
//
//			while (ptr->next != nullptr)
//			{
//				ptr = ptr->next;
//			}
//
//			extra->prev = ptr;
//			ptr->next = extra;
//			tail = extra;
//		}
//	}
//	int length()
//			{
//				int len = 0;
//				if (head == nullptr)
//				{
//					return 0;
//				}
//				else
//				{
//					Node<T>* ptr = head;
//					while (ptr != nullptr)
//					{
//						len++;
//						ptr = ptr->next;
//					}
//					return len;
//				}
//		
//			}
//	void foo(int n) {
//		if (head == nullptr )
//		{
//			cout << "nothing ll" << endl;
//			return;
//		}
//
//		ll<int> low;
//		ll<int> high;
//
//		Node<T>* ptr = head;
//
//		while (ptr != nullptr) 
//		{
//			Node<T>* next = ptr->next;
//
//			if (ptr->data <n)
//			{
//				low.insert(ptr->data);
//			}
//			else if(ptr->data>=n)
//			{
//				high.insert(ptr->data);
//			}
//
//			ptr = next;
//		}
//		cout << endl;
//		high.print();
//		cout << endl;
//		low.print();
//		cout << endl;
//		if (low.head != nullptr) 
//		{
//			head = low.head;
//			tail = low.tail;
//			tail->next = high.head;
//			if (high.head != nullptr) 
//			{
//				high.head->prev = tail;
//			}
//		}
//		else {
//			head = high.head;
//			tail = high.tail;
//		}
//
//	}
//	void print()
//	{
//		if (head == nullptr)
//		{
//			cout << "no ll ";
//			return;
//		}
//		Node<T>* ptr = head;
//		while (ptr != nullptr)
//		{
//			cout << " -> " << ptr->data;
//			ptr = ptr->next;
//		}
//	}
//	
//
//};
//int main()
//{
//	ll<int> obj;
//	cout << "\ninserted node : \n";
//	obj.insert(3);
//	obj.insert(5);
//	obj.insert(10);
//	obj.insert(2);
//	obj.insert(8);
//	obj.insert(2);
//	obj.insert(1);
//	obj.print();
//	cout << "\nprinting after Partition and sorting: ";
//	obj.foo(5);
//	obj.print();
//	
//}