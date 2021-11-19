/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mout <mout@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:56:49 by mout              #+#    #+#             */
/*   Updated: 2021/11/19 16:44:33 by mout             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Base { public: virtual ~Base(void) {} };
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base    *generate(void)
{
    int     r;

    srand(time(NULL));
    r = rand() % 3 + 1;
    if (r == 1)
    {
        return (new A());
    }
    else if (r == 2)
    {
        return (new B());
    }
    else
    {
        return (new C());
    }
}

void    identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void    identify(Base &p)
{
    try
    {
        A a;
        a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        B b;
        b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        C c;
        c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
    }
}

int main(void)
{
    Base *t = generate();

    identify(t);
    identify(*t);
    return (0);
}