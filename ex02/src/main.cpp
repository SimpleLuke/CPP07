/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:24:40 by llai              #+#    #+#             */
/*   Updated: 2024/06/18 23:13:21 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//
//
// #include <iostream>
// #include "../includes/Array.hpp"
//
// int main() {
//
//     // Test default constructor
//     Array<int> emptyArray;
//     std::cout << "Empty array size: " << emptyArray.size() << std::endl;
//
//     // Test constructor with size
//     Array<int> intArray(5);
//     std::cout << "Int array size: " << intArray.size() << std::endl;
//     for (unsigned int i = 0; i < intArray.size(); ++i) {
//         intArray[i] = i * 10;
//     }
//     for (unsigned int i = 0; i < intArray.size(); ++i) {
//         std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
//     }
//
//     // Test copy constructor
//     Array<int> copyArray(intArray);
//     std::cout << "Copy array size: " << copyArray.size() << std::endl;
//     for (unsigned int i = 0; i < copyArray.size(); ++i) {
//         std::cout << "copyArray[" << i << "] = " << copyArray[i] << std::endl;
//     }
//
//     // Test assignment operator
//     Array<int> assignedArray;
//     assignedArray = intArray;
//     std::cout << "Assigned array size: " << assignedArray.size() << std::endl;
//     for (unsigned int i = 0; i < assignedArray.size(); ++i) {
//         std::cout << "assignedArray[" << i << "] = " << assignedArray[i] << std::endl;
//     }
//
//     // Test out of bounds access
//     try {
//         std::cout << intArray[10] << std::endl;
//     } catch (const std::exception& e) {
//         std::cout << "Exception caught: " << e.what() << std::endl;
//     }
//
//     return 0;
// }
#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}
