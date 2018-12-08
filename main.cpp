#include <iostream>
//#include "heap.hpp"
#include "heapContainer.hpp"

//Design method
//Using a singleton for the heapContainer to contain the heap

using namespace std;
int main() {
    vector<int> intvect;
    intvect.push_back(1);
    intvect.push_back(2);
    intvect.push_back(1);
    intvect.push_back(5);
    intvect.push_back(3);
    //cout << intvect.pop_back() << endl;

    heapContainer<int>& instance = heapContainer<int>::get_instance();
    instance.tHeap.push(9);
    instance.tHeap.push(7);
    cout << instance.tHeap << endl;

    instance.changeHeap(intvect);
    cout << instance.tHeap << endl;

    instance.tHeap.push(5);
    cout << instance.tHeap << endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}