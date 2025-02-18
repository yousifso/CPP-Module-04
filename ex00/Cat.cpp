/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygurma <ygurma@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:18:55 by ygurma            #+#    #+#             */
/*   Updated: 2025/02/18 19:18:57 by ygurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    type = "Cat";
    std::cout << "Cat created" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow! Meow!" << std::endl;
}
