/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygurma <ygurma@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:19:27 by ygurma            #+#    #+#             */
/*   Updated: 2025/02/18 19:19:30 by ygurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    std::cout << "Dog created" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof! Woof!" << std::endl;
}
