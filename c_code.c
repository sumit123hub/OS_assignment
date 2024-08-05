#include <stdio.h>
#include <stdlib.h>

// initialize a mutex to 1
int mutex = 1;

// number of full slots as 0
int full = 0;

// number of empty slots as size of buffer
int empty = 10, x = 0;

// function to produce an item and add it to the buffer
void producer() {
    --mutex;  // decrease mutex by 1
    ++full;   // increase number of full slots by 1
    --empty;  // decrease empty slots
    x++;
    printf("\nProducer produces item %d", x);
    ++mutex;
}

// function to consume an item and remove buffer
void consumer() {
    --mutex;
    --full;
    ++empty;
    printf("\nConsumer consumes item %d", x);
    x--;
    ++mutex;
}

int main() {
    int n, i;
    printf("\n1. Press 1 for Producer");
    printf("\n2. Press 2 for Consumer");
    printf("\n3. Press 3 for Exit");

    while (1) {
        printf("\nEnter your choice: ");
        scanf("%d", &n);
        // switch cases
        switch (n) {
            case 1:
                if ((mutex == 1) && (empty != 0)) {
                    producer();
                } else {
                    printf("Buffer is full");
                }
                break;

            case 2:
                if ((mutex == 1) && (full != 0)) {
                    consumer();
                } else {
                    printf("Buffer is empty!");
                }
                break;

            case 3:
                exit(0);
                break;

            default:
                printf("Invalid choice");
        }
    }
    return 0;
}