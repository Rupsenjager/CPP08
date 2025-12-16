#include "Span.hpp"
#include <cstdlib>

int main()
{
    Span sp = Span(5);
    
    //1
    std::cout << "Array to small(0) for calculating span: \n";
    try
    {
        sp.longestSpan();
    }
    catch(const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    
    //2
    std::cout << "\nArray to small(1) for calculating span: \n";
    sp.addNumber(6);
    try
    {
        sp.shortestSpan();
    }
    catch(std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    
    //3
    std::cout << "\nShortest and longest span: \n";
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    
    //4
    std::cout << "\nAdding more then the allowed array size: \n";
    try
    {
        sp.addNumber(22);
    }
    catch(std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    //5 
    std::cout << "\nLarge test(10000 numbers): \n";
    Span bigSpan(10000);
    std::vector<int> bigVector;

    for(int i = 0; i < 10000; i++)
        bigVector.push_back(i);

    try
    {
        bigSpan.addNumber(bigVector.begin(), bigVector.end());
        std::cout << "Shortest span: " << bigSpan.shortestSpan() << std::endl;
        std::cout << "Longest span: " << bigSpan.longestSpan() << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}

