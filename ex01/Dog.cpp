/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygurma <ygurma@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:25:19 by ygurma            #+#    #+#             */
/*   Updated: 2025/02/18 19:25:21 by ygurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : brain(new Brain()) {
    type = "Dog";
    std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other), brain(new Brain(*other.brain)) {
    std::cout << "Dog copied" << std::endl;
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog destroyed" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    if (this != &other) {
        Animal::operator=(other);

        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof woof!" << std::endl;
}
