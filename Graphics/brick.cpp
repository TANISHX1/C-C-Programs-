#include <graphics.h>
#include <conio.h>
#include <stdio.h>

#define SCREEN_WIDTH  640
#define SCREEN_HEIGHT 480
#define BRICK_ROWS  3
#define BRICK_COLS  7
#define BRICK_WIDTH  80
#define BRICK_HEIGHT  20
#define PADDLE_WIDTH  100
#define PADDLE_HEIGHT  10
#define BALL_SIZE  10

int ballX, ballY, ballDX = 2, ballDY = -2;
int paddleX, paddleY;
int bricks[BRICK_ROWS][BRICK_COLS];

void drawBricks() {
    int i, j;
    for (i = 0; i < BRICK_ROWS; i++) {
        for (j = 0; j < BRICK_COLS; j++) {
            if (bricks[i][j]) {
                setfillstyle(SOLID_FILL, i + 1);
                bar(j * BRICK_WIDTH, i * BRICK_HEIGHT, (j + 1) * BRICK_WIDTH, (i + 1) * BRICK_HEIGHT);
            }
        }
    }
}

void drawPaddle() {
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    bar(paddleX, paddleY, paddleX + PADDLE_WIDTH, paddleY + PADDLE_HEIGHT);
}

void drawBall() {
    setfillstyle(SOLID_FILL, RED);
    fillellipse(ballX, ballY, BALL_SIZE, BALL_SIZE);
}

void initGame() {
    int i, j;
    // Initialize bricks
    for (i = 0; i < BRICK_ROWS; i++) {
        for (j = 0; j < BRICK_COLS; j++) {
            bricks[i][j] = 1;  // 1 means the brick is present
        }
    }
    // Initialize paddle
    paddleX = SCREEN_WIDTH / 2 - PADDLE_WIDTH / 2;
    paddleY = SCREEN_HEIGHT - 50;
    // Initialize ball
    ballX = SCREEN_WIDTH / 2;
    ballY = SCREEN_HEIGHT / 2;
}

void updateBall() {
    ballX += ballDX;
    ballY += ballDY;

    // Wall collision
    if (ballX - BALL_SIZE <= 0 || ballX + BALL_SIZE >= SCREEN_WIDTH) {
        ballDX = -ballDX;
    }
    if (ballY - BALL_SIZE <= 0) {
        ballDY = -ballDY;
    }

    // Paddle collision
    if (ballY + BALL_SIZE >= paddleY && ballX >= paddleX && ballX <= paddleX + PADDLE_WIDTH) {
        ballDY = -ballDY;
    }

    // Brick collision
    int i, j;
    for (i = 0; i < BRICK_ROWS; i++) {
        for (j = 0; j < BRICK_COLS; j++) {
            if (bricks[i][j]) {
                int brickX = j * BRICK_WIDTH;
                int brickY = i * BRICK_HEIGHT;
                if (ballX >= brickX && ballX <= brickX + BRICK_WIDTH &&
                    ballY >= brickY && ballY <= brickY + BRICK_HEIGHT) {
                    bricks[i][j] = 0;
                    ballDY = -ballDY;
                }
            }
        }
    }

    // Game over if ball falls below paddle
    if (ballY > SCREEN_HEIGHT) {
        outtextxy(SCREEN_WIDTH / 2 - 50, SCREEN_HEIGHT / 2, "Game Over!");
        getch();
        exit(0);
    }
}

void updatePaddle() {
    if (kbhit()) {
        char ch = getch();
        if (ch == 'a' && paddleX > 0) paddleX -= 20;
        if (ch == 'd' && paddleX < SCREEN_WIDTH - PADDLE_WIDTH) paddleX += 20;
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)""); // Change this path based on your setup

    initGame();

    while (1) {
        cleardevice();
        drawBricks();
        drawPaddle();
        drawBall();
        updateBall();
        updatePaddle();
        delay(10);
    }

    closegraph();
    return 0;
}
