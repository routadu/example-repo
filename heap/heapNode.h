class HeapNode
{
public:
    HeapNode(int value)
    {
        this->value = value;
        left = nullptr;
        right = nullptr;
    }

    ~HeapNode()
    {
        if (left != nullptr)
            delete left;
        if (right != nullptr)
            delete right;
    }

    int value;
    HeapNode *left;
    HeapNode *right;
    HeapNode *parent;
};
