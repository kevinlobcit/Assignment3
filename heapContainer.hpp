//
// Created by Owntrolf on 2018-12-07.
//

#ifndef ASSIGNMENT3_HEAPCONTAINER_HPP
#define ASSIGNMENT3_HEAPCONTAINER_HPP

#include "heap.hpp"

template<typename T>
class heapContainer{
public:
    heap<T> tHeap;
    static heapContainer& get_instance()
    {
        static heapContainer instance; // Guaranteed to be destroyed
        return instance; //Instantiated on first use
    }

    void changeHeap(std::vector<T> input)
    {
        tHeap = heap<T>(input);
    }

private:
    heapContainer(){};
    heapContainer(std::vector<T> input)
    {
        tHeap = heap<T>(input);
    }
public:
    heapContainer(heapContainer const&) = delete;
    void operator=(heapContainer const&) = delete;
};

#endif //ASSIGNMENT3_HEAPCONTAINER_HPP
