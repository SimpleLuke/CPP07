/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:42:39 by llai              #+#    #+#             */
/*   Updated: 2024/06/18 23:07:43 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
template <typename T>
class Array
{
 public:
  Array();
  Array(unsigned int n);
  Array(const Array &);
  Array &operator=(const Array &);
  ~Array();

  // Subscript operator
  T &operator[](unsigned int index);
  const T &operator[](unsigned int index) const;

  // size member function
  unsigned int size() const;

  class OutOfBoundsException : public std::exception
  {
   public:
    const char *what() const throw() { return "Index out of bounds"; }
  };

 private:
  T *elements;
  unsigned int length;
};

#include "Array.tpp"

#endif  // !ARRAY_HPP
