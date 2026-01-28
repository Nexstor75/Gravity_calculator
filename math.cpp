const double gravity = 9.8; // Gravitational constant of planet earth

float calculateFreeFall(int tempo){
    float r{0};
    r = ((tempo*tempo)*gravity)/2; //simple formula for aproximating accelaration
    return (r);
}
int timer(int x){
    return (x+1); // modularization made just for experimantation with the limits of the language
}

int distanceFloor(int height, int timer){
    int x{0};
    x=((height-(calculateFreeFall(timer))));// distance to the flor
    if (x>0){
        return(x);
    }else{
        return(0);  // If we want to know where the balls at lets say, 2000 seconds on a building
                    // of 500 meters it will return 0 cause the ball would have been stationary on
                    // the ground
    }

}