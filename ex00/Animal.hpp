/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygurma <ygurma@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:18:40 by ygurma            #+#    #+#             */
/*   Updated: 2025/02/18 19:18:43 by ygurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
    std::string type;
public:
    Animal();
    virtual ~Animal(); // Destructor should also be virtual
    virtual void makeSound() const; // ✅ Virtual for polymorphism
    std::string getType() const;
};

#endif

