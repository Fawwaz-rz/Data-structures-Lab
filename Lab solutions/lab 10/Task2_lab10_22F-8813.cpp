//
//#include<iostream>
//using namespace std;
//template <class T>
//class Node {
//public:
//    T data;
//    Node<T>* left;
//    Node<T>* right;
//
//    Node(T d = 0) : data(d), left(nullptr), right(nullptr) {}
//};
//
//template <class T>
//class BST
//{
//private:
//    Node<T>* root;
//
//public:
//    BST() : root(nullptr) {}
//
//    BST(const BST& obj)
//    {
//        root = deepCopy(obj.root);
//    }
//
//    Node<T>* deepCopy(Node<T>* node) {
//        if (node == nullptr)
//        {
//            return nullptr;
//        }
//        Node<T>* newNode = new Node<T>(node->data);
//        newNode->left = deepCopy(node->left);
//        newNode->right = deepCopy(node->right);
//        return newNode;
//    }
//
//    void insert(T n)
//    {
//        insert_recursive(n, root);
//    }
//
//    void insert_recursive(T value, Node<T>*& node) {
//        if (node == nullptr) {
//            node = new Node<T>(value);
//        }
//        else if (value < node->data) {
//            insert_recursive(value, node->left);
//        }
//        else {
//            insert_recursive(value, node->right);
//        }
//    }
//
//    bool find(T value)
//    {
//        return find_recursive(value, root);
//    }
//
//    bool find_recursive(T value, Node<T>* node) {
//        if (node == nullptr) {
//            return false;
//        }
//        if (value == node->data) {
//            return true;
//        }
//        if (value < node->data) {
//            return find_recursive(value, node->left);
//        }
//        else {
//            return find_recursive(value, node->right);
//        }
//    }
//
//    bool delete_iterative(T val)
//    {
//        return delete_recursive(val, root);
//    }
//
//    bool delete_recursive(T val, Node<T>*& node)
//    {
//        if (node == nullptr)
//        {
//            return false;
//        }
//        if (val < node->data)
//        {
//            return delete_recursive(val, node->left);
//        }
//        else if (val > node->data)
//        {
//            return delete_recursive(val, node->right);
//        }
//        else
//        {
//            if (node->left == nullptr)
//            {
//                Node<T>* temp = node->right;
//                delete node;
//                node = temp;
//            }
//            else if (node->right == nullptr)
//            {
//                Node<T>* temp = node->left;
//                delete node;
//                node = temp;
//            }
//            else
//            {
//                node->data = findMin(node->right)->data;
//                delete_recursive(node->data, node->right);
//            }
//            return true;
//        }
//    }
//
//    Node<T>* findMin(Node<T>* node)
//    {
//        while (node->left != nullptr) {
//            node = node->left;
//        }
//        return node;
//    }
//
//    void display()
//    {
//        display_recursive(root);
//    }
//
//    void display_recursive(Node<T>* node)
//    {
//        if (node != nullptr) {
//            display_recursive(node->left);
//            cout << node->data << " | ";
//            display_recursive(node->right);
//        }
//    }
//
//    void leafSum(int& sum)
//    {
//        leafSum_recursive(root, sum, 0);
//    }
//
//    void leafSum_recursive(Node<T>* node, int& sum, int count)
//    {
//        if (node != nullptr)
//        {
//            if (node->left == nullptr && node->right == nullptr)
//            {
//                // sum += node->data;
//                sum++;
//            }
//            leafSum_recursive(node->left, sum, count);
//            leafSum_recursive(node->right, sum, count);
//        }
//    }
//
//    ~BST()
//    {
//        destroyTree(root);
//    }
//
//    void destroyTree(Node<T>* node) {
//        if (node != nullptr)
//        {
//            destroyTree(node->left);
//            destroyTree(node->right);
//            delete node;
//        }
//    }
//        void insert_it(T n) {
//        Node<T>* temp = new Node<T>(n);
//
//        if (root == nullptr) {
//            root = temp;
//            return;
//        }
//
//        Node<T>* current = root;
//        Node<T>* parent = nullptr;
//
//        while (current != nullptr) 
//        {
//            parent = current;
//
//            if (n == current->data) 
//            {
//                 current->left = temp;
//            }
//            else if (n < current->data)
//            {
//                current = current->left;
//            }
//            else
//            {
//                current = current->right;
//            }
//        }
//
//        if (n < parent->data) 
//        {
//            parent->left = temp;
//        }
//        else
//        {
//            parent->right = temp;
//        }
//    }
//    bool find_it(T val)
//    {
//        Node<T>* current = root;
//        while (current != nullptr) 
//        {
//            if (val == current->data) 
//            {
//                return true;
//            }
//            else if (val < current->data) 
//            {
//                current = current->left;
//            }
//            else
//            {
//                current = current->right;
//            }
//        }
//
//        return false;
//    }  
//    void delete_it(T val)
//    {
//        Node<T>* current = root;
//        while (current != nullptr) 
//        {
//            if (val == current->data) 
//            {
//                return true;
//            }
//            else if (val < current->data) 
//            {
//                current = current->left;
//            }
//            else
//            {
//                current = current->right;
//            }
//        }
//
//        return false;
//    }
//};
//
//int main() {
//    BST<int> bst;
//
//    bst.insert(50);
//    bst.insert(30);
//    bst.insert(70);
//    bst.insert(20);
//    bst.insert(40);
//    bst.insert(60);
//    bst.insert(80);
//    if (bst.find(55))
//    {
//        cout << "Found" << endl;
//    }
//    else
//    {
//        cout << "not Found" << endl;
//    }
//
//    bst.display();
//    cout << endl<<endl;
//
//    int leafSum = 0;
//    bst.leafSum(leafSum);
//    cout << "Sum : " << leafSum << endl;
//
//    if (bst.delete_iterative(30))
//    {
//        cout << "deleted" << endl;
//    }
//    else
//    {
//        cout << "not deleted" << endl;
//    }
//    cout << " after deletion : ";
//    bst.display();
//    cout << endl;
//}