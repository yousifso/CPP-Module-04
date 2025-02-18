/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygurma <ygurma@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:24:17 by ygurma            #+#    #+#             */
/*   Updated: 2025/02/18 19:24:18 by ygurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain &other) {
    *this = other;
    std::cout << "Brain copied" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destroyed" << std::endl;
}

Brain &Brain::operator=(const Brain &other) {
    if (this != &other) {
        for (int i = 0; i < 100; ++i)
            ideas[i] = other.ideas[i];
    }
 
       return *this;
}
