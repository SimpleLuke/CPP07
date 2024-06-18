/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:00:49 by llai              #+#    #+#             */
/*   Updated: 2024/06/18 22:18:41 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <iostream>

template <typename T>
void iter(T* arr, size_t len, void (*f)(const T&))
{
  if (arr == nullptr || f == nullptr) return;

  for (size_t i = 0; i < len; ++i)
  {
    f(arr[i]);
  }
}

template <typename T>
void printArr(T const &el)
{
	std::cout << el << " ";
}
