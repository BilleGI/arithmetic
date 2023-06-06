#pragma once
#include<iostream>
#include <vector>

void func()
{
    std::cout << "Enter the correct number: ";
    std::cin.clear();
    std::cin.ignore();
}

template<typename T>
void input(std::vector<T>& array)
{
    while(true)
    {
        char exit;
        T var;
        std::cout << "Enter a number: ";
        while(!(std::cin >> var))
        {
            func();
        }
        array.emplace_back(var);
        std::cout << "Exit input?(y/n) ";
        std::cin >> exit;
        if(exit == 'y') break;
    }
}

template<typename T>
void input(T array[], int size)
{
    for(int i = 0; i < size; ++i)
    {
        std::cout << "Enter a number: ";
        while(!(std::cin >> array[i]))
        {
            func();
        }
    }
}

template<typename T>
T arithmetic(std::vector<T> array)
{
    T mean = 0;
    for(int i = 0; i < array.size(); ++i)
    {
        mean += array[i];
    }
    return mean / array.size();
}

template<typename T>
double arithmetic(T array[], int size)
{
    T mean = 0;
    for(int i = 0; i < size; ++i)
    {
        mean += array[i];
    }
    return mean / size;
}
