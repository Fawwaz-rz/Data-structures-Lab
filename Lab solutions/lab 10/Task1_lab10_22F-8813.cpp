#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* left, * right;

    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
   
};
Node* findsiblings(Node* n, int d)
{
    if (n == NULL || n->data == d)
    {
        return NULL;
    }
    if (n->left != nullptr && n->left->data == d)
    {
        return n->right;
    }
    if (n->right != nullptr && n->right->data == d)
    {
        return n->right;
    }
    Node* ex = findsiblings(n->left, d);
    if (ex != nullptr)
    {
        return ex;
    }
    ex = findsiblings(n->right, d);
    return ex;

}
int main()
{
    Node* ptr = nullptr;
    ptr = new Node(1);
    ptr->left = new Node(2);
    ptr->right = new Node(3);
    ptr->left->left = new Node(4);
    ptr->left->right = new Node(5);
    ptr->right->left = new Node(6);
    ptr->right->right = new Node(7);
    int tofind= 7;
    cout << "please enter any data to check :  ";
    cin >> tofind;
    int child2=0;
    cout << "please enter another data to check :  ";
    cin >> child2;
    Node* check = findsiblings(ptr, tofind);

    if (check!= nullptr)
    {
        if (child2==check->data)
        {
            
            cout << "Yes they are siblings " << endl;

        }
        else
        {
            cout << " They are not siblings" << endl;
        }
    }
    else 
    {
        cout << " They are not siblings" << endl;
    }
    
}