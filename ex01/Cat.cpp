/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygurma <ygurma@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:25:04 by ygurma            #+#    #+#             */
/*   Updated: 2025/02/18 19:25:06 by ygurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Cat.cpp
#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal() {
    type = "Cat";
    brain = new Brain(); // ✅ Allocate new Brain
    std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
    brain = new Brain(*other.brain); // ✅ Deep copy Brain
    std::cout << "Cat copied" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    if (this != &other) {
        Animal::operator=(other);
        delete brain;                // ✅ Prevent memory leak
        brain = new Brain(*other.brain); // ✅ Deep copy
    }
    return *this;
}

Cat::~Cat() {
    delete brain; // ✅ Proper cleanup
    std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow! Meow!" << std::endl;
}
