//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node* next;
//    Node(int i) : data(i), next(nullptr) {}
//    ~Node() {  }
//};
//
//class QS {
//private:
//    Node* s1_front;
//    Node* s1_rear; 
//    Node* s2_front;
//    Node* s2_rear; 
//
//public:
//    QS() : s1_front(nullptr), s1_rear(nullptr), s2_front(nullptr), s2_rear(nullptr) {}
//
//    void enqueue(int item)
//    {
//        Node* newNode = new Node(item);
//        if (s1_rear == nullptr) 
//        {
//            s1_front =  newNode;
//            s1_rear = newNode;
//        }
//        else 
//        {
//            s1_rear->next = newNode;
//            s1_rear = newNode;
//        }
//    }
//
//    int dequeue() {
//        if (isEmpty())
//        {
//            cout << " empty" << endl;
//            return -1;
//        }
//
//        if (s2_front == nullptr) 
//        {
//            
//            while (s1_front != nullptr) {
//                Node* temp = s1_front;
//                s1_front = s1_front->next;
//                temp->next = s2_front;
//                s2_front = temp;
//                if (s2_rear == nullptr) {
//                    s2_rear = temp;
//                }
//            }
//        }
//
//        int fval = s2_front->data;
//        Node* temp = s2_front;
//        s2_front = s2_front->next;
//        delete temp;
//        return fval;
//    }
//
//    bool isEmpty() {
//        if (s1_front == nullptr && s2_front == nullptr)
//        {
//            return true;
//        }
//        else
//        {
//            return false;
//        }
//      
//    }
//};
//
//int main() {
//    QS obj;
//
//    obj.enqueue(7);
//    obj.enqueue(8);
//    obj.enqueue(9);
//    cout << "these are deleted : ";
//    cout << obj.dequeue() << endl;
//    cout << obj.dequeue() << endl;
//    
//    if (obj.isEmpty())
//    {
//        cout << "empty"<<endl;
//    }
//    else
//    {
//        cout << "not empty"<<endl;
//    }
//
//    cout << obj.dequeue() << endl; 
//    
//    if (obj.isEmpty())
//    {
//        cout << "empty"<<endl;
//    }
//    else
//    {
//        cout << "not empty"<<endl;
//    }
//    return 0;
//}
