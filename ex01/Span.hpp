#pragma once

#include <iostream>
#include <vector>
#include <stdexcept>

class Span
{
    private:
        std::vector<int> _array;
        unsigned int _maximum;

    public:
        Span(unsigned int max);
        ~Span();
        Span(const Span& other);
        Span& operator=(const Span& other);
        void addNumber(int n);
        int shortestSpan() const;
        int longestSpan() const;
        template <typename T>
        void addNumber(T begin, T end);
};

#include "Span.tpp"