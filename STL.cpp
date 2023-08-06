#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <stack>
#include <queue>
#include <forward_list>

using namespace std;

int main() {
    // --------------------------------------------------------------
    // VECTOR: Dynamic array that resizes automatically when needed
    // --------------------------------------------------------------

    // Declaration and initialization of a vector of integers
    vector<int> intVector = {5, 2, 8, 3, 1};

    // Adding elements to the vector
    intVector.push_back(7);
    intVector.push_back(4);

    // Sorting the vector
    sort(intVector.begin(), intVector.end());

    // Printing elements of the vector
    cout << "Vector of integers: ";
    for (int num : intVector) {
        cout << num << " ";
    }
    cout << endl;

    // --------------------------------------------------------------
    // LIST: Doubly-linked list with constant-time insertions and deletions
    // --------------------------------------------------------------

    // Declaration and initialization of a list of characters
    list<char> charList = {'c', 'a', 'd', 'b'};

    // Sorting the list
    charList.sort();

    // Printing elements of the list
    cout << "List of characters: ";
    for (char ch : charList) {
        cout << ch << " ";
    }
    cout << endl;

    // --------------------------------------------------------------
    // MAP: Associative container with key-value pairs, sorted by key
    // --------------------------------------------------------------

    // Declaration and initialization of a map of strings to integers
    map<string, int> stringToIntMap = {{"apple", 5}, {"banana", 2}, {"orange", 8}};

    // Accessing elements in the map
    int count = stringToIntMap["banana"];

    // Printing elements of the map
    cout << "Map of strings to integers: " << endl;
    for (auto entry : stringToIntMap) {
        cout << entry.first << ": " << entry.second << endl;
    }

    // --------------------------------------------------------------
    // SET: Collection of unique elements, sorted in ascending order
    // --------------------------------------------------------------

    // Declaration and initialization of a set of doubles
    set<double> doubleSet = {3.14, 1.1, 2.71, 1.1, 4.0}; // Duplicate 1.1 will be ignored

    // Printing elements of the set
    cout << "Set of doubles: ";
    for (double num : doubleSet) {
        cout << num << " ";
    }
    cout << endl;

    // --------------------------------------------------------------
    // STACK: LIFO (Last In, First Out) data structure
    // --------------------------------------------------------------

    // Declaration and initialization of a stack of integers
    stack<int> intStack;

    // Pushing elements onto the stack
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    // Popping elements from the stack
    while (!intStack.empty()) {
        cout << "Popped from stack: " << intStack.top() << endl;
        intStack.pop();
    }

    // --------------------------------------------------------------
    // QUEUE: FIFO (First In, First Out) data structure
    // --------------------------------------------------------------

    // Declaration and initialization of a queue of integers
    queue<int> intQueue;

    // Enqueuing elements into the queue
    intQueue.push(100);
    intQueue.push(200);
    intQueue.push(300);

    // Dequeuing elements from the queue
    while (!intQueue.empty()) {
        cout << "Dequeued from queue: " << intQueue.front() << endl;
        intQueue.pop();
    }

    // --------------------------------------------------------------
    // PRIORITY QUEUE (HEAP): Max-heap, largest element at the top
    // --------------------------------------------------------------

    // Declaration and initialization of a priority_queue of integers
    priority_queue<int> maxHeap;

    // Inserting elements into the max-heap
    maxHeap.push(50);
    maxHeap.push(30);
    maxHeap.push(70);
    maxHeap.push(40);
    maxHeap.push(90);

    // Extracting elements from the max-heap (largest first)
    cout << "Max-heap (priority_queue) elements: ";
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    cout << endl;

    // --------------------------------------------------------------
    // FORWARD LIST: Singly-linked list (C++11 onwards)
    // --------------------------------------------------------------

    // Declaration and initialization of a forward_list of strings
    forward_list<string> stringForwardList = {"Hello", "World"};

    // Inserting elements at the beginning of the forward_list
    stringForwardList.push_front("Welcome");

    // Printing elements of the forward_list
    cout << "Forward List of strings: ";
    for (string str : stringForwardList) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}
