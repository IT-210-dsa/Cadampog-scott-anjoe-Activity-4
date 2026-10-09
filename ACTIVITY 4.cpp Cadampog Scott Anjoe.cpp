#include <iostream>
#include <vector>

using namespace std;

// Function for Bubble Sort
void bubbleSort(vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    
    cout << "\nSorted Array:\n";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Function for Insertion Sort
void insertionSort(vector<int> arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    cout << "\nSorted Array:\n";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Function for Selection Sort
void selectionSort(vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }

    cout << "\nSorted Array:\n";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> numbers(5);

    cout << "* Sorting Program *\n\n";
    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    cout << "\nOriginal Array:\n";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << "\n";

    int choice;
    do {
        cout << "\n== Sorting Menu ==\n";
        cout << "[1] Bubble Sort\n";
        cout << "[2] Insertion Sort\n";
        cout << "[3] Selection Sort\n";
        cout << "[4] Exit\n\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nSorting using Bubble Sort...\n";
                bubbleSort(numbers);
                break;
            case 2:
                cout << "\nSorting using Insertion Sort...\n";
                insertionSort(numbers);
                break;
            case 3:
                cout << "\nSorting using Selection Sort...\n";
                selectionSort(numbers);
                break;
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
