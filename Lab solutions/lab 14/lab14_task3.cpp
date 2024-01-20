
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

template <class k, class v>
class heap {
private:
    struct heapitem {
        k key;
        v value;
        heapitem(k x = NULL, v y = NULL) {
            key = x; value = y;
        }
    };
    vector<heapitem> arr;
    int capacity;
    int totalitems;

public:
    heap() {
        capacity = 0; totalitems = 0;
    }

    heap(int c) {
        capacity = c;
    }

    void insert(k keyd, v vald) {
        heapitem input(keyd, vald);
        arr.push_back(input);
        totalitems++;
        if (totalitems == capacity)
            capacity *= 2;
        for (int i = (totalitems / 2) - 1; i >= 0; i--) {
            reheapdown(i, totalitems - 1);
        }
    }

    void reheapdown(int cnode, int last) {
        int minChild, rightChild, leftChild;
        leftChild = 2 * cnode + 1;
        rightChild = 2 * cnode + 2;
        if (leftChild <= last) {
            if (leftChild == last)
                minChild = leftChild;
            else {
                if (arr[leftChild].key >= arr[rightChild].key)
                    minChild = rightChild;
                else
                    minChild = leftChild;
            }
            if (arr[cnode].key > arr[minChild].key) {
                swap(arr[cnode], arr[minChild]);
                reheapdown(minChild, last);
            }
        }
    }

    bool isheap() {
        int lc, rc;
        bool f = 1;
        for (int i = 0; i < totalitems && f == 1; i++) {
            lc = (2 * i) + 1;
            rc = (2 * i) + 2;
            if (lc < totalitems) {
                if (lc == totalitems - 1) {
                    if (arr[i].key > arr[lc].key)
                        f = 0;
                }
                else {
                    if (arr[i].key > arr[lc].key)
                        f = 0;
                    if (arr[i].key > arr[rc].key)
                        f = 0;
                }
            }
        }
        return f;
    }

    void increase(int p, k keyv) {
        if (p < totalitems) {
            arr[p].key += keyv;
            reheapdown(p, totalitems - 1);
        }
    }

    void decrease(int p, k keyv) {
        if (p < totalitems) {
            arr[p].key -= keyv;
            for (int i = (totalitems / 2) - 1; i >= 0; i--) {
                reheapdown(i, totalitems - 1);
            }
        }
    }

    void reheapdownm(int cnode, int last) {
        int maxChild, rightChild, leftChild;
        leftChild = 2 * cnode + 1;
        rightChild = 2 * cnode + 2;
        if (leftChild <= last) {
            if (leftChild == last)
                maxChild = leftChild;
            else {
                if (arr[leftChild].key <= arr[rightChild].key)
                    maxChild = rightChild;
                else
                    maxChild = leftChild;
            }
            if (arr[cnode].key < arr[maxChild].key) {
                swap(arr[cnode], arr[maxChild]);
                reheapdownm(maxChild, last);
            }
        }
    }

    void convert() {
        if (totalitems > 1) {
            for (int i = (totalitems / 2) - 1; i >= 0; i--) {
                reheapdownm(i, totalitems - 1);
            }
        }
    }

    void getmin(v& val) {
        if (totalitems > 0) {
            val = arr[0].value;
        }
    }

    bool isEmpty() {
        return (totalitems == 0);
    }

    void print() {
        for (int i = 0; i < totalitems; i++) {
            cout << arr[i].key << ":" << arr[i].value << endl;
        }
    }

    void deletemin() {
        if (totalitems > 0) {
            swap(arr[0], arr[totalitems - 1]);
            arr.pop_back();
            totalitems--;
            for (int i = (totalitems / 2) - 1; i >= 0; i--) {
                reheapdownm(i, totalitems - 1);
            }
        }
    }

    ~heap() {}
};

class Student {
private:
    string name;
    string rollno;

public:
    Student(string n = "", string r = "") {
        name = n;
        rollno = r;
    }

    friend ostream& operator<<(ostream& out, Student s);
};

ostream& operator<<(ostream& out, Student s) {
    out << "Name: " << s.name << endl;
    out << "Roll Number: " << s.rollno << endl;
    return out;
}

template<typename k, typename v>
void buildStudentHeap(string fileName, heap<k, v>& h1) {
    ifstream fin(fileName);
    string name;
    string roll;
    string gpa;
    while (!fin.eof()) {
        getline(fin, name);
        getline(fin, roll);
        getline(fin, gpa);
        int g = stoi(gpa);
        int rol = stoi(roll);
        Student s1(name, roll);
        h1.insert(g, s1);
    }
}

int main() {
    heap<int, Student> stdHeap;
    buildStudentHeap("student_data.txt", stdHeap);
    while (!stdHeap.isEmpty()) {
        Student s;
        stdHeap.getmin(s);
        cout << s << endl << endl;
        stdHeap.deletemin();
    }

    system("pause");
    return 0;
}
