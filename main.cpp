#include<graphics.h>
#include<time.h>
#include <vector>
#include "snake.h"
#include "player.h"
//#include <cmath>
//#include<math.h>
#include "ladder.h"
#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
using namespace std;

int n, x1, x2, x3, x4, y1, y2, y3, y4, r=10, val, tem, apple=0;
int score1,score2, score3, score4, dice;
char scr_1[50], scr_2[50], scr_3[50], scr_4[50], chal[20], dic[50];
int opt=0;
int page = 0;

void show()
{
    setactivepage(page);
    setvisualpage(1-page);

    cleardevice();
    snake snk;
    circle(x1, y1, r);
    setfillstyle(SOLID_FILL, LIGHTGREEN);
    floodfill(x1, y1, CYAN);
    circle(x2, y2, r);
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    floodfill(x2, y2, CYAN);
    circle(x3, y3, r);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(x3, y3, CYAN);
    circle(x4, y4, r);
    setfillstyle(SOLID_FILL, LIGHTRED);
    floodfill(x4, y4, CYAN);
    settextstyle(EUROPEAN_FONT, HORIZ_DIR, 4);

    setcolor(LIGHTGREEN);
    outtextxy(50, 600, "Player 1 position :");
    outtextxy(400, 600,itoa(score1, scr_1, 10 ) );

    setcolor(LIGHTBLUE);
    outtextxy(50, 625, "Player 2 position : ");
    outtextxy(400, 625,itoa(score2, scr_2, 10 ) );

    setcolor(YELLOW);
    outtextxy(50, 650, "Player 3 position : ");
    outtextxy(400, 650,itoa(score3, scr_3, 10 ) );

    setcolor(LIGHTRED);
    outtextxy(50, 675, "Player 4 position : ");
    outtextxy(400, 675,itoa(score4, scr_4, 10 ) );

    setcolor(RED);
    settextstyle(EUROPEAN_FONT, HORIZ_DIR, 10);
    outtextxy(600, 625, itoa(dice, dic, 10));
    settextstyle(EUROPEAN_FONT, HORIZ_DIR, 4);

    if(apple == 0);
    else if(apple==1)
        readimagefile("dice1.JPEG", 800, 650, 1000, 750);
    else if(apple==2)
        readimagefile("dice2.JPEG", 800, 650, 1000, 750);
    else if(apple==3)
        readimagefile("dice3.JPEG", 800, 650, 1000, 750);
    else if(apple==4)
        readimagefile("dice4.JPEG", 800, 650, 1000, 750);
    else if(apple==5)
        readimagefile("dice5.JPEG", 800, 650, 1000, 750);
    else if(apple==6)
        readimagefile("dice6.JPEG", 800, 650, 1000, 750);
    setcolor(CYAN);
    if(opt == 0)
    outtextxy(1110, 150, "Start The game");
    if(opt==1)
        outtextxy(1110, 150, "Player 2 turn");
    else if(opt == 2)
        outtextxy(1110, 150, "Player 3 turn");
    else if(opt == 3)
        outtextxy(1110, 150, "Player 4 turn");
    else if(opt == 4)
        outtextxy(1110, 150, "Player 1 turn");
        else if(opt == 5)
        {
                    outtextxy(1110, 150, "Press again");
        }



    page = 1 - page;

}

// ladder 1 for player 1
void ladder_1_1();
void ladder_1_2();
void ladder_1_3();
void ladder_1_4();
void ladder_2_1();
void ladder_2_2();
void ladder_2_3();
void ladder_2_4();
void ladder_3_1();
void ladder_3_2();
void ladder_3_3();
void ladder_3_4();
void ladder_4_1();
void ladder_4_2();
void ladder_4_3();
void ladder_4_4();

//move player
void move_1();
void move_2();
void move_3();
void move_4();

//move snake player snake
void snake_1_1();
void snake_1_2();
void snake_1_3();
void snake_2_1();
void snake_2_2();
void snake_2_3();
void snake_3_1();
void snake_3_2();
void snake_3_3();
void snake_4_1();
void snake_4_2();
void snake_4_3();



int main()
{
    FILE *file;

    file = fopen("check.txt","w");
    if(file == NULL)
        cout << "file does not open" << endl;
    else
    {
        cout << "file open" << endl;
        fclose(file);
    }
    int op;
    for(;;)
    {
        cout << "Select option:" << endl << "1. Restart" << "  2. Resume" << endl;
        cin>>op;
        if(op==1)
        {
            x1=125, x2=175, x3=175, x4=125, y1=535, y2=535, y3=515, y4=515;
            score1=1,score2=1, score3=1, score4=1;
            break;
        }
        else if(op==2)
        {
            ifstream file;
            file.open("Save.txt");
            int store, cnt=0;
            while(file>>store)
            {
                if(cnt==0)          x1 = store;
                else if(cnt==1)     x2 = store;
                else if(cnt==2)     x3 = store;
                else if(cnt==3)     x4 = store;

                else if(cnt==4)     y1 = store;
                else if(cnt==5)     y2 = store;
                else if(cnt==6)     y3 = store;
                else if(cnt==7)     y4 = store;

                else if(cnt==8)      score1 = store;
                else if(cnt==9)      score2 = store;
                else if(cnt==10)     score3 = store;
                else if(cnt==11)     score4 = store;
                cnt++;
            }

            cout << x1<< endl << x2<< endl << x3<< endl<< x4<< endl<< y1<< endl << y2<< endl << y3<< endl << y4<< endl << score1<< endl<< score2<< endl<< score3<< endl << score4<< endl << endl;


            file.close();
            break;
        }
        else
        {
            cout << "Enter the right option" << endl;
        }
    }

    cout << "press 1 for player 1" << endl;
    cout << "press 2 for player 2" << endl;
    cout << "press 3 for player 3" << endl;
    cout << "press 4 for player 4" << endl;
    cout << "press 5 for quit" << endl;
    initwindow(1600, 800);
    snake snk;
    settextstyle(EUROPEAN_FONT, HORIZ_DIR, 4);


    setcolor(CYAN);
    show();
    show();




    while(1)
    {
        cleardevice();
        cout << "Enter the player number ";
        outtextxy(1110, 50, "player : ");
        cin>>opt;


        outtextxy(400, 600,itoa(opt, scr_1, 10));

        if(opt ==1)
        {
            move_1();

        }
        else if(opt ==2)
        {
            move_2();
        }
        else if(opt ==3)
        {
            move_3();
        }
        else if(opt ==4)
        {
            move_4();
        }
        else if(opt == 5)
        {
            ofstream file;
            file.open("Save.txt");
            // file << x1<< " " << x2<< " " << x3<< " "<< x4<< " "<< y1<< " " << y2<< " " << y3<< " " << y4<< " " << score1<< " "<< score2<< " "<< score3<< " " << score4<< " " << endl;
            file << x1<< endl << x2<< endl << x3<< endl<< x4<< endl<< y1<< endl << y2<< endl << y3<< endl << y4<< endl << score1<< endl<< score2<< endl<< score3<< endl << score4<< endl << endl;
            file.close();

            for(int i = 0; i < 10; i++)
            {
                cleardevice();
                settextstyle(EUROPEAN_FONT, HORIZ_DIR, 20);
                outtextxy(100, 100, "Thanks for playing");
            }
            cleardevice();
            return 0;
            break;
        }
        else
        {
            setcolor(CYAN);
           // cleardevice();
            show();
         //   settextstyle(EUROPEAN_FONT, HORIZ_DIR, 20);
          //  outtextxy(100, 100, "press again");
        }

    }

    cleardevice;
    getch();
    closegraph();
    // return 0;
}




//move player 1
void move_1()
{
    srand(time(0));
    int val = rand()%6+1;
    dice = val;
    apple = dice;
    cout << val << endl;
    if(val+score1>100)
    {
        show();

        settextstyle(EUROPEAN_FONT, HORIZ_DIR, 4);
        outtextxy(1110, 150, "Now press 2");
    }
    else
    {
        cout << score1 + val << endl;
        settextstyle(EUROPEAN_FONT, HORIZ_DIR, 20);

        int a = val;
        while(a)
        {
            snake snk;


            if(score1/10 == (score1-1)/10)
            {
                tem = score1-1;
                tem = tem /10;
                if(tem %2==0)
                {
                    score1++;
                    for(int i = 0; i < 100; i+=5)
                    {
                        x1+=5;
                        show();
                    }
                    show();
                }
                else
                {
                    score1++;
                    for(int i = 0; i < 100; i+=5)
                    {
                        x1-=5;
                        show();
                    }
                    show();
                }
            }
            else
            {
                score1++;
                for(int i = 0; i < 50; i+=5)
                {
                    y1-=5;
                    show();
                }

                show();
            }
            a--;
        }
        if (score1==6)
            ladder_1_1();
        else if(score1==19)
            ladder_1_2();
        else if(score1==57)
            ladder_1_3();
        else if(score1==52)
            ladder_1_4();
        else if(score1==47)
            snake_1_1();
        else if(score1==62)
            snake_1_2();
        else if(score1 == 96)
            snake_1_3();
        else if(score1 == 100)
        {
            cleardevice();
            settextstyle(EUROPEAN_FONT, HORIZ_DIR, 10);
            outtextxy(100, 100, "winner player: 1");
            x1=125, x2=175, x3=175, x4=125, y1=535, y2=535, y3=515, y4=515;
            score1=1,score2=1, score3=1, score4=1;
        }

    }
    settextstyle(EUROPEAN_FONT, HORIZ_DIR, 4);
    outtextxy(1110, 150, "Now press 2");

    if(score1 == 100)
    {
        cleardevice();
        settextstyle(EUROPEAN_FONT, HORIZ_DIR, 10);
        outtextxy(100, 100, "winner player: 1");
        x1=125, x2=175, x3=175, x4=125, y1=535, y2=535, y3=515, y4=515;
        score1=1,score2=1, score3=1, score4=1;
        ofstream file;
        file.open("Save.txt");
        // file << x1<< " " << x2<< " " << x3<< " "<< x4<< " "<< y1<< " " << y2<< " " << y3<< " " << y4<< " " << score1<< " "<< score2<< " "<< score3<< " " << score4<< " " << endl;
        file <<125<< endl <<175 << endl << 175 << endl << 125 << endl << 535 << endl << 535 << endl <<  515 << endl <<515 << endl << 1 << endl <<1 << endl << 1<< endl << 1 <<endl;
        file.close();
        settextstyle(EUROPEAN_FONT, HORIZ_DIR, 4);
    }
}

//move player 2
void move_2()
{
    srand(time(0));
    val = rand()%6+1;
    dice = val;
    apple = dice;
    cout << val << endl;
    if(val+score2>100)
    {
        show();
        settextstyle(EUROPEAN_FONT, HORIZ_DIR, 4);
        outtextxy(1110, 150, "Now press 3");
    }
    else
    {
        cout << score2 + val << endl;
        settextstyle(EUROPEAN_FONT, HORIZ_DIR, 20);

        int a = val;
        while(a)
        {
            snake snk;
            if(score2/10 == (score2-1)/10)
            {
                tem = score2-1;
                tem = tem /10;
                if(tem %2==0)
                {
                    score2++;
                    for(int i = 0; i < 100; i+=5)
                    {
                        x2+=5;
                        show();
                    }
                    show();
                }
                else
                {
                    score2++;
                    for(int i = 0; i < 100; i+=5)
                    {
                        x2-=5;
                        show();
                    }
                    show();
                }
            }
            else
            {
                score2++;
                for(int i = 0; i < 50; i+=5)
                {
                    y2-=5;
                    show();
                }
                show();
            }
            a--;
        }
        if (score2==6)
            ladder_2_1();
        else if(score2==19)
            ladder_2_2();
        else if(score2==57)
            ladder_2_3();
        else if(score2==52)
            ladder_2_4();
        else if(score2==47)
            snake_2_1();
        else if(score2==62)
            snake_2_2();
        else if(score2 == 96)
            snake_2_3();
        else if(score2 == 100)
        {
            cleardevice();
            settextstyle(EUROPEAN_FONT, HORIZ_DIR, 10);
            outtextxy(100, 100, "winner player: 2");
        }

    }
    settextstyle(EUROPEAN_FONT, HORIZ_DIR, 4);
    outtextxy(1110, 150, "Now press 3");

    if(score2 == 100)
    {
        cleardevice();
        settextstyle(EUROPEAN_FONT, HORIZ_DIR, 10);
        outtextxy(100, 100, "winner player: 2");
        ofstream file;
        x1=125, x2=175, x3=175, x4=125, y1=535, y2=535, y3=515, y4=515;
        score1=1,score2=1, score3=1, score4=1;
        file.open("Save.txt");
        // file << x1<< " " << x2<< " " << x3<< " "<< x4<< " "<< y1<< " " << y2<< " " << y3<< " " << y4<< " " << score1<< " "<< score2<< " "<< score3<< " " << score4<< " " << endl;
        file <<125<< endl <<175 << endl << 175 << endl << 125 << endl << 535 << endl << 535 << endl <<  515 << endl <<515 << endl << 1 << endl <<1 << endl << 1<< endl << 1 <<endl;
        file.close();
        settextstyle(EUROPEAN_FONT, HORIZ_DIR, 4);
    }

}

//move player 3
void move_3()
{
    srand(time(0));
    val = rand()%6+1;
    dice = val;
    apple = dice;
    cout << val << endl;
    if(val+score3>100)
    {
        cleardevice();
        snake snk;
        show();
        settextstyle(EUROPEAN_FONT, HORIZ_DIR, 4);
        outtextxy(1110, 150, "Now press 4");
    }
    else
    {
        cout << score3 + val << endl;
        settextstyle(EUROPEAN_FONT, HORIZ_DIR, 20);

        int a = val;
        while(a)
        {
            snake snk;
            if(score3/10 == (score3-1)/10)
            {
                tem = score3-1;
                tem = tem /10;
                if(tem %2==0)
                {
                    score3++;
                    for(int i = 0; i < 100; i+=5)
                    {
                        x3+=5;
                        show();
                    }
                    show();
                }
                else
                {
                    score3++;
                    for(int i = 0; i < 100; i+=5)
                    {
                        x3-=5;
                        show();
                    }
                    show();
                }
            }
            else
            {
                score3++;
                for(int i = 0; i < 50; i+=5)
                {
                    y3-=5;
                    show();
                }
                show();
            }
            a--;
        }

        if (score3==6)
            ladder_3_1();
        else if(score3==19)
            ladder_3_2();
        else if(score3==57)
            ladder_3_3();
        else if(score3==52)
            ladder_3_4();
        else if(score3==47)
            snake_3_1();
        else if(score3==62)
            snake_3_2();
        else if(score3 == 96)
            snake_3_3();
        else if(score3 == 100)
        {
            cleardevice();
            settextstyle(EUROPEAN_FONT, HORIZ_DIR, 10);
            outtextxy(100, 100, "winner player: 3");
        }

    }
    settextstyle(EUROPEAN_FONT, HORIZ_DIR, 4);
    outtextxy(1110, 150, "Now press 4");

    if(score3 == 100)
    {
        cleardevice();
        settextstyle(EUROPEAN_FONT, HORIZ_DIR, 10);
        outtextxy(100, 100, "winner player: 3");
        x1=125, x2=175, x3=175, x4=125, y1=535, y2=535, y3=515, y4=515;
        score1=1,score2=1, score3=1, score4=1;
        ofstream file;
        file.open("Save.txt");
        // file << x1<< " " << x2<< " " << x3<< " "<< x4<< " "<< y1<< " " << y2<< " " << y3<< " " << y4<< " " << score1<< " "<< score2<< " "<< score3<< " " << score4<< " " << endl;
        file <<125<< endl <<175 << endl << 175 << endl << 125 << endl << 535 << endl << 535 << endl <<  515 << endl <<515 << endl << 1 << endl <<1 << endl << 1<< endl << 1 <<endl;
        file.close();
        settextstyle(EUROPEAN_FONT, HORIZ_DIR, 4);
    }

}

//move player 4
void move_4()
{
    srand(time(0));
    val = rand()%6+1;
    dice = val;
    apple = dice;
    cout << val << endl;
    if(val+score4>100)
    {
        show();
        settextstyle(EUROPEAN_FONT, HORIZ_DIR, 4);
        outtextxy(1110, 150, "Now press 4");
    }
    else
    {
        cout << score4 + val << endl;
        settextstyle(EUROPEAN_FONT, HORIZ_DIR, 20);

        int a = val;
        while(a)
        {
            snake snk;
            if(score4/10 == (score4-1)/10)
            {
                tem = score4-1;
                tem = tem /10;
                if(tem %2==0)
                {
                    score4++;
                    for(int i = 0; i < 100; i+=5)
                    {
                        x4+=5;
                        show();
                    }
                    show();
                }
                else
                {
                    score4++;
                    for(int i = 0; i < 100; i+=5)
                    {
                        x4-=5;
                        show();
                    }
                    show();
                }
            }
            else
            {
                score4++;
                for(int i = 0; i < 50; i+=5)
                {
                    y4-=5;
                    show();
                }
                show();
            }
            a--;
        }
        if (score4==6)
            ladder_4_1();
        else if(score4==19)
            ladder_4_2();
        else if(score4==57)
            ladder_4_3();
        else if(score4==52)
            ladder_4_4();
        else if(score4==47)
            snake_4_1();
        else if(score4==62)
            snake_4_2();
        else if(score4 == 96)
            snake_4_3();

        else if(score4 == 100)
        {
            cleardevice();
            settextstyle(EUROPEAN_FONT, HORIZ_DIR, 10);
            outtextxy(100, 100, "winner player: 4");
        }
    }

    settextstyle(EUROPEAN_FONT, HORIZ_DIR, 4);
    outtextxy(1110, 150, "Now press 1");


    if(score4 == 100)
    {
        cleardevice();
        settextstyle(EUROPEAN_FONT, HORIZ_DIR, 10);
        outtextxy(100, 100, "winner player: 4");
        x1=125, x2=175, x3=175, x4=125, y1=535, y2=535, y3=515, y4=515;
        score1=1,score2=1, score3=1, score4=1;
        ofstream file;
        file.open("Save.txt");
        file <<125<< endl <<175 << endl << 175 << endl << 125 << endl << 535 << endl << 535 << endl <<  515 << endl <<515 << endl << 1 << endl <<1 << endl << 1<< endl << 1 <<endl;
        file.close();
        settextstyle(EUROPEAN_FONT, HORIZ_DIR, 4);
    }
}



//  player 1 ladder 1
void ladder_1_1()
{
    score1 = 46;

    //coming to the point
    for(int i = 0; i < 20; i+=5)
    {
        y1-= 5;
        show();
    }

    //main part
    for(int i = 0; i < 50; i+=5)
    {
        x1+=5;
        y1-=18;
        show();
    }

    //reaching to the point
    for(int i = 0; i < 50; i+=5)
    {
        x1-= 5;
        show();
    }

}

//  player 2 ladder 1
void ladder_2_1()
{
    score2 = 46;

    //coming to the point
    for(int i = 0; i < 50; i+=5)
    {
        x2-= 5;
        y2-= 2;
        show();
    }

    //main part
    for(int i = 0; i < 50; i+=5)
    {
        x2+=5;
        y2-=18;
        show();
    }

    //reaching to the point
    //on the point
}

//  player 3 ladder 1
void ladder_3_1()
{
    score3 = 46;

    //coming to the point
    for(int i = 0; i < 50; i+=5)
    {
        x3-= 5;
        show();
    }

    //main part
    for(int i = 0; i < 50; i+=5)
    {
        x3+=5;
        y3-=18;
        show();
    }

    //reaching to the point
    for(int i = 0; i < 20; i+=5)
    {
        y3-= 5;
        show();
    }
}

//  player 4 ladder 1
void ladder_4_1()
{
    score4 = 46;

    //coming to the point
    //on the point

    //main part
    for(int i = 0; i < 50; i+=5)
    {
        x4+=5;
        y4-=18;
        show();
    }

    //reaching to the point
    for(int i = 0; i < 50; i+=5)
    {
        x4-= 5;
        y4 -= 2;
        show();
    }
}

//  player 1 ladder 2
void ladder_1_2()
{
    score1 = 43;

    //coming to the point
    for(int i = 0; i < 25; i+= 5)
    {
        x1 += 5;
        y1 -= 4;
        show();
    }

    //main part
    for(int i = 0; i < 100; i+=10)
    {
        x1 += 10;
        y1 -= 13;
        show();
    }

    //reach the final destination
    for(int i = 0; i < 25; i+= 5)
    {
        x1 -= 5;
        show();
    }
}

//  player 2 ladder 2
void ladder_2_2()
{
    score2 = 43;

    //coming to the point
    for(int i = 0; i < 25; i+= 5)
    {
        x2 -= 5;
        y2 -= 4;
        show();
    }
    //main part
    for(int i = 0; i < 100; i+=10)
    {
        x2 += 10;
        y2 -= 13;
        show();
    }
    //reach the final destination
    for(int i = 0; i < 25; i+= 5)
    {
        x2 += 5;
        show();
    }
}

//  player 3 ladder 2
void ladder_3_2()
{
    score3 = 43;

    //coming to the point
    for(int i = 0; i < 25; i+= 5)
    {
        x3 -= 5;
        show();
    }
    //main part
    for(int i = 0; i < 100; i+=10)
    {
        x3 += 10;
        y3 -= 13;
        show();
    }

    //reach the final destination
    for(int i = 0; i < 25; i+= 5)
    {
        x3 += 5;
        y3 -= 4;
        show();
    }
}

//  palyer 4 ladder 2
void ladder_4_2()
{
    score4 = 43;

    //coming to the point
    for(int i = 0; i < 25; i+= 5)
    {
        x4 += 5;
        show();
    }
    //main part
    for(int i = 0; i < 100; i+=10)
    {
        x4 += 10;
        y4 -= 13;
        show();
    }
    //reach the final destination
    for(int i = 0; i < 25; i+= 5)
    {
        x4 -= 5;
        y4 -= 4;
        show();
    }
}


//  player 1 ladder 3
void ladder_1_3()
{
    score1 = 98;

    //coming to the point
    for(int i = 0; i < 50; i+= 5)
    {
        x1+= 5;
        y1-= 2;
        show();
    }

    //main part
    for(int i = 0; i < 150; i+=5)
    {
        x1-= 5;
        y1-= 6;
        show();
    }

    //reach the point
    //on the point

}

//  player 2 ladder 3
void ladder_2_3()
{
    score2 = 98;

    //coming to the point
    for(int i = 0; i < 50; i+= 5)
    {
        y2-= 2;
        show();
    }
    //main part
    for(int i = 0; i < 150; i+=5)
    {
        x2-= 5;
        y2-= 6;
        show();
    }

    //reach the point
    for(int i = 0; i < 50; i+= 5)
    {
        x2+= 5;
        show();
    }
}

//  player 3 ladder 3
void ladder_3_3()
{
    score3 = 98;

    //coming to the point
    //on the point

    //main part
    for(int i = 0; i < 150; i+=5)
    {
        x3-= 5;
        y3-= 6;
        show();
    }

    //reach the point
    for(int i = 0; i < 50; i+= 5)
    {
        x3+= 5;
        y3-= 2;
        show();
    }

}

//  player 4 ladder 3
void ladder_4_3()
{
    score4 = 98;

    //coming to the point
    for(int i = 0; i < 50; i+= 5)
    {
        x4+= 5;
        show();
    }

    //main part
    for(int i = 0; i < 150; i+=5)
    {
        x4-= 5;
        y4-= 6;
        show();
    }

    //reach the piont
    for(int i = 0; i < 50; i+= 5)
    {
        y4-= 2;
        show();
    }
}

//  player 1 ladder 4
void ladder_1_4()
{
    score1 = 71;

    //comeing to the point
    for(int i = 0; i < 25; i+= 5)
    {
        x1+= 5;
        y1-= 4;
        show();
    }

    //main part
    for(int i = 0; i < 100; i+=10)
    {
        x1 += 10;
        y1-=9;
        show();
    }

    //reaching to the point
    for(int i = 0; i < 25; i+= 5)
    {
        x1-= 5;
        y1+= 2;
        show();
    }
}

//  player 2 ladder 4
void ladder_2_4()
{
    score2 = 71;

    //comeing to the point
    for(int i = 0; i < 25; i+= 5)
    {
        x2-= 5;
        y2-= 4;
        show();
    }
    //main part
    for(int i = 0; i < 100; i+=10)
    {
        x2 += 10;
        y2-=9;
        show();
    }

    //reaching to the point
    for(int i = 0; i < 25; i+= 5)
    {
        x2+= 5;
        y2+= 2;
        show();
    }
}


//  player 3 ladder 4
void ladder_3_4()
{
    score3 = 71;

    //comeing to the point
    for(int i = 0; i < 25; i+= 5)
    {
        x3-= 5;
        show();
    }
    //main part
    for(int i = 0; i < 100; i+=10)
    {
        x3+= 10;
        y3-=9;
        show();
    }

    //reaching to the point
    for(int i = 0; i < 25; i+= 5)
    {
        x3+= 5;
        y3-= 2;
        show();
    }
}

//  player 4 ladder 4
void ladder_4_4()
{
    score4 = 71;

    //comeing to the point
    for(int i = 0; i < 25; i+= 10)
    {
        x4+= 10;
        show();
    }

    //main part
    for(int i = 0; i < 100; i+=10)
    {
        x4 += 10;
        y4-=9;
        show();
    }

    //reaching to the point
    for(int i = 0; i < 25; i+= 5)
    {
        x4-= 5;
        y4-= 2;
        show();
    }
}


//player 1 snake 1
void snake_1_1()
{
    score1=9;

    //coming to the point
    for(int i = 0; i < 50; i+=5)
    {
        x1+=5;
        y1-=2;
        show();
    }

    //part 1
    for(int i = 0; i < 25; i+=5)
    {
        x1+=5;
        y1+=7;
        show();
    }

    //part 2
    for(int i = 0; i <50; i+=5)
    {
        y1+=5;
        show();
    }

    //part 3
    for(int i = 0; i < 125; i+=5)
    {
        x1+= 5;
        y1+= 4;
        show();
    }

    //  new
    for(int i = 0; i < 15; i+=5)
    {
        y1+= 5;
        show();
    }



    //final reach for player 1 in snake 1
    for(int i = 0; i < 20; i+=5)
    {
        y1+= 5;
        show();
    }
}

//player 2 snake 1
void snake_2_1()
{
    score2 = 9;

    //coming to the point
    for(int i = 0; i < 50; i+=5)
    {
        y2-=2;
        show();
    }

    //part 1
    for(int i = 0; i < 25; i+=5)
    {
        x2+=5;
        y2+=7;
        show();
    }

    //part 2
    for(int i = 0 ; i <50; i+=5)
    {
        y2+=5;
        show();
    }

    //part 3
    for(int i = 0; i < 125; i+=5)
    {
        x2+= 5;
        y2+= 4;
        show();
    }

    //  new
    for(int i = 0; i < 15; i+=5)
    {
        y2+= 5;
        show();
    }

    //final reach for player 2 in snake 1
    for(int i = 0; i < 50; i+=5)
    {
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
        x3+=5;
        y3+=7;
        show();
    }

//part 2
    for(int i = 0 ; i <50; i+=5)
        //  for(int i = 315 ; i <400; i+=4)
    {
        y3+=5;
        show();
    }

    //part 3
    for(int i = 0; i < 125; i+=5)
    {
        x3+= 5;
        y3+= 4;
        show();
    }

    //  new
    for(int i = 0; i < 15; i+=5)
    {
        y3+= 5;
        show();
    }

//final reach for player 3 in snake 1
    for(int i = 0; i < 50; i+=5)
    {
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
        x4+=5;
        show();
    }

    //part 1
    for(int i = 0; i < 25; i+=5)
    {
        x4+=5;
        y4+=7;
        show();
    }

    //part 2
    for(int i = 0 ; i <50; i+=5)
    {
        y4+=5;
        show();
    }

    //part 3
    for(int i = 0; i < 125; i+=5)
    {
        x4+= 5;
        y4+= 4;
        show();
    }

    //  new
    for(int i = 0; i < 15; i+=5)
    {
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
        x1+=5;
        y1-=2;
        show();
    }

    //first step
    for(int i = 0; i < 25; i+=5)
    {
        y1+=5;
        show();
    }

    //second step
    for(int i = 0; i < 50; i+=5)
    {
        x1-=5;
        y1+=1;
        show();
    }

    //third step
    for(int i = 0; i < 20; i+= 5)
    {
        x1-= 5;
        y1+= 5;
        show();
    }
    //forth step
    for(int i = 0; i < 80; i+=5)
    {
        y1+=5;
        show();
    }
    //fifth step
    for(int i = 0; i < 25; i+=5)
    {
        x1-= 1;
        y1+= 5;
        show();
    }
    //make the final position for play 1 snk 2
    for(int i = 0; i < 50; i+=5)
    {
        x1-=5;
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
        x2-=5;
        y2-=2;
        show();
    }

    //first step
    for(int i = 0; i < 25; i+=5)
    {
        y2+=5;
        show();
    }

    //second step
    for(int i = 0; i < 50; i+=5)
    {
        x2-=5;
        y2+=1;
        show();
    }

    //third step
    for(int i = 0; i < 20; i+= 5)
    {
        x2-= 5;
        y2+= 5;
        show();
    }
    //forth step
    for(int i = 0; i < 80; i+=5)
    {
        y2+=5;
        show();
    }
    //fifth step
    for(int i = 0; i < 25; i+=5)
    {
        x2-= 1;
        y2+= 5;
        show();
    }
    //make the final position for play 2 snk 2
    // on the point
}

//player 3 snake 2
void snake_3_2()
{
    score3 = 40;

    //make the first step
    for(int i = 0; i < 25; i+=5)
    {
        x3-=5;
        y3+=2;
        show();
    }

    //first step
    for(int i = 0; i < 25; i+=5)
    {
        y3+=5;
        show();
    }

    //second step
    for(int i = 0; i < 50; i+=5)
    {
        x3-=5;
        y3+=1;
        show();
    }

    //third step
    for(int i = 0; i < 20; i+= 5)
    {
        x3-= 5;
        y3+= 5;
        show();
    }
    //forth step
    for(int i = 0; i < 80; i+=5)
    {
        y3+=5;
        show();
    }
    //fifth step
    for(int i = 0; i < 25; i+=5)
    {
        x3-= 1;
        y3+= 5;
        show();
    }

    //make the final position for play 4 snk 2
    for(int i = 0; i < 50; i+=5)
    {
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
        x4+=5;
        y4+=2;
        show();
    }

    //first step
    for(int i = 0; i < 25; i+=5)
    {
        y4+=5;
        show();
    }

    //second step
    for(int i = 0; i < 50; i+=5)
    {
        x4-=5;
        y4+=1;
        show();
    }

    //third step
    for(int i = 0; i < 20; i+= 5)
    {
        x4-= 5;
        y4+= 5;
        show();
    }
    //forth step
    for(int i = 0; i < 80; i+=5)
    {
        x4+= 1;
        y4+= 5;
        show();
    }
    x4 = 180;
    //fifth step
    for(int i = 0; i < 25; i+=5)
    {
        x4-= 1;
        y4+= 5;
        show();
    }

    //make the final position for play 4 snk 2
    for(int i = 0; i < 50; i+=5)
    {
        x4-= 5;
        y4-= 2;
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
        x1+=5;
        y1-=2;
        show();
    }

    //first step
    for(int i = 0; i < 10; i+=5)
    {
        x1+= 5;
        y1+= 1;
        show();
    }

    //second step
    for(int i = 0; i < 20; i+=5)
    {
        y1+= 5;
        show();
    }
//new adjustment
    x1 = 560;
    y1 = 100;
    show();

    //third step
    for(int i = 0; i < 10; i+=2)
    {
        x1 += 2;
        y1 += 3;
        show();
    }

    //fourth step
    for(int i = 0; i < 70; i+=10)
    {
        x1+= 10;
        y1+= 5;
        show();
    }

    //fifth step
    for(int i = 0; i < 10; i+=2)
    {
        x1+= 2;
        y1+= 5;
        show();
    }

    //make the final position for play 1 snk 2
    for(int i = 0; i < 25; i+=5)
    {
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
        x2-=5;
        y2-=2;
        show();
    }

    //first step
    for(int i = 0; i < 10; i+=5)
    {
        x2+= 5;
        y2+= 1;
        show();
    }

    //second step
    for(int i = 0; i < 20; i+=5)
    {
        y2+= 5;
        show();
    }
//new adjustment
    x2 = 560;
    y2 = 100;
    show();

    //third step
    for(int i = 0; i < 10; i+=2)
    {
        x2 += 2;
        y2 += 3;
        show();
    }

    //fourth step
    for(int i = 0; i < 70; i+=10)
    {
        x2+= 10;
        y2+= 5;
        show();
    }

    //fifth step
    for(int i = 0; i < 10; i+=2)
    {
        x2+= 2;
        y2+= 5;
        show();
    }

    //make the final position for play 1 snk 2
    for(int i = 0; i < 25; i+=5)
    {
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
        x3-=5;
        y3+=2;
        show();
    }

    //first step
    for(int i = 0; i < 10; i+=5)
    {
        x3+= 5;
        y3+= 1;
        show();
    }

    //second step
    for(int i = 0; i < 20; i+=5)
    {
        y3+= 5;
        show();
    }
//new adjustment
    for(int i = 0; i < 1; i++)
    {
        x3 = 560;
        y3 = 100;
        show();
    }

    //third step
    for(int i = 0; i < 10; i+=2)
    {
        x3 += 2;
        y3 += 3;
        show();
    }

    //fourth step
    for(int i = 0; i < 70; i+=10)
    {
        x3+= 10;
        y3+= 5;
        show();
    }

    //fifth step
    for(int i = 0; i < 10; i+=2)
    {
        x3+= 2;
        y3+= 5;
        show();
    }

    //make the final position for play 1 snk 2
    for(int i = 0; i < 25; i+=5)
    {
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
        x4+=5;
        y4+=2;
        show();
    }

    //first step
    for(int i = 0; i < 10; i+=5)
    {
        x4+= 5;
        y4+= 1;
        show();
    }

    //second step
    for(int i = 0; i < 20; i+=5)
    {
        y4+= 5;
        show();
    }
//new adjustment
    x4 = 560;
    y4 = 100;
    show();

    //third step
    for(int i = 0; i < 10; i+=2)
    {
        x4 += 2;
        y4 += 3;
        show();
    }

    //fourth step
    for(int i = 0; i < 70; i+=10)
    {
        x4+= 10;
        y4+= 5;
        show();
    }

    //fifth step
    for(int i = 0; i < 10; i+=2)
    {
        x4+= 2;
        y4+= 5;
        show();
    }

    //make the final position for play 1 snk 2
    for(int i = 0; i < 25; i+=5)
    {
        x4-= 5;
        y4-= 2;
        show();
    }
}


