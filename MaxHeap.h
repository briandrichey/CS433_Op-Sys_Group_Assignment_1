#pragma once
#include <vector>
#include "PCB.h"

class MaxHeap {
public:
    int size;
    MaxHeap();
    vector<PCB*> processList;

    int getSize();
    void display();

    void swap(PCB& a, PCB& b);
    void siftUp(int i);
    void siftDown(int i);
    void insert(PCB& process);
    PCB* getMax();
    bool isLeaf(int i);

};