1. Définir la constante int NumColumns = 5
2. Définir la constante int NumMin = 2
3. Définir la constante int NumMax = 1000
4. Définir la variable bool end = false;
5. do

   1. Demander "Quelle est votre valeur limite" à l'utilisateur
   2. Définir int limit;
   3. Récupérer limit la valeur de l'utilisateur

      1. Si limit < NumMin || limit > NumMax => redemander la valeur (5.1.)
   4. Vider cin
   5. Définir la variable int lastNum;
   6. Boucle for(; lastNum <= limit;)

      1. Boucle for(x = 0; x <= NumColumns || lastNum <= limit; x++)

         1. Définir bool isPrime = true;
         2. boucle for(;lastNum <= limit; lastNum++)

            1. Boucle for(int n = 2; n < lastNum; n++)

               1. si lastNum%n == 0 

                  1. isPrime = false;
                  2. break;
            2. si isPrime

               1. cout << lastNum << " ";
               2. break;
      2. cout << endl;
   7. Demander "Voulez-vous continuer (O/N)
   8. Définir char ans;
   9. Récupérer ans la réponse de l'utilisateur

      1. Si ans != O || ans != N => redemander si il veut continuer (5.7.)
6. tant que !end
7. Afficher "Fin du programme"

