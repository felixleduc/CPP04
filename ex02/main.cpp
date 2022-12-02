/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:54:25 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/01 17:23:09 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

static void    init_array( int half_size ) {
    Animal  *meta[half_size * 2];

    for ( int i = 0; i < half_size; i++ )
    {
        meta[i] = new Dog();
        meta[i + half_size] = new Cat();
    }
    for ( int i = 0; i < 2 * half_size; i++ )
        delete  meta[i];
}

int main() {
    init_array( 5 );

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j; //should not create a leak
    delete i;

    return ( 0 );
}
