/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygurma <ygurma@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:25:48 by ygurma            #+#    #+#             */
/*   Updated: 2025/02/18 19:25:50 by ygurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

#include "Dog.hpp"
#include "Cat.hpp"

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    std::cout << "\n### Virtual Destructor Test ###" << std::endl;

    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "\nDeleting dog (via Animal pointer):" << std::endl;
    delete dog;  // If Animal destructor is NOT virtual -> Only Animal destroyed

    std::cout << "\nDeleting cat (via Animal pointer):" << std::endl;
    delete cat;  // If Animal destructor is NOT virtual -> Only Animal destroyed

    return 0;
}

/*
int main() {
    std::cout << "\n### Deep Copy Test with Scope ###" << std::endl;

    Dog basic;
    {
        Dog tmp = basic; // Calls Copy Constructor
        std::cout << "Exiting inner scope..." << std::endl;
    } // tmp destroyed here (should not affect basic)

    std::cout << "After inner scope..." << std::endl;

    return 0;
}
*/
/*
int main() {
    Animal *animals[4];

    for (int i = 0; i < 2; ++i)
        animals[i] = new Dog();
    for (int i = 2; i < 4; ++i)
        animals[i] = new Cat();

    for (int i = 0; i < 4; ++i)
        delete animals[i];

    Dog original;
    Dog copy = original; // Deep copy test

    return 0;
}
*/
/*
int main() 
{
    const Animal* j = new Dog(); 
    const Animal* i = new Cat();

    delete i;
    delete j;
    return 0;
}
*/
