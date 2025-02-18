/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygurma <ygurma@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:19:59 by ygurma            #+#    #+#             */
/*   Updated: 2025/02/18 19:20:01 by ygurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
    *this = other;
    std::cout << "WrongAnimal copied" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destroyed" << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal generic sound!" << std::endl;
}

std::string WrongAnimal::getType() const {
    return type;
}
