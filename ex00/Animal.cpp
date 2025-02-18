/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygurma <ygurma@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:18:21 by ygurma            #+#    #+#             */
/*   Updated: 2025/02/18 19:18:24 by ygurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal created" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destroyed" << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Animal makes a sound" << std::endl;
}

std::string Animal::getType() const {
    return type;
}
