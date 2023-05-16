/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:08:59 by nradal            #+#    #+#             */
/*   Updated: 2023/05/15 17:15:35 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main()
{
    // MAIN CP
    std::cout << "MAIN CP" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    j->makeSound();
    i->makeSound();
    
    delete j;//should not create a leak
    delete i;
    
    // MAIN SUBJECT
    std::cout << "\n\n\n\n\n" << "MAIN SUBJECT" << std::endl;
    Animal *array[10];
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            array[i] = new Dog();
        else
            array[i] = new Cat();
    }

    for (int i = 0; i < 10; i++)
    {
        delete (array[i]);
    }

    // DEAP CP
    std::cout << "\n\n\n\n\n" << "DEAP CP" << std::endl;
    Dog d1;
    Dog d2;
    Cat c1;
    Cat c2;

    std::cout << "Dog" << std::endl << "Before assignation :" << std::endl;
    d1.printIdeas(5);
    d2.printIdeas(5);
    
    d2 = d1;
    std::cout << "After assignation :" << std::endl;
    d1.printIdeas(5);
    d2.printIdeas(5);

    std::cout << "Cat" << std::endl << "Before assignation :" << std::endl;
    c1.printIdeas(5);
    c2.printIdeas(5);
    
    c2 = c1;
    std::cout << "After assignation :" << std::endl;
    c1.printIdeas(5);
    c2.printIdeas(5);
      
    return (0);
}