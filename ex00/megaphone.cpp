/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovais <jnovais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:18:42 by jnovais           #+#    #+#             */
/*   Updated: 2026/10/22 10:07:15 by jnovais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

class Megaphone
{
    public:
        Megaphone() {}
        ~Megaphone() {}

        void stdoutNoise()
        {
            std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        }

        void stdoutDynamic(std::string words)
        {
            for (size_t i = 0; i < words.length(); i++)
            {
                std::cout << static_cast<char>(std::toupper(static_cast<unsigned char>(words[i])));
            }
        }
};

int main(int argc, char **argv)
{
    Megaphone megaphone;

    if (argc == 1)
    {
        megaphone.stdoutNoise();
        return (0);
    }
    for (int i = 1; i < argc; i++)
        megaphone.stdoutDynamic(argv[i]);
    std::cout << std::endl;

    return (0);
}
