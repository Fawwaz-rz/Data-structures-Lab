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
//	int length()
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
//			while (ptr != nullptr)
//			{
//				if (ptr->data < value)
//				{
//					if (ptr->next == nullptr)
//					{
//						extra->prev = ptr;
//						ptr->next = extra;
//						tail = extra;
//						return;
//					}
//					ptr = ptr->next;
//				}
//				else
//				{
//					extra->prev = ptr->prev;
//					extra->next = ptr;
//
//					if (ptr->prev != nullptr)
//					{
//						ptr->prev->next = extra;
//					}
//					else
//					{
//						head = extra;
//					}
//
//					ptr->prev = extra;
//					return;
//				}
//			}
//		}
//	}
//		bool checkSort()
//		{
//			bool check = true;
//			int len = length();
//			Node<T>* ptr = head;
//			if (head == nullptr)
//			{
//				return true;
//			}
//			else
//			{
//				
//				T temp = NULL;
//				while (ptr->next != nullptr)
//				{
//					if (ptr->data > ptr->next->data)
//					{
//						check = false;
//						temp = ptr->data;
//						ptr->next->data = ptr->data;
//						ptr->data = temp;
//
//						if (ptr->prev != nullptr)
//						{
//							ptr = ptr->prev;
//						}
//						else
//						{
//							ptr = ptr->next;
//						}
//					}
//					else
//					{
//						ptr = ptr->next;
//					}
//				}
//			}
//			return check;
//		}
//			void print()
//		{
//			if (head == nullptr)
//			{
//				cout << "no ll ";
//				return;
//			}
//			Node<T>* ptr = head;
//			while (ptr!=nullptr)
//			{
//				cout << " -> " << ptr->data ;
//				ptr = ptr->next;
//			}
//		}
//};
//int main()
//{
//	ll<int> obj;
//	obj.insert(1);
//	obj.insert(5);
//	obj.insert(43);
//	obj.insert(50);
//	obj.insert(60);
//	obj.insert(3);
//	obj.print();
//}