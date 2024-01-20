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
//		if (head == nullptr)
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
//		int length()
//	{
//		int len = 0;
//		if (head == nullptr)
//		{
//			return 0;
//		}
//		else
//		{
//			Node<T>* ptr = head;
//			while (ptr != nullptr)
//			{
//				len++;
//				ptr = ptr->next;
//			}
//			return len;
//		}
//
//	}
//		int Get_nth_node_from_end(int n)
//		{
//			cout << "\n Given input :  " << n;
//		int len = length();
//		int i = 1;
//		Node<T>* ptr = tail;
//		while (ptr!=nullptr)
//		{
//			if (n>len ||i>len)
//			{
//				cout << "   -----------size is greater than length ---------";
//				break;
//			}
//			if (n < 1)
//			{
//				cout << "   -----------size is smaller than length ---------";
//				break;
//			}
//			if (i==n)
//			{
//				cout << "\ndata found :  " << ptr->data;
//				break;
//			}
//			
//				i++;
//				ptr = ptr->prev;
//			
//			
//		}
//		return 0;
//	}
//};
//int main()
//{
//	ll<int> obj;
//	cout << "\ninserted node : \n";
//	obj.insert(1);
//	obj.insert(5);
//	obj.insert(43);
//	obj.insert(50);
//	obj.insert(60);
//	obj.insert(3);
//	obj.insert(3);
//	obj.insert(3);
//	obj.print();
//	obj.Get_nth_node_from_end(6);
//	obj.Get_nth_node_from_end(9);
//	obj.Get_nth_node_from_end(0);
//}