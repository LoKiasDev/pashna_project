#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    int classroom;
    printf("Hello , what is your classroom ? \n");
    printf("1 : 4TTI1\n2 : 4TI2\nResponse:");
    scanf("%d", &classroom);
        if (classroom == 1){
            ClassroomTTI1();
        }
        else if (classroom == 2){
            ClassroomTTI2();
        }
        else{
            printf("You dont choise a good number , choice a another one plz !");
        }
}

void ClassroomTTI1(){
    int student; int money = 500; int food; int many; int fries = 5; int hamburger = 10; int totprize;
//Systeme de logs pour savoir qui à fait quoi à quelle jours/date/anner selon l'horloge interne
    FILE* fichier = NULL;
    fichier = fopen("logs/logs.txt", "a");
    time_t t;
    struct tm *tb;
    t = time(NULL);
    tb = localtime(&t);
    fprintf(fichier, "\n\n%s 1 guys at TTI1 open the module (ClassroomTTI1)", ctime(&t));

//Choix de l'eleve
    printf("\nWho student are you ?");
    printf("\n1 : Jacky\n2 : LoKias_\n3 : Jason\nResponse :");
    scanf("%d", &student);
        if (student == 1){
//Money des eleves !
            fprintf(fichier , "\n\n%s Jacky want to use money (ClassroomTTI1)", ctime(&t));
//Choix de la nouriture
            printf("\nHello Jacky , You have actually %d $, what do you want ?", money);
            printf("\n1: French fries(5$) \n2: Hamburger(10$)\nResponse : ");
            scanf("%d", &food);
                if (food == 1){
//Nombre de fois qu'on prends la bouffe
                    printf("\nyou choise french fries but how many ?\nReponse:");
                    scanf("%d", &many);
//Payement
                totprize = fries * many;
                if (money > totprize){
                            printf("\nYou go to pay like %d", totprize);
                            money = money - totprize;
                            printf("\nNow , you have %d", money);
                            fprintf(fichier, "\n\n%s JacKy take %d fries for %d $ (ClassroomTTI1)", ctime(&t), many, totprize);
                            fclose(fichier);
                        }
                        else {
                            printf("\nYou don't have any money for buy this ! go away mother fuck");
                            fprintf(fichier, "\n\n%s Jacky don't have any money to buy %d fries for %d $(ClassroomTTI1)", ctime(&t), many, totprize);
                            fclose(fichier);
                        }
                }
                else if(food == 2){
                    printf("\nyou choise hamburger but how many ?\nReponse:");
                    scanf("%d", &many);
                    totprize = hamburger * many;
                        if (money > totprize){
                            printf("\nYou go to pay like %d", totprize);
                            money = money - totprize;
                            printf("\nNow , you have %d", money);
                            fprintf(fichier, "\n\n%s JacKy take %d hamburger for %d $ (ClassroomTTI1)", ctime(&t), many, totprize);
                            fclose(fichier);
                        }
                        else {
                            printf("\nYou don't have any money for buy this ! go away mother fuck");
                            fprintf(fichier, "\n\n%s Jacky don't have any money to buy %d hamburger for %d $(ClassroomTTI1)", ctime(&t), many, totprize);
                            fclose(fichier);
                        }
                }
                else{
                    printf("Choice a food ! ");
                }
        }
//Eleve numero 2
        else if (student == 2){
             fprintf(fichier , "\n\n%s LoKias_ want to use money (ClassroomTTI1)", ctime(&t));
            //Choix de la nouriture
            printf("\nHello LoKias_ , You have actually %d $, what do you want ?", money);
            printf("\n1: French fries(5$) \n2: Hamburger(10$)\nResponse : ");
            scanf("%d", &food);
                if (food == 1){
//Nombre de fois qu'on prends la bouffe
                    printf("\nyou choise french fries but how many ?\nReponse:");
                    scanf("%d", &many);
//Payement
                    totprize = fries * many;
                        if (money > totprize){
                            printf("\nYou go to pay like %d", totprize);
                            money = money - totprize;
                            printf("\nNow , you have %d", money);
                            fprintf(fichier, "\n\n%s LoKias_ take %d fries for %d $ (ClassroomTTI1)", ctime(&t), many, totprize);
                            fclose(fichier);
                        }
                        else {
                            printf("\nYou don't have any money for buy this ! go away mother fuck");
                            fprintf(fichier, "\n\n%s LoKias_ don't have any money to buy %d fries for %d $ (ClassroomTTI1)", ctime(&t), many, totprize);
                            fclose(fichier);
                        }
                }
                else if(food == 2){
                    printf("\nyou choise hamburger but how many ?\nReponse:");
                    scanf("%d", &many);
                    totprize = hamburger * many;
                        if (money > totprize){
                            printf("\nYou go to pay like %d", totprize);
                            printf("\nNow , you have %d", money);
                            fprintf(fichier, "\n\n%s LoKias_ take %d hamburger for %d $ (ClassroomTTI1)", ctime(&t), many, totprize);
                            fclose(fichier);
                        }
                        else {
                            printf("\nYou don't have any money for buy this ! go away mother fuck");
                            fprintf(fichier, "\n\n%s LoKias_ don't have any money to buy %d hamburger for %d $ (ClassroomTTI1)", ctime(&t), many, totprize);
                            fclose(fichier);
                        }
                }
                else{
                    printf("Choice a food ! ");
                }
        }
//Eleve numero 3
        else if (student == 3){
             fprintf(fichier , "\n\n%s Jason want to use money (ClassroomTTI1)", ctime(&t));
            //Choix de la nouriture
            printf("\nHello Jason , You have actually %d $, what do you want ?", money);
            printf("\n1: French fries(5$) \n2: Hamburger(10$)\nResponse : ");
            scanf("%d", &food);
                if (food == 1){
//Nombre de fois qu'on prends la bouffe
                    printf("\nyou choise french fries but how many ?\nReponse:");
                    scanf("%d", &many);
//Payement
                    totprize = fries * many;
                        if (money > totprize){
                            printf("\nYou go to pay like %d", totprize);
                            money = money - totprize;
                            printf("\nNow , you have %d", money);
                            fprintf(fichier, "\n\n%s Jason take %d fries for %d $ (ClassroomTTI1)", ctime(&t), many, totprize);
                            fclose(fichier);
                        }
                        else {
                            printf("\nYou don't have any money for buy this ! go away mother fuck");
                            fprintf(fichier, "\n\n%s Jason don't have any money to buy %d fries for %d $ (ClassroomTTI1)", ctime(&t), many, totprize);
                            fclose(fichier);
                        }
                }
                else if(food == 2){
                    printf("\nyou choise hamburger but how many ?\nReponse:");
                    scanf("%d", &many);
                    totprize = hamburger * many;
                        if (money > totprize){
                            printf("\nYou go to pay like %d", totprize);
                            money = money - totprize;
                            printf("\nNow , you have %d", money);
                            fprintf(fichier, "\n\n%s Jason take %d hamburger for %d $ (ClassroomTTI1)", ctime(&t), many, totprize);
                            fclose(fichier);
                        }
                        else {
                            printf("\nYou don't have any money for buy this ! go away mother fuck");
                            fprintf(fichier, "\n\n%s Jason don't have any money to buy %d hambuger for %d $ (ClassroomTTI1)", ctime(&t), many, totprize);
                            fclose(fichier);
                        }
                }
                else{
                    printf("Choice a food ! ");
                }
        }
}

void ClassroomTTI2(){
    int student; int money = 500; int food; int many; int fries = 5; int hamburger = 10; int totprize;
//Systeme de logs pour savoir qui à fait quoi à quelle jours/date/anner selon l'horloge interne
    FILE* fichier = NULL;
    fichier = fopen("logs/logs.txt", "a");
    time_t t;
    struct tm *tb;
    t = time(NULL);
    tb = localtime(&t);
    fprintf(fichier, "\n\n%s 1 guys at TTI2 open the module (ClassroomTTI2)", ctime(&t));

//Choix de l'eleve
    printf("\nWho student are you ?");
    printf("\n1 : Lucas\n2 : Axel\n3 : Maxime\nResponse :");
    scanf("%d", &student);
        if (student == 1){
//Money des eleves !
            fprintf(fichier , "\n\n%s Lucas want to use money (ClassroomTTI2)", ctime(&t));
//Choix de la nouriture
            printf("\nHello Lucas , You have actually %d $, what do you want ?", money);
            printf("\n1: French fries(5$) \n2: Hamburger(10$)\nResponse : ");
            scanf("%d", &food);
                if (food == 1){
//Nombre de fois qu'on prends la bouffe
                    printf("\nyou choise french fries but how many ?\nReponse:");
                    scanf("%d", &many);
//Payement
                totprize = fries * many;
                if (money > totprize){
                            printf("\nYou go to pay like %d", totprize);
                            money = money - totprize;
                            printf("\nNow , you have %d", money);
                            fprintf(fichier, "\n\n%s Lucas take %d fries for %d $ (ClassroomTTI1)", ctime(&t), many, totprize);
                            fclose(fichier);
                        }
                        else {
                            printf("\nYou don't have any money for buy this ! go away mother fuck");
                            fprintf(fichier, "\n\n%s Lucas don't have any money to buy %d fries for %d $(ClassroomTTI2)", ctime(&t), many, totprize);
                            fclose(fichier);
                        }
                }
                else if(food == 2){
                    printf("\nyou choise hamburger but how many ?\nReponse:");
                    scanf("%d", &many);
                    totprize = hamburger * many;
                        if (money > totprize){
                            printf("\nYou go to pay like %d", totprize);
                            money = money - totprize;
                            printf("\nNow , you have %d", money);
                            fprintf(fichier, "\n\n%s Lucas take %d hamburger for %d $ (ClassroomTTI2)", ctime(&t), many, totprize);
                            fclose(fichier);
                        }
                        else {
                            printf("\nYou don't have any money for buy this ! go away mother fuck");
                            fprintf(fichier, "\n\n%s Lucas don't have any money to buy %d hamburger for %d $(ClassroomTTI2)", ctime(&t), many, totprize);
                            fclose(fichier);
                        }
                }
                else{
                    printf("Choice a food ! ");
                }
        }
//Eleve numero 2
        else if (student == 2){
            fprintf(fichier , "\n\n%s Axel want to use money (ClassroomTTI2)", ctime(&t));
            //Choix de la nouriture
            printf("\nHello Axel , You have actually %d $, what do you want ?", money);
            printf("\n1: French fries(5$) \n2: Hamburger(10$)\nResponse : ");
            scanf("%d", &food);
                if (food == 1){
//Nombre de fois qu'on prends la bouffe
                    printf("\nyou choise french fries but how many ?\nReponse:");
                    scanf("%d", &many);
//Payement
                    totprize = fries * many;
                        if (money > totprize){
                            printf("\nYou go to pay like %d", totprize);
                            money = money - totprize;
                            printf("\nNow , you have %d", money);
                            fprintf(fichier, "\n\n%s Axel take %d fries for %d $ (ClassroomTTI2)", ctime(&t), many, totprize);
                            fclose(fichier);
                        }
                        else {
                            printf("\nYou don't have any money for buy this ! go away mother fuck");
                            fprintf(fichier, "\n\n%s Axel don't have any money to buy %d fries for %d $ (ClassroomTTI2)", ctime(&t), many, totprize);
                            fclose(fichier);
                        }
                }
                else if(food == 2){
                    printf("\nyou choise hamburger but how many ?\nReponse:");
                    scanf("%d", &many);
                    totprize = hamburger * many;
                        if (money > totprize){
                            printf("\nYou go to pay like %d", totprize);
                            money = money - totprize;
                            printf("\nNow , you have %d", money);
                            fprintf(fichier, "\n\n%s Axel take %d hamburger for %d $ (ClassroomTTI1)", ctime(&t), many, totprize);
                            fclose(fichier);
                        }
                        else {
                            printf("\nYou don't have any money for buy this ! go away mother fuck");
                            fprintf(fichier, "\n\n%s Axel don't have any money to buy %d hamburger for %d $ (ClassroomTTI1)", ctime(&t), many, totprize);
                            fclose(fichier);
                        }
                }
                else{
                    printf("Choice a food ! ");
                }
        }
//Eleve numero 3
        else if (student == 3){
             fprintf(fichier , "\n\n%s Maxime want to use money (ClassroomTTI2)", ctime(&t));
            //Choix de la nouriture
            printf("\nHello Maxime , You have actually %d $, what do you want ?", money);
            printf("\n1: French fries(5$) \n2: Hamburger(10$)\nResponse : ");
            scanf("%d", &food);
                if (food == 1){
//Nombre de fois qu'on prends la bouffe
                    printf("\nyou choise french fries but how many ?\nReponse:");
                    scanf("%d", &many);
//Payement
                    totprize = fries * many;
                        if (money > totprize){
                            printf("\nYou go to pay like %d", totprize);
                            money = money - totprize;
                            printf("\nNow , you have %d", money);
                            fprintf(fichier, "\n\n%s Maxime take %d fries for %d $ (ClassroomTTI1)", ctime(&t), many, totprize);
                            fclose(fichier);
                        }
                        else {
                            printf("\nYou don't have any money for buy this ! go away mother fuck");
                            fprintf(fichier, "\n\n%s Maxime don't have any money to buy %d fries for %d $ (ClassroomTTI1)", ctime(&t), many, totprize);
                            fclose(fichier);
                        }
                }
                else if(food == 2){
                    printf("\nyou choise hamburger but how many ?\nReponse:");
                    scanf("%d", &many);
                    totprize = hamburger * many;
                        if (money > totprize){
                            printf("\nYou go to pay like %d", totprize);
                            money = money - totprize;
                            printf("\nNow , you have %d", money);
                            fprintf(fichier, "\n\n%s Maxime take %d hamburger for %d $ (ClassroomTTI1)", ctime(&t), many, totprize);
                            fclose(fichier);
                        }
                        else {
                            printf("\nYou don't have any money for buy this ! go away mother fuck");
                            fprintf(fichier, "\n\n%s Jason don't have any money to buy %d hambuger for %d $ (ClassroomTTI1)", ctime(&t), many, totprize);
                            fclose(fichier);
                        }
                }
                else{
                    printf("Choice a food ! ");
                }
        }
}
