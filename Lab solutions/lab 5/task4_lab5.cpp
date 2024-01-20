//#include<iostream>
//#include<string>
//using namespace std;
//
//template<typename T>
//class Node
//{
//public:
//    T customer_id;
//    T transaction_type;
//    T amount;
//    T balance;
//    Node<T>* next;
//    Node<T>* prev;
//
//    Node()
//    {
//        next = nullptr;
//        prev = nullptr;
//    }
//};
//
//template<typename T>
//class Queue;
//
//template<typename T>
//class Stack;
//
//template<typename T>
//class Program
//{
//public:
//    Program() {}
//    ~Program() {}
//
//    void enqueue_customer(Queue<T>& queue, T id, T trans, T amo, T bal);
//
//    void teller_serve_customer(Queue<T>& queue, Stack<T>& teller_stack);
//
//    void check_balance(Stack<T>& teller_stack, T id, T trans);
//
//    void get_transaction_history(Stack<T>& teller_stack);
//};
//
//template<typename T>
//class Queue
//{
//    Node<T>* front;
//    Node<T>* rear;
//
//public:
//    Queue()
//    {
//        front = nullptr;
//        rear = nullptr;
//    }
//    ~Queue()
//    {
//        while (front != nullptr)
//        {
//            Node<T>* temp = front;
//            front = front->next;
//            delete temp;
//        }
//    }
//
//    void input(T id, T amo, T bal, T trans)
//    {
//        Program<T> obj;
//        obj.enqueue_customer(*this, id, trans, amo, bal);
//    }
//
//    friend class Program<T>;
//};
//
//template<typename T>
//class Stack
//{
//    Node<T>* top;
//
//public:
//    Stack()
//    {
//        top = nullptr;
//    }
//    ~Stack()
//    {
//        while (top != nullptr)
//        {
//            Node<T>* temp = top;
//            top = top->prev;
//            delete temp;
//        }
//    }
//
//    friend class Program<T>;
//};
//
//template<typename T>
//void Program<T>::enqueue_customer(Queue<T>& queue, T id, T trans, T amo, T bal)
//{
//    Node<T>* ptr = new Node<T>;
//    ptr->customer_id = id;
//    ptr->amount = amo;
//    ptr->balance = bal;
//    ptr->transaction_type = trans;
//    if (queue.front == nullptr && queue.rear == nullptr)
//    {
//        queue.front = ptr;
//        queue.rear = ptr;
//        cout << "\nCustomer added\n";
//    }
//    else
//    {
//        queue.rear->next = ptr;
//        ptr->prev = queue.rear;
//        queue.rear = ptr;
//        cout << "\nCustomer added\n";
//    }
//}
//
//template<typename T>
//void Program<T>::teller_serve_customer(Queue<T>& queue, Stack<T>& teller_stack)
//{
//    Node<T>* ptrq = queue.front;
//
//    if (ptrq == nullptr)
//    {
//        cout << "Nothing to serve.\n";
//        return;
//    }
//
//    while (ptrq != nullptr)
//    {
//        Node<T>* ptrt = new Node<T>;
//        ptrt->transaction_type = ptrq->transaction_type;
//        ptrt->customer_id = ptrq->customer_id;
//        ptrt->amount = ptrq->amount;
//
//        if (ptrq->transaction_type == 3)
//        {
//            ptrt->balance = ptrq->balance;
//        }
//        else if (ptrq->transaction_type == 2)
//        {
//            ptrt->balance = ptrq->amount + ptrq->balance;
//        }
//        else if (ptrq->transaction_type == 1)
//        {
//            ptrt->balance = ptrq->balance - ptrq->amount;
//        }
//
//        if (teller_stack.top == nullptr)
//        {
//            teller_stack.top = ptrt;
//            ptrt->next = nullptr;
//            ptrt->prev = nullptr;
//        }
//        else
//        {
//            ptrt->next = teller_stack.top;
//            ptrt->next->prev = ptrt;
//            ptrt->prev = nullptr;
//            teller_stack.top = ptrt;
//        }
//
//        Node<T>* temp = ptrq;
//        ptrq = ptrq->next;
//        queue.front = ptrq;
//        delete temp;
//    }
//}
//
//template<typename T>
//void Program<T>::check_balance(Stack<T>& teller_stack, T id, T trans)
//{
//    Node<T>* ptrt = teller_stack.top;
//
//    while (ptrt != nullptr)
//    {
//        if (ptrt->customer_id == id && ptrt->transaction_type == trans)
//        {
//            cout << "\nAmount: " << ptrt->amount << endl;
//            cout << "Balance: " << ptrt->balance << endl;
//            cout << "Customer ID: " << ptrt->customer_id << endl;
//            cout << "Transaction Type: " << ptrt->transaction_type << endl;
//            return;
//        }
//        ptrt = ptrt->next;
//    }
//
//    cout << "\nNot found\n";
//}
//
//template<typename T>
//void Program<T>::get_transaction_history(Stack<T>& teller_stack)
//{
//    int trans = 0;
//    int id = 0;
//    Node<T>* p = teller_stack.top;
//
//    while (p != nullptr)
//    {
//        cout << "\nAmount: " << p->amount << endl;
//        cout << "Balance: " << p->balance << endl;
//        cout << "Customer ID: " << p->customer_id << endl;
//        cout << "Transaction Type: " << p->transaction_type << endl;
//
//        if (p->next == nullptr)
//        {
//            break;
//        }
//        p = p->next;
//    }
//
//    cout << "\nTransaction history printed\n";
//
//    do
//    {
//        cout << "Enter customer ID to check balance (or -1 to exit): ";
//        cin >> id;
//        if (id != -1)
//        {
//            cout << "Enter transaction type (1, 2, or 3): ";
//            cin >> trans;
//            check_balance(teller_stack, id, trans);
//        }
//    } while (id != -1);
//}
//
//int main()
//{
//    Queue<int> objq;
//    Stack<int> objt;
//
//    int id = 0, trans = 0, amo = 0, bal = 0, num = 0;
//
//    Program<int> objp;
//
//    do
//    {
//        cout << "Please enter customer ID: ";
//        cin >> id;
//        if (id != -1)
//        {
//            cout << "\nPlease enter balance: ";
//            cin >> bal;
//            cout << "\nPlease enter amount: ";
//            cin >> amo;
//            cout << "\n1. Withdraw\n2. Deposit\n3. Check balance\nPlease enter transaction Type: ";
//            cin >> trans;
//            objq.input(id, amo, bal, trans);
//        }
//        cout << "\n-1. Terminate\nAny Num to input\nEnter choice: ";
//        cin >> num;
//    } while (num != -1);
//
//    objp.teller_serve_customer(objq, objt);
//    objp.get_transaction_history(objt);
//
//    return 0;
//}
