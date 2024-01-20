//#include<iostream>
//using namespace std;
//template <typename T>
//class Node
//{
//public:
//	T data;
//	Node<T>* next;
//	Node() {
//		next = NULL;
//
//	}
//	~Node(){}
//};
//template <typename T>
//class Queue
//{
//public:
//	T fitem;
//	Node<T>* front;
//	Node<T>* rear;
//	Queue(){
//		
//	}
//	~Queue()
//	{
//
//	}
//	int size()
//	{
//		int s=0;
//		Node<T>* ptr = front;
//		if (isempty())
//		{
//			return 0;
//		}
//		else
//		{
//			while (ptr != nullptr)
//			{
//				s++;
//				ptr = ptr->next;
//			}
//			return s;
//		}
//		
//	}
//	void enqueue(T item)
//	{
//		Node<T>* ptr = new Node<T>; 
//
//		ptr->data = item; 
//
//		if (front == nullptr && rear == nullptr)
//		{
//			front = ptr;
//			rear = ptr;
//			cout << "Item added at first";
//		}
//		else
//		{
//			rear->next = ptr;
//			rear = ptr;
//		}
//		fitem++;
//	}
//	void dequeu()
//	{
//		Node<T>* ptr = front;
//		if (front == nullptr && rear == nullptr)
//		{
//			front = nullptr;
//			rear = nullptr;
//		}
//		else
//		{
//			ptr = front;
//			front = front->next;
//			delete ptr;
//			ptr = nullptr;
//		}
//	}
//	void display()
//	{
//		Node<T>* ptr = front;
//		while (ptr!=nullptr)
//		{
//			cout << ptr->data << " -> ";
//			ptr = ptr->next;
//		}
//	}
//	bool isfull()
//	{
//		if ( fitem ==size())
//		{
//			cout << "full\n";
//			return true;
//		}
//		else
//		{
//			cout << "not full\n";
//			return false;
//		}
//	}
//	bool isempty()
//	{
//		if (front==nullptr)
//		{
//			cout << "empty\n";
//			return true;
//		}
//		else
//		{
//			cout << "not empty\n";
//			return false;
//		}
//	}
//	int fronte()
//	{
//		return front->data;
//	}
//	int reare()
//	{
//		return rear->data;
//	}
//};
//int main()
//{
//	Queue<int> obj;
//	obj.enqueue(2);
//	obj.enqueue(3);
//	obj.isfull();
//	obj.isempty();
//	obj.display();
//	obj.dequeu();
//	cout << endl;
//	obj.display();
//	obj.dequeu();
//	obj.display();
//	cout << endl;
//	obj.isempty();
//	obj.isfull();
//}
