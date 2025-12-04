#pragma once
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{

    public:
        MutantStack();
        ~MutantStack();
        MutantStack<T>& operator=(const MutantStack<T>& other);
        MutantStack<T>(const MutantStack<T>& other);
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin();
        iterator end();
};

#include "MutantStack.tpp"