#include <iostream>
#include <random>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;


int main(){
    srand (time(NULL));
    int n_rand = 34;
    
    // test cases
    cout<< n_rand<< "\n";

  
    int * vx = new int[n_rand];    int * vy = new int[n_rand];    int * vz = new int[n_rand];
    int * ux = new int[n_rand];    int * uy = new int[n_rand];    int * uz = new int[n_rand];

    // main loop
    for(size_t i=0; i<n_rand; ++i){
        vx[i] = rand() % 100 + 1; vy[i] = rand() % 100 + 1; vz[i] = rand() % 100 + 1;
        ux[i] = rand() % 100 + 1; uy[i] = rand() % 100 + 1; uz[i] = rand() % 100 + 1;     
        cout << vx[i] << " " << vy[i] << " " << vz[i] <<" " << ux[i] << " " << uy[i] << " " << uz[i] << "\n";
    }
    cout<<"OUTPUT\n";

    for(size_t i=0; i<n_rand; ++i){
        int a, b, c;
        a = vx[i]*uz[i] - vz[i]*uy[i]; b = - vx[i]*uz[i] + vz[i]*ux[i]; c = vx[i]*uy[i] - vy[i]*ux[i];
        cout << a <<" " << b << " " << c << "\n";   
    }

        

        
    return 0;
}