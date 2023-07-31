#include "snake.h"
#include "ladder.h"
#include "ladder.h"
#include <graphics.h>


snake::snake()
{
    setbkcolor(BLACK);
    cleardevice();

    readimagefile("image.jpeg", 96, 46, 1104, 555);
    delay(3);
    // setcolor(WHITE);
}
/*
if(score1==1)
    readimagefile("dice1.jpeg", 800, 650, 1000, 750);
if(score1==2)
    readimagefile("dice2.jpeg", 800, 650, 1000, 750);
if(score1==3)
    readimagefile("dice3.jpeg", 800, 650, 1000, 750);
if(score1==4)
    readimagefile("dice4.jpeg", 800, 650, 1000, 750);
if(score1==5)
    readimagefile("dice5.jpeg", 800, 650, 1000, 750);
if(score1==6)
    readimagefile("dice6.jpeg", 800, 650, 1000, 750);*/

/*

//player 1 snake 1
void snake_1_1()
{
    score1=9;

    //coming to the point
    for(int i = 0; i < 50; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x1+=5;
        y1-=2;
        show();
    }

    //part 1
    for(int i = 0; i < 25; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x1+=5;
        y1+=7;
        show();
    }

    //part 2
    for(int i = 0; i <50; i+=5)
    {
        // delay(10);
        cleardevice();
        snake snk;
        y1+=5;
        show();
    }

    //part 3
    for(int i = 0; i < 125; i+=5)
    {
        // delay(10);
        cleardevice();
        snake snk;
        x1+= 5;
        y1+= 4;
        show();
    }

    //  new
    for(int i = 0; i < 15; i+=5)
    {
        //delay(10);
        cleardevice();
        snake snk;
        y1+= 5;
        show();
    }



    //final reach for player 1 in snake 1
    for(int i = 0; i < 20; i+=5)
    {
        // delay(10);
        cleardevice();
        snake snk;
        y1+= 5;
        show();
    }
}

//player 2 snake 1
void snake_2_1()
{
    score2 = 9;

    //coming to the point
    for(int i = 0; i < 20; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        //  y1+=5;
        y1-=5;
        show();
    }

    //part 1
    for(int i = 0; i < 25; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x2+=5;
        y2+=7;
        show();
    }

    //part 2
    for(int i = 0 ; i <50; i+=5)
    {
        // delay(10);
        cleardevice();
        snake snk;
        y2+=5;
        show();
    }

    //part 3
    for(int i = 0; i < 125; i+=5)
    {
        // delay(10);
        cleardevice();
        snake snk;
        x2+= 5;
        y2+= 4;
        show();
    }

    //  new
    for(int i = 0; i < 15; i+=5)
    {
        //delay(10);
        cleardevice();
        snake snk;
        y2+= 5;
        show();
    }

    //final reach for player 2 in snake 1
    for(int i = 0; i < 50; i+=5)
    {
        // delay(10);
        cleardevice();
        snake snk;
        x2+=5;
        y2+=2;
        show();
    }
}

//player 3 snake 1
void snake_3_1()
{
    score3 = 9;

    //coming to the point
    //on the point

//part 1
    for(int i = 0; i < 25; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x3+=5;
        y3+=7;
        show();
    }

//part 2
    for(int i = 0 ; i <50; i+=5)
        //  for(int i = 315 ; i <400; i+=4)
    {
        // delay(10);
        cleardevice();
        snake snk;
        y3+=5;
        show();
    }

    //part 3
    for(int i = 0; i < 125; i+=5)
    {
        // delay(10);
        cleardevice();
        snake snk;
        x3+= 5;
        y3+= 4;
        show();
    }

    //  new
    for(int i = 0; i < 15; i+=5)
    {
        //delay(10);
        cleardevice();
        snake snk;
        y3+= 5;
        show();
    }

//final reach for player 3 in snake 1
    for(int i = 0; i < 50; i+=5)
    {
        // delay(10);
        cleardevice();
        snake snk;
        x3+=5;
        show();
    }
}

//player 4 snake 1
void snake_4_1()
{
    score4= 9;

    //coming to the point
    for(int i = 0; i < 50; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x4+=5;
        show();
    }

    //part 1
    for(int i = 0; i < 25; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x4+=5;
        y4+=7;
        show();
    }

    //part 2
    for(int i = 0 ; i <50; i+=5)
    {
        // delay(10);
        cleardevice();
        snake snk;
        y4+=5;
        show();
    }

    //part 3
    for(int i = 0; i < 125; i+=5)
    {
        // delay(10);
        cleardevice();
        snake snk;
        x4+= 5;
        y4+= 4;
        show();
    }

    //  new
    for(int i = 0; i < 15; i+=5)
    {
        //delay(10);
        cleardevice();
        snake snk;
        y4+= 5;
        show();
    }

    //final reach for player 3 in snake 1
    // on the point
}

//player 1 snake 2
void snake_1_2()
{
    score2 = 40;

    //make the first step
    for(int i = 0; i < 25; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x1+=5;
        y1-=2;
        show();
    }

    //first step
    for(int i = 0; i < 25; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        y1+=5;
        show();
    }

    //second step
    for(int i = 0; i < 50; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x1-=5;
        y1+=2;
        show();
    }

    //third step
    for(int i = 0; i < 20; i+= 5)
    {
        cleardevice();
        snake snk;
        x1-= 5;
        y1+= 5;
        show();
    }
    //forth step
    for(int i = 0; i < 80; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        y1+=5;
        show();
    }
    //fifth step
    for(int i = 0; i < 15; i++)
    {
        cleardevice();
        snake sn;
        x1-= 5;
        y1+= 5;
        show();
    }
    //make the final position for play 1 snk 2
    for(int i = 0; i < 25; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x1-=5;
        y1+=2;
        show();
    }
}

//player 2 snake 2
void snake_2_2()
{
    score2 = 40;

    //make the first step
    for(int i = 0; i < 25; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x2-=5;
        y2-=2;
        show();
    }

    //first step
    for(int i = 0; i < 25; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        y2+=5;
        show();
    }

    //second step
    for(int i = 0; i < 50; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x2-=5;
        y2+=2;
        show();
    }

    //third step
    for(int i = 0; i < 20; i+= 5)
    {
        cleardevice();
        snake snk;
        x2-= 5;
        y2+= 5;
        show();
    }
    //forth step
    for(int i = 0; i < 80; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        y2+=5;
        show();
    }
    //fifth step
    for(int i = 0; i < 15; i++)
    {
        cleardevice();
        snake sn;
        x2-= 5;
        y2+= 5;
        show();
    }
    //make the final position for play 2 snk 2
    for(int i = 0; i < 25; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x2+= 5;
        y2+= 2;
        show();
    }
}

//player 3 snake 2
void snake_3_2()
{
    score3 = 40;

    //make the first step
    for(int i = 0; i < 25; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x3-=5;
        y3+=2;
        show();
    }

    //first step
    for(int i = 0; i < 25; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        y3+=5;
        show();
    }

    //second step
    for(int i = 0; i < 50; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x3-=5;
        y3+=2;
        show();
    }

    //third step
    for(int i = 0; i < 20; i+= 5)
    {
        cleardevice();
        snake snk;
        x3-= 5;
        y3+= 5;
        show();
    }
    //forth step
    for(int i = 0; i < 80; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        y3+=5;
        show();
    }
    //fifth step
    for(int i = 0; i < 15; i++)
    {
        cleardevice();
        snake sn;
        x3-= 5;
        y3+= 5;
        show();
    }

    //make the final position for play 4 snk 2
    for(int i = 0; i < 25; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x3+= 5;
        y3-= 2;
        show();
    }
}

//player 4 snake 2
void snake_4_2()
{
    score4 = 40;

    //make the first step
    for(int i = 0; i < 25; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x4+=5;
        y4+=2;
        show();
    }

    //first step
    for(int i = 0; i < 25; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        y4+=5;
        show();
    }

    //second step
    for(int i = 0; i < 50; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x4-=5;
        y4+=2;
        show();
    }

    //third step
    for(int i = 0; i < 20; i+= 5)
    {
        cleardevice();
        snake snk;
        x4-= 5;
        y4+= 5;
        show();
    }
    //forth step
    for(int i = 0; i < 80; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        y4+=5;
        show();
    }
    //fifth step
    for(int i = 0; i < 15; i++)
    {
        cleardevice();
        snake sn;
        x4-= 5;
        y4+= 5;
        show();
    }

    //make the final position for play 4 snk 2
    for(int i = 0; i < 25; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x3-= 5;
        y3-= 2;
        show();
    }
}

//for player 1 snake 3
void snake_1_3()
{
    score1 = 75;

    //make the first step
    for(int i = 0; i < 25; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x1+=5;
        y1-=2;
        show();
    }

    //first step
    for(int i = 0; i < 10; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x1+= 5;
        y1+= 1;
        show();
    }

    //second step
    for(int i = 0; i < 20; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        y1+= 5;
        show();
    }
//new adjustment
    cleardevice();
    snake snk;
    x1 = 360;
    y1 = 100;
    show();

    //third step
    for(int i = 0; i < 10; i+=2)
    {
        delay(10);
        cleardevice();
        snake snk;
        x1 += 2;
        y1 += 3;
        show();
    }

    //fourth step
    for(int i = 0; i < 70; i+=10)
    {
        delay(10);
        cleardevice();
        snake snk;
        x1+= 10;
        y1+= 5;
        show();
    }

        //fifth step
    for(int i = 0; i < 10; i+=2)
    {
        delay(10);
        cleardevice();
        snake snk;
        x1+= 2;
        y1+= 5;
        show();
    }

    //make the final position for play 1 snk 2
    for(int i = 0; i < 25; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x1-= 5;
        y1+= 2;
        show();
    }
}

//for player 2 snake 3
void snake_2_3()
{
    score2 = 75;

    //make the first step
    for(int i = 0; i < 25; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x2-=5;
        y2-=2;
        show();
    }

    //first step
    for(int i = 0; i < 10; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x2+= 5;
        y2+= 1;
        show();
    }

    //second step
    for(int i = 0; i < 20; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        y2+= 5;
        show();
    }
//new adjustment
    cleardevice();
    snake snk;
    x2 = 360;
    y2 = 100;
    show();

    //third step
    for(int i = 0; i < 10; i+=2)
    {
        delay(10);
        cleardevice();
        snake snk;
        x2 += 2;
        y2 += 3;
        show();
    }

    //fourth step
    for(int i = 0; i < 70; i+=10)
    {
        delay(10);
        cleardevice();
        snake snk;
        x2+= 10;
        y2+= 5;
        show();
    }

        //fifth step
    for(int i = 0; i < 10; i+=2)
    {
        delay(10);
        cleardevice();
        snake snk;
        x2+= 2;
        y2+= 5;
        show();
    }

    //make the final position for play 1 snk 2
    for(int i = 0; i < 25; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x2+= 5;
        y2+= 2;
        show();
    }
}

//for player 3 snake 3
void snake_3_3()
{
    score3= 75;

    //make the first step
    snake snk;
    for(int i = 0; i < 25; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x3-=5;
        y3+=2;
        show();
    }

    //first step
    for(int i = 0; i < 10; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x3+= 5;
        y3+= 1;
        show();
    }

    //second step
    for(int i = 0; i < 20; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        y3+= 5;
        show();
    }
//new adjustment
    cleardevice();
    snake snk;
    x3 = 360;
    y3 = 100;
    show();

    //third step
    for(int i = 0; i < 10; i+=2)
    {
        delay(10);
        cleardevice();
        snake snk;
        x3 += 2;
        y3 += 3;
        show();
    }

    //fourth step
    for(int i = 0; i < 70; i+=10)
    {
        delay(10);
        cleardevice();
        snake snk;
        x3+= 10;
        y3+= 5;
        show();
    }

        //fifth step
    for(int i = 0; i < 10; i+=2)
    {
        delay(10);
        cleardevice();
        snake snk;
        x3+= 2;
        y3+= 5;
        show();
    }

    //make the final position for play 1 snk 2
    for(int i = 0; i < 25; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x3+= 5;
        y3-= 2;
        show();
    }
}

//for player 4 snake 3
void snake_4_3()
{
    score4 = 75;

    //make the first step
    for(int i = 0; i < 25; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x4+=5;
        y4+=2;
        show();
    }

    //first step
    for(int i = 0; i < 10; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x4+= 5;
        y4+= 1;
        show();
    }

    //second step
    for(int i = 0; i < 20; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        y4+= 5;
        show();
    }
//new adjustment
    cleardevice();
    snake snk;
    x4 = 360;
    y4 = 100;
    show();

    //third step
    for(int i = 0; i < 10; i+=2)
    {
        delay(10);
        cleardevice();
        snake snk;
        x4 += 2;
        y4 += 3;
        show();
    }

    //fourth step
    for(int i = 0; i < 70; i+=10)
    {
        delay(10);
        cleardevice();
        snake snk;
        x4+= 10;
        y4+= 5;
        show();
    }

        //fifth step
    for(int i = 0; i < 10; i+=2)
    {
        delay(10);
        cleardevice();
        snake snk;
        x4+= 2;
        y4+= 5;
        show();
    }

    //make the final position for play 1 snk 2
    for(int i = 0; i < 25; i+=5)
    {
        delay(10);
        cleardevice();
        snake snk;
        x4-= 5;
        y4-= 2;
        show();
    }
}

*/
