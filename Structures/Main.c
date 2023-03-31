#include <stdio.h>
#include <string.h>

typedef struct {
    char name[25];
    int score;
} Player;

void structToString(Player p) {
    printf("%25s, score: %5d\n", p.name, p.score);
}

//typedef char user[25];

int main() {

    Player p1 = {"Josh Ashton", 21};

    structToString(p1);

    return 0;
}
