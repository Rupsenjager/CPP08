#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main(void)
{
    std::vector<int> int_vector = {1, 2, 3, 4, 5};
    std::list<int> int_list = {1, 2, 3, 4, 5, 3};

    try 
    {
        auto it = easyfind(int_vector, 2);
        std::cout << "Found: " << *it << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    
    try
    {
        auto it = easyfind(int_vector, 99);
        std::cout << "Found: " << *it << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        auto it = easyfind(int_list, 3);

        int index = 0;
        for(auto start = int_list.begin(); start != it; start++)
            index ++;
        
        std::cout << "Found: " << *it << "\nIndex: " << index << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}