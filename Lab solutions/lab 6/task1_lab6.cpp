//#include<iostream>
//using namespace std;
//
//template<typename T>
//class Node
//{
//public:
//    T data;
//    Node<T>* next;
//    Node(T da) : data(da), next(nullptr) {}
//    ~Node()
//    {
//        //delete next;
//    }
//};
//
//template<typename T>
//class ll 
//{
//public:
//    Node<T>* head;
//    ll() : head(nullptr) {}
//    ~ll()
//    {
//        delete head;
//    }
//    void insert(T data) 
//    {
//        head = insertRecursive(head, data);
//    }
//    Node<T>* insertRecursive(Node<T>* current, T data)
//    {
//        if (current == nullptr) {
//            return new Node<T>(data);
//        }
//        else {
//            current->next = insertRecursive(current->next, data);
//            return current;
//        }
//    }
//
//    void highGPARecursive(Node<T>* current) {
//        if (current == nullptr) {
//            return;
//        }
//        if (current->data > 3.5) {
//            cout << "High GPA Student: " << current->data << endl;
//        }
//        highGPARecursive(current->next);
//    }
//
//    Node<T>* dellowGPARecursive(Node<T>* current) 
//    {
//        if (current == nullptr) 
//        {
//            return nullptr;
//        }
//        if (current->data >= 2.0) 
//        {
//            current->next = dellowGPARecursive(current->next);
//            return current;
//        }
//        else {
//            Node<T>* nextNode = current->next;
//            delete current;
//            return dellowGPARecursive(nextNode);
//        }
//    }
//
//    void displayrecur(Node<T>* temp) 
//    {
//        if (temp == nullptr) {
//            return;
//        }
//        cout << "students GPA is  : " << temp->data << endl;
//        displayrecur(temp->next);
//    }
//};
//
//int main() {
//    ll<float> obj;
//    obj.insert(3.5);
//    obj.insert(2.1);
//    obj.insert(4.0);
//    obj.insert(1.9);
//    obj.insert(2.9);
//    obj.insert(2.5);
//    obj.insert(1.3);
//    obj.insert(1.7);
//
//    cout << "Student List:" << endl;
//    obj.displayrecur(obj.head);
//
//    cout << " Students with high GPA :" << endl;
//  
//    obj.highGPARecursive(obj.head);
//    cout << "Deleting low CGPA Students : " << endl;
//    
//    obj.dellowGPARecursive(obj.head);
//    cout << "Student List:" << endl;
//    obj.displayrecur(obj.head);
//
//    return 0;
//}