/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygurma <ygurma@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:24:04 by ygurma            #+#    #+#             */
/*   Updated: 2025/02/18 19:24:06 by ygurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Animal.hpp
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
    std::string type;
public:
    Animal();
    virtual ~Animal();
    virtual void makeSound() const;
    std::string getType() const;
};

#endif
