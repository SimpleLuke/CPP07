/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:24:40 by llai              #+#    #+#             */
/*   Updated: 2024/06/19 16:44:12 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "../includes/Array.hpp"

int main()
{
  // Test default constructor
  Array<int> emptyArray;
  std::cout << "Empty array size: " << emptyArray.size() << std::endl;

  // Test constructor with size
  Array<int> intArray(5);
  std::cout << "Int array size: " << intArray.size() << std::endl;
  for (unsigned int i = 0; i < intArray.size(); ++i)
  {
    intArray[i] = i * 10;
  }
  for (unsigned int i = 0; i < intArray.size(); ++i)
  {
    std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
  }

  // Test copy constructor
  Array<int> copyArray(intArray);
  std::cout << "Copy array size: " << copyArray.size() << std::endl;
  for (unsigned int i = 0; i < copyArray.size(); ++i)
  {
    std::cout << "copyArray[" << i << "] = " << copyArray[i] << std::endl;
  }

  // Test assignment operator
  Array<int> assignedArray;
  assignedArray = intArray;
  std::cout << "Assigned array size: " << assignedArray.size() << std::endl;
  for (unsigned int i = 0; i < assignedArray.size(); ++i)
  {
    std::cout << "assignedArray[" << i << "] = " << assignedArray[i]
              << std::endl;
  }

  // Test out of bounds access
  try
  {
    std::cout << intArray[10] << std::endl;
  }
  catch (const std::exception& e)
  {
    std::cout << "Exception caught: " << e.what() << std::endl;
  }

  return 0;
}
