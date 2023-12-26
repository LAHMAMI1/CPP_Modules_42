/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 21:30:03 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/26 11:23:16 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <set>

int main()
{
    {    
        // Test case 1: Testing with vector
        std::vector<int> vec;
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(3);
        vec.push_back(4);
        vec.push_back(5);
        try
        {
            int a = easyfind(vec, 3); // 3 is found at index 2 in the vector
            std::cout << a << std::endl;
        }
        catch(const std::runtime_error& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    {    
        // Test case 2: Testing with list
        std::list<int> lst;
        lst.push_back(10);
        lst.push_back(20);
        lst.push_back(30);
        lst.push_back(40);
        lst.push_back(50);
        try
        {
            int b = easyfind(lst, 40); // 40 is found at index 3 in the list
            std::cout << b << std::endl;
        }
        catch(const std::runtime_error& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    {    
        // Test case 3: Testing with set
        std::set<int> st;
        st.insert(100);
        st.insert(200);
        st.insert(300);
        st.insert(400);
        st.insert(500);
        try
        {
            int c = easyfind(st, 200); // 200 is found in the set
            std::cout << c << std::endl;
        }
        catch(const std::runtime_error& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    {    
        // Test case 4: Testing with empty container
        std::vector<int> emptyVec;
        try {
            easyfind(emptyVec, 10); // 10 is not found in the empty vector
        } catch (const std::runtime_error& e) {
            // Exception should be thrown
            std::cerr << e.what() << '\n';
        }
    }

    {    
        // Test case 5: Testing with container that doesn't contain the value
        std::vector<int> vec2;
        vec2.push_back(1);
        vec2.push_back(2);
        vec2.push_back(3);
        vec2.push_back(4);
        vec2.push_back(5);
        try {
            easyfind(vec2, 10); // 10 is not found in the vector
        } catch (const std::runtime_error& e) {
            // Exception should be thrown
            std::cerr << e.what() << '\n';
        }
    }

    return 0;
}