//#include <iostream>
//using namespace std;
//
//class BT {
//public:
//    int data;
//    BT* left;
//    BT* right;
//
//    BT(int d) : data(d), left(nullptr), right(nullptr) {}
//    ~BT() {}
//
//    int findDepth(BT* root, int val, int depth = 0) 
//    {
//        if (root == nullptr)
//            return -1;
//
//        if (root->data == val)
//            return depth; 
//
//        int leftDepth = findDepth(root->left, val, depth + 1);
//        if (leftDepth != -1)
//            return leftDepth; 
//
//        return findDepth(root->right, val, depth + 1);
//    }
//
//    bool checksiblings(BT* root, int x, int y) 
//    {
//        if (root == nullptr)
//            return false;
//
//        if (root->left && root->right)
//        {
//            return ((root->left->data == x && root->right->data == y) ||
//                (root->left->data == y && root->right->data == x) ||
//                checksiblings(root->left, x, y) ||
//                checksiblings(root->right, x, y));
//        }
//
//        return false;
//    }
//
//    bool Checkcousins(BT* root, int x, int y) {
//        if (root == nullptr)
//            return false;
//
//        int d1 = findDepth(root, x);
//        int d2 = findDepth(root, y);
//
//        if (d1 == -1 || d2 == -1)
//            return false;
//
//        return (d1 == d2) && !checksiblings(root, x, y);
//    }
//};
//
//int main() {
//    BT tree(0);
//    BT* root = new BT(6);
//    root->left = new BT(3);
//    root->right = new BT(5);
//    root->left->left = new BT(7);
//    root->left->right = new BT(8);
//    root->right->left = new BT(1);
//    root->right->right = new BT(3);
//
//    int n1 = 7, n2 = 5;
//    
//        if (tree.Checkcousins(root, n1, n2))
//        {
//            cout << "Both are cousins.";
//    }
//    else
//        {
//            cout <<"Both are not cousins.";
//        }
//
//}
