/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:24:19 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/12 11:35:56 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"


int main()
{
    // std::cout<<"----------------------TEST FROM SUBJECT-------------------------------------"<<std::endl;
    // {
    //     IMateriaSource* src = new MateriaSource();
    //     src->learnMateria(new Ice());
    //     src->learnMateria(new Cure());

    //     ICharacter* me = new Character("me");

    //     AMateria* tmp;
    //     tmp = src->createMateria("ice");
    //     me->equip(tmp);
    //     // delete tmp;
    //     tmp = src->createMateria("cure");
    //     me->equip(tmp);

    //     ICharacter* bob = new Character("bob");

    //     me->use(0, *bob);
    //     me->use(1, *bob);

    //     delete bob;
    //     delete me;
    //     delete src;
    // }
    std::cout<<"----------------------TEST WITH UNIQUIPING MATERIA---------------------------"<<std::endl;
    {
        
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
       // ICharacter* me = new Character("monster");
        Character me("monster");
        
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me.equip(tmp);
        me.use(0, me);
        me.unequip(0);
        me.equip(tmp);
        me.use(0, me);
       // Character& a = me;
        ICharacter *s = new Character(me);
        s->use(0, *s);        

        // delete tmp;
        //delete me;
        delete s;
        delete src;

        // me->equip(tmp);
        // me->use(0, *me);
        // delete tmp;
        // delete me;
        // delete src;
        // tmp = src->createMateria("ice");
        // me->equip(tmp);
        // delete(tmp);
        // tmp = src->createMateria("cure");
        // me->equip(tmp);
        // delete(tmp);
        // tmp = src->createMateria("cure");
        // me->equip(tmp);
        // delete(tmp);
        // tmp = src->createMateria("ice");
        // me->equip(tmp);
        // delete(tmp);
        // ICharacter* bob = new Character("hulk");
        // me->use(0, *bob);
        // me->use(1, *bob);
        // me->use(2, *bob);
        // me->use(3, *bob);
        // me->unequip(1);
        // me->unequip(2);
        // delete bob;
    }
}
