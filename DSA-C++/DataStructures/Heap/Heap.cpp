#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class MaxHeap {
    vector<int> heap;

    void heapifyUp(int i) {
        while (i > 0 && heap[(i - 1) / 2] < heap[i]) {
            swap(heap[i], heap[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
    }

    void heapifyDown(int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < heap.size() && heap[left] > heap[largest]) 
            largest = left;
        if (right < heap.size() && heap[right] > heap[largest]) 
            largest = right;

        if (largest != i) {
            swap(heap[i], heap[largest]);
            heapifyDown(largest);
        }
    }

public:
    void insert(int val) {
        heap.push_back(val);
        heapifyUp(heap.size() - 1);
    }

    void removeMax() {
        if (heap.empty()) return;
        
        heap[0] = heap.back();
        heap.pop_back();
        
        if (!heap.empty()) {
            heapifyDown(0);
        }
    }

    void display() {
        for (int x : heap) cout << x << " ";
        cout << endl;
    }
};

int main() {
    MaxHeap mh;

    mh.insert(40);
    mh.insert(10);
    mh.insert(30);
    mh.insert(50);
    mh.insert(20);

    cout << "Heap after insertions: ";
    mh.display();

    cout << "Deleting root (Max)..." << endl;
    mh.removeMax();
    
    cout << "Heap after deletion: ";
    mh.display();

    return 0;
}