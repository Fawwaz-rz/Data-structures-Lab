//
//#include <iostream>
//using namespace std;
//
//template <typename T>
//class Node
//{
//public:
//    T data;
//    T Nmin;
//    Node* next;
//    Node* prev;
//    Node(T item, T minVal) : data(item), Nmin(minVal), next(nullptr), prev(nullptr) {}
//    ~Node() {
//
//}
//};
//template <typename T>
//class minqueue {
//private:
// Node<T>* front;
//    Node<T>* rear;
//
//public:
//    minqueue() : front(nullptr), rear(nullptr) {}
//
//    void enqueue(T item) 
//    {
//        if (front == nullptr) 
//        {
//            front = new Node<T>(item, item);
//            rear = front;
//        }
//        else {
//            T newMin = min(item, rear->Nmin);
//            Node<T>* newNode = new Node<T>(item, newMin);
//            rear->next = newNode;
//            newNode->prev = rear;
//            rear = newNode;
//        }
//    }
//
//    void dequeue() {
//        if (front == nullptr)
//        {
//            cout << "Queue is empty" << endl;
//            return;
//        }
//        Node<T>* temp = front;
//        front = front->next;
//        if (front == nullptr) {
//            rear = nullptr;
//        }
//        else {
//            front->prev = nullptr;
//        }
//        delete temp;
//    }
//
//    T getmin() {
//        if (front == nullptr) {
//            cout << "Queue is empty." << endl;
//            return T(); 
//        }
//        return front->Nmin;
//    }
//};
//
//int main() {
//    minqueue<int> obj;
//
//    obj.enqueue(3);
//    obj.enqueue(2);
//    obj.enqueue(4);
//
//    cout << "Minimum is : " << obj.getmin() <<endl; 
//
//    obj.dequeue();
//
//    cout << "Minimum is : " << obj.getmin() << endl;
//    obj.dequeue();
//    cout << "Minimum is : " << obj.getmin() << endl;
//    obj.dequeue();
//    cout << "Minimum is : " << obj.getmin() << endl;
//}
//
