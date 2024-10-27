#include<stdio.h>

int main(){

    // This program is prepared by Aubaid Ahmed

    // Program to calculate illiteracy rate 

    int total_population =  1441981744;
    int total_women = (48.4/100) * total_population;  // total women
    int total_men = total_population-total_women; // total men
    int total_literacy_population = (85.95/100)*total_population; //total literate people
    
    // declaring variables for illiterate men/women
    int illiterate_men;
    int illiterate_women;

    printf("Total Men Population : %d\n",total_men);
    printf("Total Women Population : %d\n",total_women);

    // Literacy Rate 
    int literate_men = (80.95/100)*total_men;
    int literate_women = (62.84/100)* total_women;

    printf("Calculating illiterae Men Andd Women...\n");
    // Illiteracy Rate
    illiterate_men = total_men - literate_men;
    illiterate_women = total_women - literate_women;

    // printing 
    printf("illiterate Men : %d\n",illiterate_men);
    printf("illiterate Women : %d\n",illiterate_women);


    printf("24DIT063_Aubaid Ahmed");
    return 0;
}