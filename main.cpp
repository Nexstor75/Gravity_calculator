#include <iostream>

float calculateFreeFall(int height);//formula for the free fall without terminal velocity or air resistance
int distanceFloor(int height, int time);//calculate the distance relative to the flor uses calculafreefall
int timer(int x);//return x+1

int main(){
    int a{1500};// Height of the building
    int cont{0};// Simple timer that act like seconds passing in our code
    

    //gets the input of the user
    std::cout << "please insert the height of the building in meters" << '\n';
    std::cin >> a;
    //although it could be put in a separete function it is only used once soo I
    //decided to put in the main. Coment out for debbugin purposes or manual insertion
    //of the data.

    //while examinates if the ball has already touched the ground. If not it proceeds.
    while ((distanceFloor(a,cont))!=0){
        std::cout << "distance to the floor "<<cont<<" seconds:"<< distanceFloor(a,cont)<<'\n';
        cont=timer(cont);
    }
    //final output soo we can approximate when the ball hits the ground
    std::cout << "The ball hits the ground in aproximatte "<<cont<< " seconds" << '\n';
    return(0);
}