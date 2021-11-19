/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mout <mout@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:30:05 by mout              #+#    #+#             */
/*   Updated: 2021/11/19 15:54:26 by mout             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
    int age;
    std::string name;
};

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main(void)
{
    Data *d = new Data();
    Data *b = deserialize(serialize(d));

    d->age = 9;
    d->name = "Yuri";
    std::cout << "age == " << d->age << " name == " << d->name << std::endl;
    std::cout << serialize(d) << std::endl;
    std::cout << "age == " << b->age << " name == " << b->name << std::endl;
    return (0);
}