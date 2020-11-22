//
//  main.c
//  Chenxi
//
//  Created by Dimitri Volkmann on 11/20/20.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    int n=0, i=0;
    int g[] = {36,58,1,46,23,5,16,65,2,41,
        2,7,1,37,0,11,16,2,21,16};
    
    while(1) {
        switch(n) {
            case 0: {printf("Million ");
                n=1;
                break;}
            case 1: {n=((g[3]%g[5])==g[2])?3:2;
                break;}
            case 2: {printf("From Christian and Jas!\n");
                return 0;}
            case 3: {printf("Thanks for your ");
                n=4;
                g[n]=rand()*g[11]+g[8];
                break;}
            case 4:{printf("contributions, Chenxi! [%d]\n", i);
                n=5;
                break;}
            case 5: {i=i+g[3*i%6]%5;
                n=(i<1000000)?0:2;
                break; }
            }
    }
    
    return 0;
}
