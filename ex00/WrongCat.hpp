/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygurma <ygurma@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:23:09 by ygurma            #+#    #+#             */
/*   Updated: 2025/02/18 19:23:12 by ygurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
    WrongCat();
    WrongCat(const WrongCat& other);
    WrongCat& operator=(const WrongCat& other);
    ~WrongCat();

    void makeSound() const;
};

#endif
