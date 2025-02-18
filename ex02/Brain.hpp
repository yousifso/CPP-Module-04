/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygurma <ygurma@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:29:36 by ygurma            #+#    #+#             */
/*   Updated: 2025/02/18 19:29:38 by ygurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
public:
    std::string ideas[100];
    Brain();
    Brain(const Brain &other);
    ~Brain();
    Brain &operator=(const Brain &other);
};

#endif
