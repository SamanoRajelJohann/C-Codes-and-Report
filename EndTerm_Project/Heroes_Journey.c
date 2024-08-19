#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

struct Characters {
    int HP;
    int ATK;
    int Mpwr;
    int Shield;
};

struct Enemies {
    int HP;
    int ATK;
    int Mpwr;
    int Shield;
};

struct Gamenumbers {
    int Healing;
};

void selectEnemies(struct Enemies *enemy, int isBoss) {
    // Enemy Types
    struct Enemies Goblin = {75, 10, 10, 5};
    struct Enemies Troll = {125, 15, 12, 8};
    struct Enemies Devil = {90, 12, 15, 4};
    struct Enemies Skeleton = {80, 9, 7, 3};
    struct Enemies Dragon = {175, 20, 20, 10};

    // Boss Types
    struct Enemies Hobgoblin = {175, 15, 13, 7};
    struct Enemies Eldertroll = {225, 18, 16, 12};
    struct Enemies Primaldevil = {180, 19, 40, 8};
    struct Enemies Lich = {160, 19, 15, 6};
    struct Enemies Fafnir = {375, 27, 30, 15};

    int enemyType;

    if (isBoss) {
        enemyType = rand() % 5 + 1;
        switch (enemyType) {
            case 1:
                *enemy = Hobgoblin;
                printf("||<<<<      Hobgoblin      ||   HP: %d   ||   ATK: %d   ||   Magic: %d   ||   Shield: %d    >>>>||\n",Hobgoblin.HP, Hobgoblin.ATK, Hobgoblin.Mpwr, Hobgoblin.Shield);
                printf("}{==============================================================================================}{\n");
                break;
            case 2:
                *enemy = Eldertroll;
                printf("||<<<<     Elder Troll     ||   HP: %d   ||   ATK: %d   ||   Magic: %d   ||   Shield: %d   >>>>||\n",Eldertroll.HP, Eldertroll.ATK, Eldertroll.Mpwr, Eldertroll.Shield);
                printf("}{==============================================================================================}{\n");
                break;
            case 3:
                *enemy = Primaldevil;
                printf("||<<<<     Primal Devil    ||   HP: %d   ||   ATK: %d   ||   Magic: %d   ||   Shield: %d    >>>>||\n",Primaldevil.HP, Primaldevil.ATK, Primaldevil.Mpwr, Primaldevil.Shield);
                printf("}{==============================================================================================}{\n");
                break;
            case 4:
                *enemy = Lich;           
                printf("||<<<<         Lich        ||   HP: %d   ||   ATK: %d   ||   Magic: %d   ||   Shield: %d    >>>>||\n",Lich.HP, Lich.ATK, Lich.Mpwr, Lich.Shield);
                printf("}{==============================================================================================}{\n");
                break;
            case 5:
                *enemy = Fafnir;
                printf("||<<<<        Fafnir       ||   HP: %d   ||   ATK: %d   ||   Magic: %d   ||   Shield: %d   >>>>||\n",Fafnir.HP, Fafnir.ATK, Fafnir.Mpwr, Fafnir.Shield);
                printf("}{==============================================================================================}{\n");
                break;
        }
    } else {
        enemyType = rand() % 5 + 1;
        switch (enemyType) {
            case 1:
                *enemy = Goblin;
                printf("||<<<<        Goblin       ||   HP: %d    ||   ATK: %d   ||   Magic: %d   ||   Shield: %d    >>>>||\n",Goblin.HP, Goblin.ATK, Goblin.Mpwr, Goblin.Shield);
                printf("}{==============================================================================================}{\n");
                break;
            case 2:
                *enemy = Troll;
                printf("||<<<<        Troll        ||   HP: %d   ||   ATK: %d   ||   Magic: %d   ||   Shield: %d    >>>>||\n",Troll.HP, Troll.ATK, Troll.Mpwr, Troll.Shield);
                printf("}{==============================================================================================}{\n");
                break;
            case 3:
                *enemy = Devil;
                printf("||<<<<        Devil        ||   HP: %d    ||   ATK: %d   ||   Magic: %d   ||   Shield: %d    >>>>||\n",Devil.HP, Devil.ATK, Devil.Mpwr, Devil.Shield);
                printf("}{==============================================================================================}{\n");
                break;
            case 4:
                *enemy = Skeleton;
                printf("||<<<<       Skeleton      ||   HP: %d    ||   ATK: %d    ||   Magic: %d    ||   Shield: %d    >>>>||\n", Skeleton.HP, Skeleton.ATK, Skeleton.Mpwr, Skeleton.Shield);
                printf("}{==============================================================================================}{\n");
                break;
            case 5:
                *enemy = Dragon;
                printf("||<<<<        Dragon       ||   HP: %d   ||   ATK: %d   ||   Magic: %d   ||   Shield: %d   >>>>||\n",Dragon.HP, Dragon.ATK, Dragon.Mpwr, Dragon.Shield);
                printf("}{==============================================================================================}{\n");
                break;
        }
    }
}

void selectCharacter(struct Characters *hero, char *character) {
    // Character Types
    struct Characters human = {100, 10, 25, 5};
    struct Characters beast = {120, 15, 20, 5};
    struct Characters dwarf = {80, 12, 20, 10};
    struct Characters elf = {90, 10, 35, 3};
    struct Characters orc = {150, 18, 15, 7};
    
    printf("\n[]==============================================================================================[]");
    printf("\n||<<<                                 Character Selection                                    >>>||");
    printf("\n||==============================================================================================||");
    printf("\n||<<<          [1] Human           ||  HP:   %d  ||  ATK:  %d ||  Magic: %d ||  Shield: %d   >>>||", human.HP, human.ATK, human.Mpwr, human.Shield);
    printf("\n||==============================================================================================||");
    printf("\n||<<<          [2] Beast           ||  HP:   %d  ||  ATK:  %d ||  Magic: %d ||  Shield: %d   >>>||", beast.HP, beast.ATK, beast.Mpwr,  beast.Shield);
    printf("\n||==============================================================================================||");
    printf("\n||<<<          [3] Dwarf           ||  HP:   %d   ||  ATK:  %d ||  Magic: %d ||  Shield: %d  >>>||", dwarf.HP, dwarf.ATK, dwarf.Mpwr,  dwarf.Shield);
    printf("\n||==============================================================================================||");
    printf("\n||<<<          [4] Elf             ||  HP:   %d   ||  ATK:  %d ||  Magic: %d ||  Shield: %d   >>>||", elf.HP, elf.ATK, elf.Mpwr,  elf.Shield);
    printf("\n||==============================================================================================||");
    printf("\n||<<<          [5] Orc             ||  HP:   %d  ||  ATK:  %d ||  Magic: %d ||  Shield: %d   >>>||", orc.HP, orc.ATK, orc.Mpwr,  orc.Shield);
    printf("\n[]==============================================================================================[]");
    printf("\n");
    do {
        printf("\n");
        printf("                                      Select Character: ");
        scanf(" %c", character);
        switch (*character) {
            case '1': // Human
                *hero = human;
                break;
            case '2': // Beast
                *hero = beast;
                break;
            case '3': // Dwarf
                *hero = dwarf;
                break;
            case '4': // Elf
                *hero = elf;
                break;
            case '5': // Orc
                *hero = orc;
                break;
            default:
                printf("}{==============================================================================================}{\n");
                printf("||<<<<                            Invalid Input, Please Try Again                           >>>>||\n");
                printf("}{==============================================================================================}{\n");
        }
    } while (*character < '1' || *character > '5');
}

void printStatus(struct Characters *hero, struct Enemies *enemy, int count) {  
    int playerHp = hero->HP;
    int enemyHp = enemy->HP;
    int playerAttackPower = hero->ATK;
    int enemyAttackPower = enemy->ATK;
    if (playerHp < 0) {
        playerHp = 0;
    }
    if (enemyHp < 0) {
        enemyHp = 0;
    }
    
    count = floor(log10(playerHp)) + 1;
    if (count == 3) {
    printf("\n[]==============================================================================================[]");
    printf("\n                              Player HP:  %d  ||   Enemy HP:  %d                              ", playerHp, enemyHp);
    printf("\n[]==============================================================================================[]");
    printf("\n");
    } else if (count == 2) {
    printf("\n[]==============================================================================================[]");
    printf("\n                              Player HP:  %d   ||   Enemy HP:  %d                              ", playerHp, enemyHp);
    printf("\n[]==============================================================================================[]"); 
    printf("\n");
    } else {
    printf("\n[]==============================================================================================[]");
    printf("\n                              Player HP:  %d    ||   Enemy HP:  %d                              ", playerHp, enemyHp);
    printf("\n[]==============================================================================================[]"); 
    printf("\n");
    }
}

void playerAttack(struct Characters *hero, struct Enemies *enemy, int crit) {
    int uniCrit = rand() % 10;
    int uniMiss = rand() % 10;

    if (enemy->HP > 0) { 
        if (uniMiss >= 1 && uniMiss <= 3) {
            printf("\n                                   You: Miss   ||");
        } else if (uniCrit >= 1 && uniCrit <= 3) {
            printf("\n                        You: Critical Attack   ||");
            enemy->HP -= crit;
        } else {
            printf("\n                                 You: Attack   ||");
            enemy->HP -= hero->ATK;
        }
    }  
}

void playerHeavyAttack(struct Characters *hero, struct Enemies *enemy, int crit) {
    int uniCrit = rand() % 10;
    int uniMiss = rand() % 10;

    if (enemy->HP > 0) { 
        if (uniMiss >= 1 && uniMiss <= 3) {
           printf("\n                                   You: Miss   ||");
        } else if (uniCrit >= 1 && uniCrit <= 3) {
            printf("\n                   You: Critical Heavy Attack  ||");
            enemy->HP -= (crit * 2);
        } else {
            printf("\n                           You: Heavy Attack   ||");
            enemy->HP -= (hero->ATK* 2);
        }
    }
}

void playerMagicAttack(struct Characters *hero, struct Enemies *enemy, int crit) {
    int uniCrit = rand() % 10;
    int uniMiss = rand() % 10;

       if (enemy->HP > 0) { 
            if (uniMiss >= 1 && uniMiss <= 3) {
               printf("\n                                   You: Miss   ||");
            } else if (uniCrit >= 1 && uniCrit <= 3) {
                printf("\n                  You: Critical Magic Attack   ||");
                enemy->HP -= (hero->Mpwr * 2);
            } else {
                printf("\n                           You: Magic Attack   ||");
                 enemy->HP -= hero->Mpwr;
            }
       }
}

void playerShield(struct Characters *hero, int crit) {   
    int uniCrit = rand() % 10;

    if (uniCrit >= 1 && uniCrit <= 3) {
        printf("\n                                 You: Shield   ||");
        hero->HP += (hero->Shield * 2);
    } else {
        printf("\n                                   You: Block  ||");
        hero->HP += hero->Shield;
    }
}

void usePotion(struct Gamenumbers *heal, struct Characters *hero, int *uniPotion) {
    heal->Healing = 75; 
    if (*uniPotion > 0) {
        printf("\n          You: Used Potion   ");
        hero->HP += heal->Healing;
        (*uniPotion)--; 

        printf("Potions Left: %d   ||", *uniPotion);
    } else {
        printf("\n                             No Potions Left   ||");
    }
}

void enemyAttack(struct Characters *hero, struct Enemies *enemy, int crit) {
    int uniCrit = rand() % 10;
    int uniMiss = rand() % 10;

        if (uniMiss >= 1 && uniMiss <= 3) {
            printf("   Enemy: Miss\n");
        } else if (uniCrit >= 1 && uniCrit <= 3) {
            printf("   Enemy: Critical Attack\n");
            hero->HP -= crit;
        } else {
            printf("   Enemy: Attack\n");
            hero->HP -= enemy->ATK;
        }
}

void enemyHeavyAttack(struct Characters *hero, struct Enemies *enemy, int crit) {
    int uniCrit = rand() % 10;
    int uniMiss = rand() % 10;

        if (uniMiss >= 1 && uniMiss <= 3) {
            printf("   Enemy: Miss\n");
        } else if (uniCrit >= 1 && uniCrit <= 3) {
            printf("   Enemy: Critical Heavy Attack\n");
            hero->HP -= (crit * 2);
        } else {
            printf("   Enemy: Heavy Attack\n");
            hero->HP -= (enemy->ATK* 2);
        }
}

void enemyMagicAttack(struct Characters *hero, struct Enemies *enemy, int crit) {
    int uniCrit = rand() % 10;
    int uniMiss = rand() % 10;
 
        if (uniMiss >= 1 && uniMiss <= 3) {
         printf("   Enemy: Miss\n");
         } else if (uniCrit >= 1 && uniCrit <= 3) {
         printf("   Enemy: Critical Magic Attack\n");
         hero->HP -= (enemy->Mpwr * 2);
         } else {
         printf("   Enemy: Magic Attack\n");
         hero->HP -= enemy->Mpwr;
         }

}

void enemyShield(struct Enemies *enemy, int crit) {
    int uniCrit = rand() % 10;

    if (uniCrit >= 1 && uniCrit <= 3) {
        printf("   Enemy: Shield\n");
        enemy->HP += (enemy->Shield * 2);
    } else {
        printf("   Enemy: Shield\n");
        enemy->HP += enemy->Shield;
    }
}

void enemyTurn(struct Characters *selectedHero, struct Enemies *selectedEnemy, int crit) {
    int uniCrit = rand() % 10;
    int uniMiss = rand() % 10;
    int enemyAction = rand() % 4 + 1;

    switch (enemyAction) {
        case 1:
            enemyAttack(selectedHero, selectedEnemy, crit);
            break;
        case 2:
            enemyHeavyAttack(selectedHero, selectedEnemy, crit);
            break;
        case 3:
            enemyMagicAttack(selectedHero, selectedEnemy, crit);
            break;
        case 4:
            enemyShield(selectedEnemy, crit);
            break;
    }
}

int main() {
    int count;
    int crit = 15;
    int isBoss = 0;
    int uniPotion = 5;
    int difficulty = 5;
    int restartGame = 1;
    int *ptrUniPotion = &uniPotion;

    struct Gamenumbers heal;
    struct Enemies selectedEnemy;
    struct Characters selectedHero;

    while (restartGame) {
        uniPotion = 5;
        srand(time(NULL));
        printf("}{==============================================================================================}{\n");
        printf("||<<<<                               Welcome to Heroes Journey                              >>>>||\n");
        printf("}{==============================================================================================}{\n");
        printf("\n");
        printf("}{==============================================================================================}{\n");
        printf("||<<<<                                   Select Difficulty                                  >>>>||\n");
        printf("||==============================================================================================||\n");
        printf("||<<<<                                      [1] Easy                                        >>>>||\n");
        printf("||==============================================================================================||\n");
        printf("||<<<<                                      [2] Normal                                      >>>>||\n");
        printf("||==============================================================================================||\n");
        printf("||<<<<                                      [3] Hard                                        >>>>||\n");
        printf("}{==============================================================================================}{\n");
        printf("\n");
        printf("                                            Input: ");
        char selecdifficulty;
        scanf(" %c", &selecdifficulty);

        switch (selecdifficulty) {
                    case '1':
                        difficulty = 5;
                        break;
                    case '2':
                        difficulty = 10;
                        break;
                    case '3':
                        difficulty = 15;
                        break;
                    default:
                        printf("Invalid Input\n");
                }

        char characterChoice;
        selectCharacter(&selectedHero, &characterChoice);

        for (int enemyCount = 1; enemyCount <= difficulty; enemyCount++) {

            if(enemyCount >=10 && enemyCount <=15){    
            printf("\n}{==============================================================================================}{\n");
            printf("||<<<<                                  Enemy Encounter %d                                  >>>>||\n", enemyCount);
            printf("||==============================================================================================||\n");
            } else {
            printf("\n}{==============================================================================================}{\n");
            printf("||<<<<                                  Enemy Encounter %d                                   >>>>||\n", enemyCount);
            printf("||==============================================================================================||\n");
            }
            if (enemyCount == 5) {
                isBoss = 1;
            } else if (enemyCount == 10) {
                isBoss = 1;
            } else if (enemyCount == 15){
                isBoss = 1;
            } else {
                isBoss = 0;     
            }
            
            selectEnemies(&selectedEnemy, isBoss);
            printStatus(&selectedHero, &selectedEnemy, count);

            while (selectedHero.HP > 0 && selectedEnemy.HP > 0) {
                printf("\n");
                printf("[]==============================================================================================[]\n");
                printf("||<<<<                                     [1] Attack                                       >>>>||\n");
                printf("[]==============================================================================================[]\n");
                printf("||<<<<                                     [2] Heavy Attack                                 >>>>||\n");
                printf("[]==============================================================================================[]\n");
                printf("||<<<<                                     [3] Magic                                        >>>>||\n");
                printf("[]==============================================================================================[]\n");
                printf("||<<<<                                     [4] Shield                                       >>>>||\n");
                printf("[]==============================================================================================[]\n");
                printf("||<<<<                                     [5] Potion                                       >>>>||\n");
                printf("[]==============================================================================================[]\n");

                char playerAction;
                printf("\n                                         Select Action: ");
                scanf(" %c", &playerAction);
                printf("\n");
                printf("][==============================================================================================][");    
                switch (playerAction) {
                    case '1':
                        playerAttack(&selectedHero, &selectedEnemy, crit);
                        break;
                    case '2':
                        playerHeavyAttack(&selectedHero, &selectedEnemy, crit);
                        break;
                    case '3':
                        playerMagicAttack(&selectedHero, &selectedEnemy, crit);
                        break;
                    case '4':
                        playerShield(&selectedHero, crit);
                        break;
                    case '5':
                        usePotion(&heal, &selectedHero, ptrUniPotion);
                        break;
                    default:
                        printf("Invalid Input\n");
                        break;
                }
                
                enemyTurn(&selectedHero, &selectedEnemy, crit);
                printf("][==============================================================================================][\n");
                printStatus(&selectedHero, &selectedEnemy, count);

                if (selectedHero.HP <= 0) {
                    printf("\n  I::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::I \n");
                    printf("  }                                          Game Over                                         {\n");
                    printf("  I::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::I\n");
                    printf("\n");
                    break;
                }

                if (selectedEnemy.HP <= 0) {
                    printf("\n  I::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::I \n");
                    printf("  }                                         Enemy Slayed                                       {\n");
                    printf("  I::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::I \n");
                    break;
                }
            }

            if (selectedHero.HP <= 0) {
                break; 
            }
        }

        if (selectedHero.HP > 0) {
             printf("\n  I::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::I \n");
             printf("  |                     Congratulations! You have completed Heroes Journey                     |\n");
             printf("  I::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::I \n");
             printf("\n");
        }

        printf("  I============================================================================================I\n");
        printf("  |<<<<                                  Play Again (Y/N)                                 >>>> |\n");
        printf("  I============================================================================================I\n");
        printf("\n                                           Input: ");
        char input[2];
        scanf(" %1s", input);
        printf("\n");

        if (input[0] == 'n' || input[0] == 'N') {
            restartGame = 0;
        }
    }
    printf("\n  I::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::I \n");
    printf("  |                              Thanks for Playing Heroes Journey                             |\n");
    printf("  I::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::I\n");
    printf("\n");
    return 0;

}
