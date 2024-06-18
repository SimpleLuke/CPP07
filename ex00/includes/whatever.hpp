/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 21:51:19 by llai              #+#    #+#             */
/*   Updated: 2024/06/18 21:57:46 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void swap(T& x, T& y)
{
  T temp;

  temp = x;
  x = y;
  y = temp;
}

template <typename T>
T max(T const& x, T const& y)
{
  return (x > y) ? x : y;
}

template <typename T>
T min(T const& x, T const& y)
{
  return (x < y) ? x : y;
}
