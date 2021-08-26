#include <iostream>
#include <random>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;


int main(){
    srand (time(NULL));
    int n_rand =2;
    
    // test cases
    cout<< n_rand<< "\n";

    int * mases = new int[n_rand];
    int * vx = new int[n_rand];    int * vy = new int[n_rand];    int * vz = new int[n_rand];
    float v[3];
    int total_mass=0;
    // main loop
    for(size_t i=0; i<n_rand; ++i){
        mases[i] = rand() % 100 + 1;
        vx[i] = rand() % 100 + 1; vy[i] = rand() % 100 + 1; vz[i] = rand() % 100 + 1;
        cout << mases[i] << " " << vx[i] << " " << vy[i] << " " << vz[i] << "\n";
    }
    cout<<"OUTPUT\n";
    for(size_t i=0; i<n_rand; ++i)total_mass+=mases[i];
    for(size_t i=0; i<n_rand; ++i){
        v[0] += mases[i] * vx[i];
        v[1] += mases[i] * vy[i];
        v[2] += mases[i] * vz[i];
    }
    v[0] = v[0] / float(total_mass);
    v[1] = v[1] / float(total_mass);
    v[2] = v[2] / float(total_mass);

    for(size_t i=0; i<3; ++i) cout<< v[i] << "\n"; 

        
    return 0;
}