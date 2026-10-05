#include <stdio.h>
#include <time.h>

int main() {
    time_t currentTime;
    
    // 1. Get the current calendar time
    time(&currentTime); 
    
    // 2. Convert it to local time string and print
    printf("Current local time: %s", ctime(&currentTime)); 
    
    return 0;
}