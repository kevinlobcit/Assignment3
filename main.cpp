#include <iostream>
#include "heap.hpp"

using namespace std;
int main() {
    vector<int> intvect;
    intvect.push_back(1);
    intvect.push_back(2);
    //cout << intvect.pop_back() << endl;

    heap<int>& instance = heap<int>::get_instance();
    instance.push(1);
    instance.push(5);
    cout << instance.pop() << endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}