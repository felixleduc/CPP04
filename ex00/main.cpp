/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:54:25 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/01 13:27:00 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete  meta;
    delete  i;
    delete  j;

    const   WrongAnimal* b_class = new WrongAnimal();
    const   WrongAnimal* d_class = new WrongCat();
    
    std::cout << b_class->getType() << " " << std::endl;
    std::cout << d_class->getType() << " " << std::endl;
    b_class->makeSound();
    d_class->makeSound();

    delete  b_class;
    delete  d_class;
    return ( 0 );
}
