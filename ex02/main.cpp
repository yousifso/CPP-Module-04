/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygurma <ygurma@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:30:04 by ygurma            #+#    #+#             */
/*   Updated: 2025/02/18 19:30:05 by ygurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    // ❌ Should fail to compile:
    //const Animal* a = new Animal(); // ERROR: Animal is abstract

    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;

    return 0;
}
