/*

#include <iostream>
#include <graphics.h>
#include <direct.h>
using namespace std;

typedef struct coordinate
{
    int x, y;
    char code[4];
} PT;

void drawwindow();

void drawline(PT p1, PT p2);

PT setcode(PT p);

int visibility(PT p1, PT p2);

PT resetendpt(PT p1, PT p2);

int main()
{
    // int gd = DETECT, v, gm;
    int gm,gd = DETECT,v;
    PT p1, p2, p3, p4, ptemp;

    cout << "Enter x1 and y1"<<endl;
    cin >> p1.x >> p1.y;
    cout << "\nEnter x2 and y2\n";
    cin >> p2.x >> p2.y;

    initgraph(&gd, &gm, (char*)"c:\\Turboc3\\BGI");

    drawwindow();
    delay(500);
    drawline(p1, p2);
    delay(500);
    cleardevice();
    delay(500);

    p1 = setcode(p1);
    p2 = setcode(p2);
    v = visibility(p1, p2);
    delay(500);

    switch (v)
    {
    case 0:
        drawwindow();
        delay(500);
        drawline(p1, p2);
        break;
    case 1:
        drawwindow();
        delay(500);
        break;
    case 2:
        p3 = resetendpt(p1, p2);
        p4 = resetendpt(p2, p1);
        drawwindow();
        delay(500);
        drawline(p3, p4);
        break;
    }

    delay(5000);
    closegraph();
    return 0;
}

void drawwindow()
{
    line(150, 100, 450, 100);
    line(450, 100, 450, 350);
    line(450, 350, 150, 350);
    line(150, 350, 150, 100);
}

void drawline(PT p1, PT p2)
{
    line(p1.x, p1.y, p2.x, p2.y);
}

PT setcode(PT p) // for setting the 4 bit code
{
    PT ptemp;

    if (p.y < 100)
        ptemp.code[0] = '1'; // Top
    else
        ptemp.code[0] = '0';

    if (p.y > 350)
        ptemp.code[1] = '1'; // Bottom
    else
        ptemp.code[1] = '0';

    if (p.x > 450)
        ptemp.code[2] = '1'; // Right
    else
        ptemp.code[2] = '0';

    if (p.x < 150)
        ptemp.code[3] = '1'; // Left
    else
        ptemp.code[3] = '0';

    ptemp.x = p.x;
    ptemp.y = p.y;
    return ptemp;
}

int visibility(PT p1, PT p2)
{
    int i, flag = 0;
    for (i = 0; i < 4; i++)
    {
        if ((p1.code[i] != '0') || (p2.code[i] != '0'))
            flag = 1;
    }

    if (flag == 0)
        return 0;

    for (i = 0; i < 4; i++)
    {
        if ((p1.code[i] == p2.code[i]) && (p1.code[i] == '1'))
            flag = 0;
    }

    if (flag == 0)
        return 1;

    return 2;
}

PT resetendpt(PT p1, PT p2)
{
    PT temp;
    int x, y, i;
    float m, k;

    if (p1.code[3] == '1')
        x = 150;
    if (p1.code[2] == '1')
        x = 450;

    if ((p1.code[3] == '1') || (p1.code[2] == '1'))
    {
        m = (float)(p2.y - p1.y) / (p2.x - p1.x);
        k = (p1.y + (m * (x - p1.x)));
        temp.y = k;
        temp.x = x;

        for (i = 0; i < 4; i++)
            temp.code[i] = p1.code[i];

        if (temp.y <= 350 && temp.y >= 100)
            return temp;
    }

    if (p1.code[0] == '1')
        y = 100;
    if (p1.code[1] == '1')
        y = 350;

    if ((p1.code[0] == '1') || (p1.code[1] == '1'))
    {
        m = (float)(p2.y - p1.y) / (p2.x - p1.x);
        k = (float)p1.x + (float)(y - p1.y) / m;
        temp.x = k;
        temp.y = y;

        for (i = 0; i < 4; i++)
            temp.code[i] = p1.code[i];

        return temp;
    }
    else
        return p1;
}

*/

// #include <graphics.h>
// #include <iostream>
// #include <stdlib.h>
// using namespace std;
// class circle2
// {
// public:
//     int x, y, d, x1, y1, x2, y2, r;
// };

// class circle1 : public circle2
// {
// public:
//     void br_circle(int x1, int y1, int r)
//     {
//         x = 0, y = r;
//         d = 3 - 2 * r;
//         // putpixel(y1,y1,BLUE);
//         while (x <= y)
//         {
//             delay(100);
//             putpixel(x1 + x, y1 + y, 10);
//             putpixel(x1 + y, y1 + x, 12);
//             putpixel(x1 - y, y1 + x, 9);
//             putpixel(x1 + x, y1 - y, 11);
//             putpixel(x1 - x, y1 - y, 4);
//             putpixel(x1 - y, y1 - x, 7);
//             putpixel(x1 - x, y1 + y, 15);
//             putpixel(x1 + y, y1 - x, 14);
//             if (d < 0)
//             {
//                 d = d + 4 * x + 6;
//                 x++;
//             }
//             else
//             {
//                 d = d + 4 * (x - y) + 10;
//                 x++;
//                 y--;
//             }
//         }
//     }

//     void dda_line(int x1, int y1, int x2, int y2)
//     {
//         float x, y, dx, dy, len;
//         int i;

//         dx = abs(x2 - x1);

//         dy = abs(y2 - y1);

//         if (dx >= dy)
//         {
//             len = dx;
//         }
//         else
//         {
//             len = dy;
//         }

//         dx = (x2 - x1) / len;
//         dy = (y2 - y1) / len;

//         x = x1 + 0.5;
//         y = y1 + 0.5;

//         i = 1;

//         while (i <= len)
//         {
//             delay(20);
//             putpixel(x, y, 11);
//             x = x + dx;
//             y = y + dy;
//             i = i + 1;
//         }

//         // putpixel(x,y,15);
//     }

//     void triangle(int x1, int y1, int r)
//     {
//         int h, ax, bx, ay, by, cx, cy;
//         h = 1.73 * r;

//         ax = x1 + h;
//         ay = y1 + r;

//         bx = x1 - h;
//         by = y1 + r;

//         cx = x1;
//         cy = y1 - 2 * r;

//         circle1 d;
//         d.dda_line(ax, ay, bx, by);
//         d.dda_line(bx, by, cx, cy);
//         d.dda_line(cx, cy, ax, ay);
//     }
// };

// int main()
// {
//     circle1 c1;
//     int x1, y1, r;
//     int gd = DETECT, gm;
//     int xmax, ymax, xmid, ymid;

//     cout << "Enter the centre of the circle\t";
//     cin >> x1 >> y1;
//     cout << "Enter the radius	\t";
//     cin >> r;

//     initgraph(&gd, &gm, NULL);

//     xmax = getmaxx();
//     ymax = getmaxy();
//     xmid = xmax / 2;
//     ymid = ymax / 2;

//     line(xmid, 0, xmid, ymax);
//     line(0, ymid, xmax, ymid);

//     c1.br_circle(xmid + x1, ymid - y1, r);
//     c1.br_circle(xmid + x1, ymid - y1, 2 * r);

//     c1.triangle(xmid + x1, ymid - y1, r);

//     delay(1000);
//     getch();
//     closegraph();
//     return 0;
// }



// #include <graphics.h>
// #include <iostream>

// using namespace std;

// void floodFill(int x, int y, int old, int fill)
// {
//     int current;
//     current = getpixel(x, y);
//     if (current == old)
//     {
//         putpixel(x, y, fill);
//         // delay(1);
//         floodFill(x + 1, y, old, fill);
//         floodFill(x - 1, y, old, fill);
//         floodFill(x, y + 1, old, fill);
//         floodFill(x, y - 1, old, fill);
//     }
// }
// void boundaryfill(int x, int y, int fcolor, int bcolor)
// {
//     if (getpixel(x, y) != fcolor && getpixel(x, y) != bcolor)
//     { // delay(1);
//         putpixel(x, y, fcolor);
//         boundaryfill(x + 1, y, fcolor, bcolor);
//         boundaryfill(x, y + 1, fcolor, bcolor);
//         boundaryfill(x - 1, y, fcolor, bcolor);
//         boundaryfill(x, y - 1, fcolor, bcolor);
//     }
// }

// void scanline(int x1, int y1, int x2, int y2)
// {
//     int x, y;
//     setcolor(RED);
//     rectangle(x1, y1, x2, y2);
//     x = x1 + 1;
//     y = y1 + 1;
//     x2--;
//     y2--;
//     setcolor(YELLOW);
//     while (y2 >= y)
//     {
//         moveto(x, y);
//         lineto(x2, y);
//         y++;
//         // delay(500);
//     }
// }

// int main()
// {
//     int x, y, o = 0, x1, y1, x2, y2, ch;
//     // clrscr();
//     int gd = DETECT, gm;

//     cout << "Enter the coordinates of rectangle:";
//     cin >> x1 >> y1 >> x2 >> y2;

//     cout << "\n Fill color in polygon.......\n";
//     cout << "1.Flood fill algorithm.....\n";
//     cout << "2.Boundary fill algorithm.....\n";
//     cout << "3.Scan line Algorithm.........\n";
//     cout << "Enter Ur Choice.....\n";
//     cin >> ch;
//     initgraph(&gd, &gm, NULL);
//     switch (ch)
//     {
//     case 1:
//         setcolor(RED);
//         rectangle(x1, y1, x2, y2);
//         x = (x1 + x2) / 2;
//         y = (y1 + y2) / 2;
//         floodFill(x, y, o, YELLOW);
//         break;

//     case 2:
//         setcolor(RED);
//         rectangle(x1, y1, x2, y2);
//         x = (x1 + x2) / 2;
//         y = (y1 + y2) / 2;
//         boundaryfill(x, y, GREEN, RED);
//         break;
//     case 3:
//         scanline(x1, y1, x2, y2);
//         break;
//     }
//     getch();
//     delay(500000);
//     closegraph();
//     return 0;
// }

// #include <iostream>
// #include <graphics.h>
// #include <math.h>
// using namespace std;

// int pi[10]; // total points i.e x & y
// double b[3][3] = {1, 0, 0, 0, 1, 0, 0, 0, 1};
// int c[1][1];
// float a[1][1];

// void matmul(float[]);

// int main()
// {
//     int i, x, y, tx, ty, sx, sy, angle = 10, xmax, ymax, xmid, ymid, op;
//     int gm, gd = DETECT;
//     float p1[10] = {50, 50,100, 50, 100, 100, 50, 100, 50, 50};

//     cout << "\nSelect transformation:";
//     cout << "\n1.Translation";
//     cout << "\n2.Rotation:";
//     cout << "\n3.Scaling:";
//     cout << "\nEnter the option:";
//     cin >> op;

//     switch (op)
//     {
//     case 1:
//         cout << "\nEnter x translation:";
//         cin >> tx;
//         cout << "\nEnter y translation:";
//         cin >> ty;

//         b[0][0] = 1;
//         b[0][1] = 0;
//         b[0][2] = 0;

//         b[1][0] = 0;
//         b[1][1] = 1;
//         b[1][2] = 0;

//         b[2][0] = tx;
//         b[2][1] = ty;
//         b[2][2] = 1;

//         break;

//     case 2:
//         cout << "\nEnter rotation angle:";
//         cin >> angle;

//         b[0][0] = cos(angle * 3.14 / 180);
//         b[0][1] = sin(angle * 3.14 / 180);
//         b[0][2] = 0;

//         b[1][0] = -sin(angle * 3.14 / 180);
//         b[1][1] = cos(angle * 3.14 / 180);
//         b[1][2] = 0;

//         b[2][0] = 0;
//         b[2][1] = 0;
//         b[2][2] = 1;

//         break;

//     case 3:
//         cout << "\nEnter x scaling:";
//         cin >> sx;
//         cout << "\nEnter y scaling:";
//         cin >> sy;

//         b[0][0] = sx;
//         b[0][1] = 0;
//         b[0][2] = 0;

//         b[1][0] = 0;
//         b[1][1] = sy;
//         b[1][2] = 0;

//         b[2][0] = 0;
//         b[2][1] = 0;
//         b[2][2] = 1;

//         break;
//     }

//     initgraph(&gd, &gm, NULL);

//     xmax = getmaxx();
//     ymax = getmaxy();
//     xmid = xmax / 2;
//     ymid = ymax / 2;

//     setcolor(1);
//     line(xmid, 0, xmid, ymax);
//     line(0, ymid, xmax, ymid);
//     setcolor(4);

//     for (i = 0; i < 8; i = i + 2)
//     {
//         line(p1[i] + xmid, ymid - p1[i + 1], xmid + p1[i + 2], ymid - p1[i + 3]);
//     }

//     matmul(p1);
//     setcolor(15);

//     for (i = 0; i < 8; i = i + 2)
//     {
//         line(xmid + pi[i], ymid - pi[i + 1], xmid + pi[i + 2], ymid - pi[i + 3]);
//     }

//     getch();
//     closegraph();
//     return 0;
// }

// void matmul(float p[10])
// {
//     int i;
//     for (i = 0; i < 9; i = i + 2)
//     {
//         a[0][0] = p[i];
//         a[0][1] = p[i + 1];
//         c[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0] + b[2][0];
//         c[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1] + b[2][1];
//         pi[i] = c[0][0];
//         pi[i + 1] = c[0][1];
//     }
// }

// #include <iostream>
// #include <math.h>
// #include <graphics.h>
// using namespace std;
// class kochCurve
// {
// public:
//     void koch(int it, int x1, int y1, int x5, int y5)
//     {
//         int x2, y2, x3, y3, x4, y4;
//         int dx, dy;
//         if (it == 0)
//         {
//             line(x1, y1, x5, y5);
//         }
//         else
//         {
//             delay(10);
//             dx = (x5 - x1) / 3;
//             dy = (y5 - y1) / 3;
//             x2 = x1 + dx;
//             y2 = y1 + dy;
//             x3 = (int)(0.5 * (x1 + x5) + sqrt(3) * (y1 - y5) / 6);
//             y3 = (int)(0.5 * (y1 + y5) + sqrt(3) * (x5 - x1) / 6);
//             x4 = 2 * dx + x1;
//             y4 = 2 * dy + y1;
//             koch(it - 1, x1, y1, x2, y2);
//             koch(it - 1, x2, y2, x3, y3);
//             koch(it - 1, x3, y3, x4, y4);
//             koch(it - 1, x4, y4, x5, y5);
//         }
//     }
// };
// int main()
// {
//     kochCurve k;
//     int it;
//     cout << "Enter Number Of Iterations : " << endl;
//     cin >> it;
//     int gd = DETECT, gm;
//     initgraph(&gd, &gm, NULL);
//     k.koch(it, 150, 20, 20, 280);
//     k.koch(it, 280, 280, 150, 20);
//     k.koch(it, 20, 280, 280, 280);
//     getch();
//     closegraph();
//     return 0;
// }

// i/p-->7

// #include <iostream>
// #include <stdlib.h>
// #include <graphics.h>
// #include <math.h>

// using namespace std;

// void move(int j, int h, int &x, int &y)
// {
//     if (j == 1)
//         y -= h;
//     else if (j == 2)
//         x += h;
//     else if (j == 3)
//         y += h;
//     else if (j == 4)
//         x -= h;
//     lineto(x, y);
// }

// void hilbert(int r, int d, int l, int u, int i, int h, int &x, int &y)
// {
//     if (i > 0)
//     {
//         i--;
//         hilbert(d, r, u, l, i, h, x, y);
//         move(r, h, x, y);
//         hilbert(r, d, l, u, i, h, x, y);
//         move(d, h, x, y);
//         hilbert(r, d, l, u, i, h, x, y);
//         move(l, h, x, y);
//         hilbert(u, l, d, r, i, h, x, y);
//     }
// }

// int main()
// {
//     int n, x1, y1;
//     int x0 = 50, y0 = 150, x, y, h = 10, r = 2, d = 3, l = 4, u = 1;

//     cout << "\nGive the value of n: ";
//     cin >> n;
//     x = x0;
//     y = y0;
//     int gm, gd = DETECT;
//     initgraph(&gd, &gm, NULL);
//     moveto(x, y);
//     hilbert(r, d, l, u, n, h, x, y);
//     delay(10000);

//     closegraph();

//     return 0;
// }





// Final code for cohen suther land algorithm
#include<iostream>
using namespace std;

class Stacks{
    
    public:
    int *arr;
    int top;
    int size;
    Stacks(int n){
        size = n;
        arr = new int[size];
        top = -1;
    }
    bool is_empty(){
        if(top == -1){
            return 1;
        }
        else{
            return 0;
        }
    }

    bool is_Full()
    {
        if(top == size-1){
            return 1;
        }
        else{
            return 0;
        }
    }
    void push(int data){
        if(is_Full()){
            cout<<"Stack is Overflow "<<endl;
            return;
        }
        else{
            top++;
            arr[top] = data;
        }
    }

    int pop(){
        if(is_empty()){
            cout<<"Stack is UnderFlow "<<endl;
        }
        int ans = arr[top];
        arr[top] = -1;
        top--;

        return ans;
    }

    int Top(){
        if(is_empty()){
            return -1;
        }
        else{
            return arr[top];
        }
    }

};

int main(){
    Stacks q(4);
    int e;
    for(int i= 0;i<4;i++){
        cin>>e;
        q.push(e);
    }
    while(!q.is_empty()){
        cout<<q.Top()<<endl;
        q.pop();
    }
}


