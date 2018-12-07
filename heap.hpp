//
// Created by Owntrolf on 2018-12-07.
//

#ifndef ASSIGNMENT3_HEAP_HPP
#define ASSIGNMENT3_HEAP_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
class heap {
public:
    std::vector<T> storage;
    static heap& get_instance()
    {
        static heap instance; // Guaranteed to be destroyed
        return instance; //Instantiated on first use
    }
private:

    heap(){}


    heap(std::vector<T> input)
    {

    }

    void heapify()
    {
        std::sort(storage.begin(), storage.begin()+storage.size());
    }

public:
    heap(heap const&) = delete;
    void operator=(heap const&) = delete;

    void push(T element)
    {
        storage.push_back(element);
        heapify();
    }

    T pop()
    {
        T sendBack = storage.back();
        storage.pop_back();
        return sendBack;
    }

    int size()
    {
        return storage.size();
    }

    bool is_empty()
    {
        return storage.empty();
    }


    void clear()
    {
        storage.clear();
    }
};

template<typename T>
std::ostream& operator<<(std::ostream& os, const heap<T> prntHeap)
{
    for(int i = 0; i < prntHeap.size(); i++)
    {
        os << prntHeap.storage.at(i) + " ";
    }
    return os;
}

#endif //ASSIGNMENT3_HEAP_HPP
