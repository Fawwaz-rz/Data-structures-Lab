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
//			{
//				if (head == nullptr)
//				{
//					insertathead(value);
//				}
//				else
//				{
//					Node<T>* extra = new Node<T>;
//					extra->data = value;
//					extra->next = nullptr;
//					extra->prev = nullptr;
//					Node<T>* ptr = head;
//		
//					while (ptr->next != nullptr)
//					{
//						ptr = ptr->next;
//					}
//		
//					extra->prev = ptr;
//					ptr->next = extra;
//					tail = extra;
//				}
//			}
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
//	void Swapnodes(T value)
//	{
//		int len = length();
//		int check= length()/2-1;
//
//		if (head == nullptr)
//		{
//			cout << "nothing ll ";
//			return;
//		}
//		else
//		{
//			if (value>check)
//			{
//				cout << "\nvalue is greater  to swap";
//			}
//			else if(value<1)
//			{
//				cout << "\nvalue is less to swap";
//			}
//			else
//			{
//				if (len >= 2)
//				{
//					
//						int i = 1;
//						Node<T>* ptr = head;
//						Node<T>* temp = tail;
//						Node<T>* sprev = nullptr;
//						Node<T>* eprev = nullptr;
//						Node<T>* extra = nullptr;
//						if (value == 1)
//						{
//							sprev = ptr->next;
//							eprev = temp->prev;
//							ptr->next = nullptr;
//							eprev->next = ptr;
//							ptr->prev = eprev;
//							tail = ptr;
//							temp->next = sprev;
//							temp->prev = nullptr;
//							sprev->prev = temp;
//							head = temp;
//
//						}
//						else {
//							while (ptr != nullptr)
//							{
//								if (i == value)
//								{
//									cout << "   ----entered---  ";
//
//									sprev = ptr->prev;
//									eprev = temp->prev;
//									extra = temp->next;
//									temp->next = sprev->next->next;
//									ptr->next = extra;
//									ptr->prev = eprev;
//									temp->prev = sprev;
//
//									ptr->next->prev = ptr;
//									eprev->next = ptr;
//									temp->next->prev = temp;
//									sprev->next = temp;
//
//									break;
//								}
//								else
//								{
//									i++;
//									ptr = ptr->next;
//									temp = temp->prev;
//								}
//							}
//						}
//				
//					
//					
//					
//				}
//				else
//				{
//					cout << "\nswap is not possible bcz of only one data ";
//				}
//			}
//		}
//	}
//	void concat(const ll<T>& l1, const ll<T>& l2) {
//		ll<int> obj;
//		Node<T>* temp = l1.head;
//		while (temp != nullptr) {
//			obj.insert(temp->data);
//			insert(temp->data);
//			temp = temp->next;
//		}
//
//		temp = l2.head;
//		while (temp != nullptr) {
//			obj.insert(temp->data);
//			insert(temp->data);
//			temp = temp->next;
//		}
//		print();
//		cout << endl;
//		obj.print();
//	}
//};
//int main()
//{
//	ll<int> obj,list,temp;
//	cout << "\ninserted node : \n";
//	obj.insert(1);
//	obj.insert(2);
//	obj.insert(3);
//	obj.insert(4);
//	obj.insert(5);
//	obj.insert(6);
//	obj.insert(7);
//	obj.insert(8);
//	obj.print();
//	cout << endl;
//	list.insert(10);
//	list.insert(20);
//	list.insert(30);
//	list.insert(40);
//	list.insert(50);
//	list.insert(60);
//	list.insert(70);
//	list.insert(80);
//	list.print();
//	temp.concat(list, obj);
//}