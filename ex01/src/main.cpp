/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:24:40 by llai              #+#    #+#             */
/*   Updated: 2024/06/18 22:18:48 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/iter.hpp"

int main( void )
{
	// Testing with an array of integers
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);
    std::cout << "Integer array: ";
    iter(intArray, intArrayLength, printArr);
    std::cout << std::endl;

    // Testing with an array of doubles
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    size_t doubleArrayLength = sizeof(doubleArray) / sizeof(doubleArray[0]);
    std::cout << "Double array: ";
    iter(doubleArray, doubleArrayLength, printArr);
    std::cout << std::endl;

    // Testing with an array of strings
    std::string stringArray[] = {"Hello", "World", "This", "Is", "C++"};
    size_t stringArrayLength = sizeof(stringArray) / sizeof(stringArray[0]);
    std::cout << "String array: ";
    iter(stringArray, stringArrayLength, printArr);
    std::cout << std::endl;

    return 0;

}
