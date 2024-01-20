
#include <iostream>
#include <cassert>
using namespace std;
template <typename k, typename v>
struct HeapItem {
    k key;
    v value;
};

template <typename k, typename v>
class MinHeap {
private:
    HeapItem<k, v>* arr;
    int capacity;
    int totalItems;

public:
    MinHeap() : arr(nullptr), capacity(0), totalItems(0) {}

    MinHeap(int _capacity) : capacity(_capacity), totalItems(0) {
        arr = new HeapItem<k, v>[capacity];
    }

    ~MinHeap() {
        delete[] arr;
    }

    void insert(k key, v value) {
        if (totalItems == capacity) {
            capacity *= 2;
            HeapItem<k, v>* newArr = new HeapItem<k, v>[capacity];
            for (int i = 0; i < totalItems; ++i) {
                newArr[i] = arr[i];
            }
            delete[] arr;
            arr = newArr;
        }
        int index = totalItems;
        arr[index].key = key;
        arr[index].value = value;
        ++totalItems;
        while (index > 0 && arr[index].key < arr[(index - 1) / 2].key) {
            swap(arr[index], arr[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }

    void getMin(v& _value) {
        assert(totalItems > 0);
        _value = arr[0].value;
    }

    void deleteMin() {
        assert(totalItems > 0);
        arr[0] = arr[totalItems - 1];
        --totalItems;
        int index = 0;
        while (true) {
            int left = 2 * index + 1;
            int right = 2 * index + 2;
            int smallest = index;
            if (left < totalItems && arr[left].key < arr[smallest].key) {
                smallest = left;
            }
            if (right < totalItems && arr[right].key < arr[smallest].key) {
                smallest = right;
            }
            if (smallest != index) {
                swap(arr[index], arr[smallest]);
                index = smallest;
            }
            else {
                break;
            }
        }
    }

    bool isEmpty() const {
        return totalItems == 0;
    }
};
int main() {
    MinHeap<int, int> heap(5);

    heap.insert(5, 50);
    heap.insert(3, 30);
    heap.insert(8, 80);
    heap.insert(1, 10);
    heap.insert(6, 60);

    int minValue;
    heap.getMin(minValue);
    cout << "Minimum value in the heap: " << minValue << endl;

   heap.deleteMin();

   heap.getMin(minValue);
    cout << "Minimum value after deletion: " << minValue << endl;

    bool empty = heap.isEmpty();
    cout << "Is the heap empty? " << (empty ? "Yes" : "No") << endl;

    return 0;
}
