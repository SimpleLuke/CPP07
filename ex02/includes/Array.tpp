/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:51:46 by llai              #+#    #+#             */
/*   Updated: 2024/06/19 16:40:18 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

// Default constractor
template <typename T>
Array<T>::Array() : elements(NULL), length(0)
{
}

// constractor with size parameter
template <typename T>
Array<T>::Array(unsigned int n) : elements(new T[n]()), length(n)
{
}

// Copy constractor
template <typename T>
Array<T>::Array(const Array& other)
    : elements(new T[other.length]), length(other.length)
{
  for (unsigned int i = 0; i < length; ++i)
  {
    elements[i] = other.elements[i];
  }
}

// Assignment operator
template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
  if (this != &other)
  {
    delete[] elements;
    length = other.length;
    elements = new T[length];
    for (unsigned int i = 0; i < length; ++i)
    {
      elements[i] = other.elements[i];
    }
  }
  return (*this);
}

// Destructor
template <typename T>
Array<T>::~Array()
{
  delete[] elements;
}

// Subscript operator
template <typename T>
T& Array<T>::operator[](unsigned int index)
{
  if (index >= length)
  {
    throw OutOfBoundsException();
  }
  return (elements[index]);
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
  if (index >= length)
  {
    throw OutOfBoundsException();
  }
  return (elements[index]);
}

// Size member function
template <typename T>
unsigned int Array<T>::size() const
{
  return (length);
}

#endif  // !ARRAY_TPP
