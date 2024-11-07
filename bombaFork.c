#include <unistd.h>
#include <stdio.h>


int main(){ //compiling this will kill the codespace
    int a;
    while(1){
        a = fork();
    }
}