/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygurma <ygurma@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:21:08 by ygurma            #+#    #+#             */
/*   Updated: 2025/02/18 19:21:10 by ygurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "### Correct Polymorphism (Animal) ###" << std::endl;
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << " says: ";
    dog->makeSound();

    std::cout << cat->getType() << " says: ";
    cat->makeSound();

    meta->makeSound();

    delete meta;
    delete dog;
    delete cat;

    std::cout << "\n### Incorrect Polymorphism (WrongAnimal) ###" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongCat->getType() << " says: ";
    wrongCat->makeSound();

    wrongMeta->makeSound(); 

    delete wrongMeta;
    delete wrongCat;

    return 0;
}
