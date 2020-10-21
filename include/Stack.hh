#include "Node.hh"

class Stack
{
    private:
        Node* first;
    public:
        Stack(/* args */);
        ~Stack();
        void Pop();
        Book* Peek() const;
        void Add(Book*);
        bool IsEmpty() const;
        void Print();
};