#include<stdio.h>
char x = '0', y = '0', chessboard[3][3] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
int x1 = 0, y1 = 0, win = 0;
char yon = '\0';
short int checkwin() {
    int t = 2;
    if ((short int)chessboard[0][0] + (short int)chessboard[0][1] + (short int)chessboard[0][2] == 147 ||
        (short int)chessboard[1][0] + (short int)chessboard[1][1] + (short int)chessboard[1][2] == 147 ||
        (short int)chessboard[2][0] + (short int)chessboard[2][1] + (short int)chessboard[2][2] == 147 ||
        (short int)chessboard[0][0] + (short int)chessboard[1][0] + (short int)chessboard[2][0] == 147 ||
        (short int)chessboard[0][1] + (short int)chessboard[1][1] + (short int)chessboard[2][1] == 147 ||
        (short int)chessboard[0][2] + (short int)chessboard[1][2] + (short int)chessboard[2][2] == 147 ||
        (short int)chessboard[0][0] + (short int)chessboard[1][1] + (short int)chessboard[2][2] == 147 ||
        (short int)chessboard[2][0] + (short int)chessboard[1][1] + (short int)chessboard[0][2] == 147)t = 1;
    else if ((short int)chessboard[0][0] + (short int)chessboard[0][1] + (short int)chessboard[0][2] == 144 ||
        (short int)chessboard[1][0] + (short int)chessboard[1][1] + (short int)chessboard[1][2] == 144 ||
        (short int)chessboard[2][0] + (short int)chessboard[2][1] + (short int)chessboard[2][2] == 144 ||
        (short int)chessboard[0][0] + (short int)chessboard[1][0] + (short int)chessboard[2][0] == 144 ||
        (short int)chessboard[0][1] + (short int)chessboard[1][1] + (short int)chessboard[2][1] == 144 ||
        (short int)chessboard[0][2] + (short int)chessboard[1][2] + (short int)chessboard[2][2] == 144 ||
        (short int)chessboard[0][0] + (short int)chessboard[1][1] + (short int)chessboard[2][2] == 144 ||
        (short int)chessboard[2][0] + (short int)chessboard[1][1] + (short int)chessboard[0][2] == 144)t = -1;
    else if (chessboard[0][0] != ' ' && chessboard[0][1] != ' ' && chessboard[0][2] != ' ' &&
        chessboard[1][0] != ' ' && chessboard[1][1] != ' ' && chessboard[1][2] != ' ' &&
        chessboard[2][0] != ' ' && chessboard[2][1] != ' ' && chessboard[2][2] != ' ') t = 0;
    return t;
}
void Aimee_play() {
    if (chessboard[0][0] == '0' && chessboard[0][1] == '0' && chessboard[0][2] == ' ') {
        x1 = 3; y1 = 1;
        chessboard[0][2] = '0';
    }
    else if (chessboard[1][0] == '0' && chessboard[1][1] == '0' && chessboard[1][2] == ' ') {
        x1 = 3; y1 = 2;
        chessboard[1][2] = '0';
    }
    else if (chessboard[2][0] == '0' && chessboard[2][1] == '0' && chessboard[2][2] == ' ') {
        x1 = 3; y1 = 3;
        chessboard[2][2] = '0';
    }
    else if (chessboard[0][1] == '0' && chessboard[0][2] == '0' && chessboard[0][0] == ' ') {
        x1 = 1; y1 = 1;
        chessboard[0][0] = '0';
    }
    else if (chessboard[1][1] == '0' && chessboard[1][2] == '0' && chessboard[1][0] == ' ') {
        x1 = 1; y1 = 2;
        chessboard[1][0] = '0';
    }
    else if (chessboard[2][1] == '0' && chessboard[2][2] == '0' && chessboard[2][0] == ' ') {
        x1 = 1; y1 = 3;
        chessboard[2][0] = '0';
    }
    else if (chessboard[0][0] == '0' && chessboard[1][1] == '0' && chessboard[2][2] == ' ') {
        x1 = 3; y1 = 3;
        chessboard[2][2] = '0';
    }
    else if (chessboard[0][2] == '0' && chessboard[1][1] == '0' && chessboard[2][0] == ' ') {
        x1 = 1; y1 = 3;
        chessboard[2][0] = '0';
    }
    else if (chessboard[1][1] == '0' && chessboard[2][2] == '0' && chessboard[0][0] == ' ') {
        x1 = 1; y1 = 1;
        chessboard[0][0] = '0';
    }
    else if (chessboard[0][0] == '0' && chessboard[1][0] == '0' && chessboard[2][0] == ' ') {
        x1 = 1; y1 = 3;
        chessboard[2][0] = '0';
    }
    else if (chessboard[0][1] == '0' && chessboard[1][1] == '0' && chessboard[2][1] == ' ') {
        x1 = 2; y1 = 3;
        chessboard[2][1] = '0';
    }
    else if (chessboard[0][2] == '0' && chessboard[1][2] == '0' && chessboard[2][2] == ' ') {
        x1 = 3; y1 = 3;
        chessboard[2][2] = '0';
    }
    else if (chessboard[1][0] == '0' && chessboard[2][0] == '0' && chessboard[0][0] == ' ') {
        x1 = 1; y1 = 1;
        chessboard[0][0] = '0';
    }
    else if (chessboard[1][1] == '0' && chessboard[2][1] == '0' && chessboard[0][1] == ' ') {
        x1 = 2; y1 = 1;
        chessboard[0][1] = '0';
    }
    else if (chessboard[1][2] == '0' && chessboard[2][2] == '0' && chessboard[0][2] == ' ') {
        x1 = 3; y1 = 1;
        chessboard[0][2] = '0';
    }
    else if (chessboard[0][0] == '1' && chessboard[0][1] == '1' && chessboard[0][2] == ' ') {
        x1 = 3; y1 = 1;
        chessboard[0][2] = '0';
    }
    else if (chessboard[1][0] == '1' && chessboard[1][1] == '1' && chessboard[1][2] == ' ') {
        x1 = 3; y1 = 2;
        chessboard[1][2] = '0';
    }
    else if (chessboard[2][0] == '1' && chessboard[2][1] == '1' && chessboard[2][2] == ' ') {
        x1 = 3; y1 = 3;
        chessboard[2][2] = '0';
    }
    else if (chessboard[0][1] == '1' && chessboard[0][2] == '1' && chessboard[0][0] == ' ') {
        x1 = 1; y1 = 1;
        chessboard[0][0] = '0';
    }
    else if (chessboard[1][1] == '1' && chessboard[1][2] == '1' && chessboard[1][0] == ' ') {
        x1 = 1; y1 = 2;
        chessboard[1][0] = '0';
    }
    else if (chessboard[2][1] == '1' && chessboard[2][2] == '1' && chessboard[2][0] == ' ') {
        x1 = 1; y1 = 3;
        chessboard[2][0] = '0';
    }
    else if (chessboard[0][0] == '1' && chessboard[1][1] == '1' && chessboard[2][2] == ' ') {
        x1 = 3; y1 = 3;
        chessboard[2][2] = '0';
    }
    else if (chessboard[0][2] == '1' && chessboard[1][1] == '1' && chessboard[2][0] == ' ') {
        x1 = 1; y1 = 3;
        chessboard[2][0] = '0';
    }
    else if (chessboard[1][1] == '1' && chessboard[2][2] == '1' && chessboard[0][0] == ' ') {
        x1 = 1; y1 = 1;
        chessboard[0][0] = '0';
    }
    else if (chessboard[0][0] == '1' && chessboard[1][0] == '1' && chessboard[2][0] == ' ') {
        x1 = 1; y1 = 3;
        chessboard[2][0] = '0';
    }
    else if (chessboard[0][1] == '1' && chessboard[1][1] == '1' && chessboard[2][1] == ' ') {
        x1 = 2; y1 = 3;
        chessboard[2][1] = '0';
    }
    else if (chessboard[0][2] == '1' && chessboard[1][2] == '1' && chessboard[2][2] == ' ') {
        x1 = 3; y1 = 3;
        chessboard[2][2] = '0';
    }
    else if (chessboard[1][0] == '1' && chessboard[2][0] == '1' && chessboard[0][0] == ' ') {
        x1 = 1; y1 = 1;
        chessboard[0][0] = '0';
    }
    else if (chessboard[1][1] == '1' && chessboard[2][1] == '1' && chessboard[0][1] == ' ') {
        x1 = 2; y1 = 1;
        chessboard[0][1] = '0';
    }
    else if (chessboard[1][2] == '1' && chessboard[2][2] == '1' && chessboard[0][2] == ' ') {
        x1 = 3; y1 = 1;
        chessboard[0][2] = '0';
    }
    else if (chessboard[0][0] == ' ') {
        x1 = 1; y1 = 1;
        chessboard[0][0] = '0';
    }
    else if (chessboard[0][1] == ' ') {
        x1 = 2; y1 = 1;
        chessboard[0][1] = '0';
    }
    else if (chessboard[0][2] == ' ') {
        x1 = 3; y1 = 1;
        chessboard[0][2] = '0';
    }
    else if (chessboard[1][0] == ' ') {
        x1 = 1; y1 = 2;
        chessboard[1][0] = '0';
    }
    else if (chessboard[1][1] == ' ') {
        x1 = 2; y1 = 2;
        chessboard[1][1] = '0';
    }
    else if (chessboard[1][2] == ' ') {
        x1 = 3; y1 = 2;
        chessboard[1][2] = '0';
    }
    else if (chessboard[2][0] == ' ') {
        x1 = 1; y1 = 3;
        chessboard[2][0] = '0';
    }
    else if (chessboard[2][1] == ' ') {
        x1 = 2; y1 = 3;
        chessboard[2][1] = '0';
    }
    else {
        x1 = 3; y1 = 3;
        chessboard[2][2] = '0';
    }
    return;
}

int main() {
start:
    printf("y\\x 1  2  3 \n 1 [%c][%c][%c]\n 2 [%c][%c][%c]\n 3 [%c][%c][%c]\n   (1) Player ( %c, %c) VS  (0) Aimee ( %d, %d)\n", chessboard[0][0], chessboard[0][1], chessboard[0][2], chessboard[1][0], chessboard[1][1], chessboard[1][2], chessboard[2][0], chessboard[2][1], chessboard[2][2], x, y, x1, y1);
    printf("X Y ?:");
    while (~scanf("%c %c", &x, &y)) {
        getchar();
        if (x < 48 || x>51 || y < 48 || y>51) { printf("err\nX Y ?:"); continue; }
        if (chessboard[(short int)y - 49][(short int)x - 49] == ' ')chessboard[(short int)y - 49][(short int)x - 49] = '1';
        else { printf("err\nX Y ?:"); continue; }
        win = checkwin();
        Aimee_play();
        if (win == 2) win = checkwin();
        printf("y\\x 1  2  3 \n 1 [%c][%c][%c]\n 2 [%c][%c][%c]\n 3 [%c][%c][%c]\n   (1) Player ( %c, %c) VS  (0) Aimee ( %d, %d)\n", chessboard[0][0], chessboard[0][1], chessboard[0][2], chessboard[1][0], chessboard[1][1], chessboard[1][2], chessboard[2][0], chessboard[2][1], chessboard[2][2], x, y, x1, y1);
        if (win == 1) { printf("--------------------------------------\n   (1) Player (Win) VS  (0) Aimee (TwT)\n--------------------------------------\n"); break; }
        else if (win == -1) { printf("--------------------------------------\n   (1) Player (Lose) VS  (0) Aimee (^w^)\n--------------------------------------\n"); break; }
        else if (win == 0) { printf("--------------------------------------\n   (1) Player (Draw) VS  (0) Aimee (-w-)\n--------------------------------------\n"); break; }
        printf("X Y ?:");
    }
    printf("Continue(Y y/N n)?:");
    while (1) {
        yon = getchar();
        if (yon == 'Y' || yon == 'y') {
            x = y = x1 = y1 = 0;
            chessboard[0][0] = chessboard[0][1] = chessboard[0][2] = chessboard[1][0] = chessboard[1][1] = chessboard[1][2] = chessboard[2][0] = chessboard[2][1] = chessboard[2][2] = ' ';
            printf("Go Go!!\n");
            goto start;
        }
        else if (yon == 'N' || yon == 'n') {
            printf("Bye Bye~~");
            break;
        }
        if(yon!='\n')printf("err\nContinue(Y y/N n)?:");
    }
    return 0;
}