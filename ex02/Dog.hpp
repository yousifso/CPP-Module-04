/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygurma <ygurma@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:28:25 by ygurma            #+#    #+#             */
/*   Updated: 2025/02/18 19:28:27 by ygurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
    Brain *brain;
public:
    Dog();
    Dog(const Dog &other);
    ~Dog();
    Dog &operator=(const Dog &other);
    void makeSound() const;
};

#endif
