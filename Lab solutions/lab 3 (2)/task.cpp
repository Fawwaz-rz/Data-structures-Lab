//#include <iostream>
//using namespace std;
//template <typename T>
// struct Node
//{
//	T data;
//	Node* next=NULL;
//	
//	
//};
//template <typename T>
//class linkedlist
//{
//private:
//	Node<T>* tail;
//	Node<T>* head;
//public:
//	linkedlist()
//	{
//		head = nullptr;
//		tail = nullptr;
//	}
//	~linkedlist()
//	{
//		head = nullptr;
//		tail = nullptr;
//		delete tail;
//		delete head;
//	}
//	linkedlist(const linkedlist& other)
//	{
//		head = nullptr;
//		tail = nullptr;
//		
//
//		Node<T>* otherPtr = other.head;
//		while (otherPtr != nullptr)
//		{
//			insert(otherPtr->data);
//			otherPtr = otherPtr->next;
//		}
//	}
//	int length()
//	{
//		int len = 1;
//		Node<T>* temp = head;
//		while (temp != nullptr)
//		{
//			len++;
//			temp = temp->next;
//		}
//		return len;
//	}
//	void print() const
//	{
//		if (head == NULL)
//		{
//			cout << "linked list is empty" << endl;
//			return;
//		}
//		Node<T>* ptr = head;
//		while (ptr != NULL)
//		{
//			cout << ptr->data << " / ";
//			ptr = ptr->next;
//		}
//	}
//	void insert(T item)
//	{
//		Node<T>* extra = new Node<T>;
//		extra->data = item;
//		if (head == nullptr)
//		{
//			head = extra;
//			return;
//		}
//
//		Node<T>* ptr = head;
//		while (ptr->next != nullptr)
//		{
//			ptr = ptr->next;
//		}
//
//		ptr->next = extra;
//	}
//	void insertAtHead(T item)
//	{
//		Node<T>* nn = new Node<T>;
//		nn->data = item;
//		nn->next = head;
//		head = nn;
//		if (tail == nullptr)
//		{
//			tail = nn;
//		}
//	}
//	void insertAtStart(T const element)
//	{
//		Node<T>* Node_At_start = new Node<T>;
//		Node_At_start->data = element;
//		Node_At_start->next = head;
//		head = Node_At_start;
//	}
//	void insertAtEnd(T element)
//	{
//		int index = length() - 1;
//		Node<T>* Nodeatend = new Node<T>;
//		Nodeatend->data = element;
//		int count = 0;
//		Node<T>* temp = head;
//		while (temp != nullptr && count < index)
//		{
//			if (count == index - 1)
//			{
//				if (temp->next != nullptr)
//				{
//					Nodeatend->next = temp->next;
//				}
//				temp->next = Nodeatend;
//			}
//			count++;
//			temp = temp->next;
//		}
//	}
//	bool search(T element)
//	{
//		if (head==NULL)
//		{
//			cout << "element is not found ";
//			return false;
//		}
//		Node<T>* obj = head;
//		while (obj !=NULL)
//		{
//			if (obj->data == element)
//			{
//				cout << "element is found ";
//				return true;
//			}
//			obj = obj->next;
//		}
//	}
//	bool isEmpty() const
//	{
//		if (head==NULL)
//		{
//			cout << "  \nlist is empty \n ";
//			return true;
//		}
//		else
//		{
//			cout << "  \nlist is not empty \n ";
//			return false;
//		}
//	}
//	bool insertBefore(T const v1, T const v2)
//	{
//		Node<T>* current = head;
//		Node<T>* prev = nullptr;
//
//		while (current != nullptr)
//		{
//			if (current->data == v2)
//			{
//				Node<T>* newNode = new Node<T>;
//				newNode->data = v1;
//				if (prev == nullptr)
//				{
//					newNode->next = head;
//					head = newNode;
//				}
//				else
//				{
//					prev->next = newNode;
//					newNode->next = current;
//				}
//
//				return true;
//			}
//			prev = current;
//			current = current->next;
//		}
//		return false;
//	}
//	void deleteAll(T const value)
//	{
//		Node<T>* s = head;
//		Node<T>* prev = nullptr;
//		while (s != nullptr)
//		{
//			if (s->data == value)
//			{if (prev == nullptr)
//				{
//					head = s->next;
//					delete s;
//					s = head;
//				}
//				else
//				{
//					prev->next = s->next;
//					delete s;
//					s = prev->next;
//				}
//			}
//			else
//			{
//				prev = s;
//				s = s->next;
//			}
//		}
//	}
//	void DeleteAtStart()
//	{
//		if (head==NULL)
//		{
//			cout << " list is already empty";
//		}
//		else
//		{
//			Node<T>* deletenode = head;
//			head = head->next;
//			deletenode->data = NULL;
//			deletenode->next = NULL;
//			delete deletenode->next;	
//		}
//	}
//	void ReverseLinkList()
//	{
//		if (head == NULL||head->next==NULL)
//		{
//			cout << "linked list is empty" << endl;
//			return;
//		}
//		Node<T>* ptr = head;
//		Node<T>* prev = nullptr;
//		Node<T>* temp = NULL;
//		while (ptr != NULL)
//		{
//			temp = ptr->next;
//			ptr->next = prev;
//			prev = ptr;
//			ptr = temp;
//		}
//		head = prev;
//	}
//	bool isPalindrome()
//	{
//		linkedlist<T> tempList;
//		Node<T>* start = head;
//		while (start != nullptr)
//		{
//			tempList.insertAtStart(start->data);
//			start = start->next;
//		}
//		start = head;
//		Node<T>* prev = tempList.head;
//		while (start != nullptr && prev != nullptr)
//		{
//			if (start->data != prev->data)
//			{
//				return false;
//			}
//			start = start->next;
//			prev = prev->next;
//		}
//		start == nullptr;
//		prev == nullptr;
//		return true;
//	}
//	void ReorderLinkList()
//	{
//		if (head == nullptr || head->next == nullptr)
//		{
//			return; 
//		}
//		Node<T>* slow = head;
//		Node<T>* fast = head;
//		while (fast->next != nullptr && fast->next->next != nullptr)
//		{
//			slow = slow->next;
//			fast = fast->next->next;
//		}
//		Node<T>* prev = nullptr;
//		Node<T>* current = slow->next;
//		slow->next = nullptr; 
//
//		while (current != nullptr)
//		{
//			Node<T>* nextNode = current->next;
//			current->next = prev;
//			prev = current;
//			current = nextNode;
//		}
//		Node<T>* firstHalf = head;
//		Node<T>* secondHalf = prev;
//
//		while (secondHalf != nullptr)
//		{
//			Node<T>* nextFirst = firstHalf->next;
//			Node<T>* nextSecond = secondHalf->next;
//
//			firstHalf->next = secondHalf;
//			secondHalf->next = nextFirst;
//
//			firstHalf = nextFirst;
//			secondHalf = nextSecond;
//		}
//	}
//	void SwapNodes(int n)
//	{
//		int len = length();
//		if (n <= 0 || n > len)
//		{
//			cout << "swap is not possible" << endl;
//			return;
//		}
//		Node<T>* right = head;
//		Node<T>* prevright = nullptr;
//		for (int i = 1; i < n; i++)
//		{
//			prevright = right;
//			right = right->next;
//		}
//		Node<T>* left = head;
//		Node<T>* leftprev = nullptr;
//		for (int i = 1; i < len - n; i++)
//		{
//			leftprev = left;
//			left = left->next;
//		}
//
//		if (prevright)
//		{
//			prevright->next = left;
//		}
//		else
//		{
//			head = left;
//		}
//
//		if (leftprev)
//		{
//			leftprev->next = right;
//		}
//		else
//		{
//			head = right;
//		}
//
//		Node<T>* temp = right->next;
//		right->next = left->next;
//		left->next = temp;
//	}
//	void insertAtTail(T item)
//	{
//		Node<T>* nodetoinsert = new Node<T>;
//		nodetoinsert->data = item;
//		nodetoinsert->next = nullptr;
//		if (head == nullptr)
//		{
//			head = nodetoinsert;
//			tail = nodetoinsert;
//		}
//		else
//		{
//			Node<T>* temp = head;
//			while (temp->next != nullptr)
//			{
//				temp = temp->next;
//			}
//			temp->next = nodetoinsert;
//			tail = nodetoinsert;
//		}
//	}
//};
//int main()
//{
//	linkedlist<int> obj;
//	int num=0,num2=0;
//	obj.insert(1);
//	obj.insert(2);
//	obj.insert(3);
//	obj.insert(4);
//	obj.insert(5);
//	obj.insert(6);
//	obj.insert(7);
//	obj.insert(8);
//	obj.insert(9);
//	cout << "the list is: ";
//	obj.print(); 
//	cout << "\nenter element to search :  ";
//	cin >> num;
//	if (!obj.search(num))
//	{
//		cout << "element is not found\n";
//	}
//	cout << "\nshowing list is empty or not :  ";
//	obj.isEmpty();
//	cout << "Showing reordered List : ";
//	obj.ReorderLinkList();
//	obj.print();
//	cout << "\nReverse of linked list : ";
//	obj.ReverseLinkList();
//	cout << endl;
//	obj.print();
//	cout << endl;
//	if (obj.isPalindrome())
//	{
//		cout << "this is a palindrome ";
//	}
//	else {
//		cout << "this is not a palindrome ";
//	}
//	cout << "\nplease enter any position to swap that numbers : ";
//	cin >> num;
//	obj.SwapNodes(num);
//	obj.print();
//	cout << endl;
//	cout << "insert element at start  :  ";
//	cin >> num;
//	obj.insertAtStart(num);
//	cout << "insert element at end  :  ";
//	cin >> num;
//	obj.insertAtEnd(num);
//	cout << "Showing result after insertion :  ";
//	obj.print();
//	cout << "\nwant to delete something please enter value : ";
//	cin >> num;
//	obj.deleteAll(num);
//	cout << "Showing list after deletion : ";
//	obj.print();
//	cout << "\nDeleting at start : ";
//	obj.DeleteAtStart();
//	obj.print();
//	cout << "\nwant to insert something at tail please enter value : ";
//	cin >> num;
//	obj.insertAtTail(num);
//	cout << "Showing result after insertion :  ";
//	obj.print();
//	cout << "\nwant to insert something at any location please enter number and which number's before : ";
//	cin >> num;
//	cin >> num2;
//	obj.insertBefore(num,num2);
//	cout << "Showing result after insertion :  ";
//	obj.print();
//}