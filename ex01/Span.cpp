#include "Span.hpp"
#include <exception>
#include <algorithm>
#include <limits>

Span::Span(unsigned int max) : _maximum(max)
{
}

Span::~Span()
{
}

Span::Span(const Span& other)
{
    this->_maximum = other._maximum;
    this->_array = other._array;
}

Span& Span::operator=(const Span& other)
{
    if (this == &other)
        return *this;
    this->_maximum = other._maximum;
    this->_array = other._array;
    return *this;
}

void Span::addNumber(int n)
{
    if(_array.size() >= _maximum)
        throw(std::runtime_error("Array limit has been reached."));
    _array.push_back(n);
}

int Span::shortestSpan() const
{
    if (_array.size() < 2)
        throw(std::runtime_error("Shortest span not possible due to array size being to small."));
    
    std::vector<int> temp = _array;
    std::sort(temp.begin(), temp.end());
    
    int shortest = std::numeric_limits<int>::max();

    for (size_t i = 0; i < temp.size() - 1; i ++)
    {
        int diff = temp[i + 1] - temp[i];
        if(diff < shortest)
            shortest = diff;
    }
    return shortest;
}

int Span::longestSpan() const
{
    if(_array.size() < 2)
        throw std::runtime_error("Longest span not possible due to array size being to small.");
    
    std::vector<int> temp = _array;
    std::sort(temp.begin(), temp.end());

    int longest = temp[temp.size() - 1] - temp[0];    
    
    return longest;
}
