#include <stdio.h>
/*
#define SUIT        int
#define CLUBS       0
#define DIAMONDS    1
#define HEARTS      2
#define SPADES      3
*/

enum suit {CLUBS = 0, DIAMONDS = 2, HEARTS, SPADES = 8};
//enum t {HEARTS, ABCD};
typedef enum day {MON, TUE, WED} Day;

struct card_t {
    enum suit s;
    char rank[3];
};

int main() {
    /*
    int s;  // 2 is hearts, 0 is clubs
    s = 2; 
    printf("s is: %s\n", (s == 2) ? "Hearts" : "Others");
    */

    /*
    SUIT s;
    s = HEARTS;
    printf("s: %d (%s)\n", s, (s == HEARTS) ? "Hearts" : "Others");
    */

    enum suit s = HEARTS;
    printf("s: %d (%s)\n", s, (s == HEARTS) ? "Hearts" : "Others");

    enum suit s1 = CLUBS;
    Day d1 = MON;

    if (s1 == d1)
        printf("s1 and d1 are the same\n");
    else
        printf("s1 and d1 are different\n");
    struct card_t cards[] = {{HEARTS, "3"}, {CLUBS, "A"},
                             {SPADES, "10"}};

    for (int i = 0; i < 3; i++) {
        switch(cards[i].s) {
            case CLUBS:     printf("CLUBS\t\t%s\n", cards[i].rank);
                            break;
            case DIAMONDS:  printf("DIAMONDS\t%s\n", cards[i].rank);
                            break;
            case HEARTS:    printf("HEARTS\t\t%s\n", cards[i].rank);
                            break;
            case SPADES:    printf("SPADES\t\t%s\n", cards[i].rank);
                            break;
        }
    }

    return 0;
}