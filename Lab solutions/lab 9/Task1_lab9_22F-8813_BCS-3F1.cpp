//#include <iostream>
//using namespace std;
//
//struct Node {
//    int data;
//    Node* left;
//    Node* right;
//
//    Node(int d) : data(d), left(nullptr), right(nullptr) {}
//
//  
//    void inorder(Node* p) const 
//    {
//        if (p != nullptr)
//        {
//            inorder(p->left);
//            cout << p->data << " ";
//            inorder(p->right);
//        }
//    }
//    void preorder(Node* p) const {
//        if (p != nullptr) {
//            cout << p->data << " ";
//            preorder(p->left);
//            preorder(p->right);
//        }
//    }
//
//    void postorder(Node* p) const {
//        if (p != nullptr) {
//            postorder(p->left);
//            postorder(p->right);
//            cout << p->data << " ";
//        }
//    }
//
//    Node* find(int key)
//    {
//        if (data == key)
//        {
//            cout << "Node with key " << key << " found." << endl;
//            return this;
//        }
//        Node* found = nullptr;
//        if (left)
//        {
//            found = left->find(key);
//        }
//        if (!found && right) {
//            found = right->find(key);
//        }
//        if (found) {
//            return found;
//        }
//        return nullptr;
//    }
//
//    void deleteNode(int key, Node*& parent) {
//        if (key < data && left) {
//            left->deleteNode(key, left);
//        }
//        else if (key > data && right) {
//            right->deleteNode(key, right);
//        }
//        else if (key == data)
//        {
//            if (left && right) 
//            {
//                Node* minRight = right->findMin();
//                data = minRight->data;
//                right->deleteNode(minRight->data, right);
//            }
//            else {
//                Node* toDelete = this;
//                if (left) {
//                    toDelete = left;
//                }
//                else {
//                    toDelete = right;
//                }
//                delete toDelete;
//            }
//        }
//        else {
//            cout << "Node with key " << key << " not found for deletion." << endl;
//        }
//    }
//
//    Node* findMin() {
//        Node* current = this;
//        while (current->left) {
//            current = current->left;
//        }
//        return current;
//    }
//};
//
//int main() {
//    Node* root = nullptr;
//    root = new Node(6);
//    root->left = new Node(3);
//    root->right = new Node(5);
//    root->left->left = new Node(7);
//    root->left->right = new Node(8);
//    root->right->left = new Node(1);
//    root->right->right = new Node(3);
//
//    cout << "Inorder traversal: ";
//    root->inorder(root);
//    cout << endl;
//
//    cout << "Preorder traversal: ";
//    root->preorder(root);
//    cout << endl;
//
//    cout << "Postorder traversal: ";
//    root->postorder(root);
//    cout << endl;
//
//    int keyToFind = 10;
//    Node* foundNode = root->find(keyToFind);
//    if (foundNode==nullptr)
//    {
//        cout << "Node with key " << keyToFind << " not found." << endl;
//    }
//    int keyToDelete = 6;
//    root->deleteNode(keyToDelete, root);
//
//    cout << "Inorder traversal after deletion: ";
//    root->inorder(root);
//    cout << endl;
//
//    return 0;
//}