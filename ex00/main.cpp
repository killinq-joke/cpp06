/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mout <mout@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:01:13 by mout              #+#    #+#             */
/*   Updated: 2021/11/19 15:24:24 by mout             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

int main(int ac, char **av)
{
    double value;

    if (ac == 2)
    {
        value = std::strtod(av[1], NULL);
        if (std::isinf(value) || std::isnan(value))
        {
            std::cout << "char: " << "Impossible" << std::endl;
        }
        else if (value < 0 || value > 127)
            std::cout << "char: " << "Impossible" << std::endl;
        else if (value < 32)
            std::cout << "char: " << "Non displayable" << std::endl;
        else
            std::cout << "char: " << static_cast<char>(value) << std::endl;
        if (std::isinf(value) || std::isnan(value))
            std::cout << "int: " << "Impossible" << std::endl;
        else
            std::cout << "int: " << static_cast<int>(value) << std::endl;
        if (static_cast<int>(value) == value)
        {
            std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
            std::cout << "double: " << value << ".0" << std::endl;
        }
        else
        {
            std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
            std::cout << "double: " << value << std::endl;
        }
    }
    else
        std::cout << "Wrong number of arguments" << std::endl;
    return (0);
}