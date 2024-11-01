//heap by array
#include <iostream>
using namespace std;

class heap {
public:
    int arr[100];
    int size = 0;

    // Constructor
    heap() {
        arr[0] = -1;
        size = 0;
    } 

    // Insert element into heap
    void insert(int value) {
        size = size + 1;
        int index = size;
        arr[index] = value;

        while (index > 1) {
            int parent = index / 2;

            if (arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                return;
            }
        }
    }

    // Delete the root element from heap
    void deletefromHeap() {
        if (size == 0) {
            cout << "Nothing to delete" << endl;
            return;
        }
        // Move last element to root and reduce heap size
        arr[1] = arr[size];
        size--;

        // Heapify down from root to restore heap property
        int i = 1;
        while (i <= size) {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;

            if (leftIndex <= size && arr[i] < arr[leftIndex]) {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            } else if (rightIndex <= size && arr[i] < arr[rightIndex]) {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            } else {
                return;
            }
        }
    }

    // Print the heap
    void print() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Heapify function for max heap
void heapifyMax(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[largest] < arr[left]) {
        largest = left;
    }
    if (right <= n && arr[largest] < arr[right]) {
        largest = right;
    }
    if (largest != i) {
        swap(arr[largest], arr[i]);
        heapifyMax(arr, n, largest);
    }
}

// Heapify function for min heap
void heapifyMin(int arr[], int n, int i) {
    int smallest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[smallest] > arr[left]) {
        smallest = left;
    }
    if (right <= n && arr[smallest] > arr[right]) {
        smallest = right;
    }
    if (smallest != i) {
        swap(arr[smallest], arr[i]);
        heapifyMin(arr, n, smallest);
    }
}

// Sorting the heap (Heap Sort)
void heapsort(int arr[], int n) {
    int size = n;
    for (int i = n / 2; i > 0; i--) {
        heapifyMax(arr, n, i);
    }

    while (size > 1) {
        swap(arr[size], arr[1]);
        size--;
        heapifyMax(arr, size, 1); // Apply to current size only
    }
}

int main() {
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    cout << "Max Heap after insertion: ";
    h.print();

    h.deletefromHeap();
    cout << "Max Heap after deletion: ";
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;

    // Heap Sort for Max Heap
    heapsort(arr, n);
    cout << "Sorted array using Heap Sort (Max Heap): ";
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // for min heap
    
    /*
    for (int i = n / 2; i > 0; i--) {
        heapifyMin(arr, n, i);
    }
    cout << "Array organized as Min Heap: ";
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    */

    return 0;
}
