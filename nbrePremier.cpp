/*
  ------------------------------------------------------------------------------
  Fichier     : nbre_1er.cpp
  Auteur(s)   : Eliott Deriaz
  Date        : 07.10.2026

  But         : identifier tous les nombres premiers compris
                et une valeur choisie par l'utilisateur

  Remarque(s) : les erreurs de saisie ne sont pas vérifiées

  Compilateur : gcc
  ------------------------------------------------------------------------------
*/
#include <iostream>
#include <iomanip>
#include <limits>
#include <cstdlib>

int main()
{
    const int numColumns = 5;
    const int numMin = 2;
    const int numMax = 1000;

    bool end = false;
    do
    {
        //Ask for limit value
        int limit = 0;
        while (true)
        {
            std::cout << "Quelle est votre valeur limite (" << numMin << "-" << numMax << ") : ";
            std::cin >> limit;

            if (limit >= numMin && limit <= numMax)
                break;

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        int lastNum = 2;
        for (; lastNum <= limit; )
        {
            for (int x = 0; x < numColumns && lastNum <= limit; x++)
            {
                bool isPrime = false;
                for (; lastNum <= limit && !isPrime; ++lastNum)
                {
                    isPrime = true;
                    for (int n = 2; n < lastNum; n++)
                    {
                        if (lastNum % n == 0)
                        {
                            //when at least one number can devide last num last num is not a prime
                            isPrime = false;
                            break;
                        }
                    }

                    if (isPrime)
                    {
                        std::cout << std::setw(10) << lastNum;
                    }
                }

            }
            std::cout << std::endl;
        }

        //Ask for a new limit
        const char cont = 'O';
        const char stop = 'N';
        while (true)
        {
            char answer;
            std::cout << "Voulez-vous réessayer (" << cont << "/" << stop << ") ? : ";
            std::cin >> answer;

            if (answer == cont)
                break;

            if (answer == stop)
            {
                end = true;
                break;
            }

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    while (!end);

    std::cout << "Fin du programme." << std::endl;

    return EXIT_SUCCESS;
}

