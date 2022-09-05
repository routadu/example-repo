#include "heapNode.h"
#include <iostream>

class Heap
{
private:
    void _addNode(int value, HeapNode *currentNode, HeapNode *parentNode)
    {
        // HeapNode *currentNode = parentNode;
        if (currentNode == nullptr || _isElementInserted)
            return;
        if (currentNode->left == nullptr)
        {
            currentNode->left = new HeapNode(value);
            currentNode->left->parent = currentNode;
            _isElementInserted = true;
            return;
        }
        else if (currentNode->right == nullptr)
        {
            currentNode->right = new HeapNode(value);
            currentNode->right->parent = currentNode;
            _isElementInserted = true;
            return;
        }
        else
        {
            if (currentNode->left->left == nullptr || currentNode->left->right == nullptr)
            {
                _addNode(value, currentNode->left, parentNode);
            }
            if (currentNode->right->left == nullptr || currentNode->right->right == nullptr)
            {
                _addNode(value, currentNode->right, parentNode);
            }
            _addNode(value, currentNode->left, currentNode);
            _addNode(value, currentNode->right, currentNode);
        }
    }

    void _print(HeapNode *currentNode)
    {
        if (currentNode == nullptr)
            return;
        std::cout << currentNode->value << " ";
        if (currentNode->left != nullptr)
        {
            std::cout << "Left: " << currentNode->left->value << " ";
        }
        if (currentNode->right != nullptr)
        {
            std::cout << "Right: " << currentNode->right->value << " ";
        }
        std::cout << std::endl;
        _print(currentNode->left);
        _print(currentNode->right);
    }

public:
    HeapNode *parentNode;
    bool _isElementInserted = false;

    Heap(int value)
    {
        parentNode = new HeapNode(value);
    }

    ~Heap()
    {
        delete parentNode;
    }

    void addNode(int value)
    {
        _isElementInserted = false;
        _addNode(value, parentNode, nullptr);
    }

    void print()
    {
        _print(parentNode);
    }
};

int main()
{
    int numArr[] = {10, 656, 34, 12, 78, 333, 89, 1, 98, 4, 3, 111, 223, 655, 567, 392, 507};
    Heap heap = Heap(numArr[0]);
    for (int i = 1; i < 17; i++)
    {
        heap.addNode(numArr[i]);
    }
    heap.print();
}