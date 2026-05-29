//— raw mode, screen drawing, escape sequences
#include <stdio.h>

#define WINDOWSIZEX 1920; 
#define WINDOWSIZEY 1080; 



struct point
{
    int x;
    int y;
};
struct rect
{
    struct point pointTR;
    struct point pointBL;
};

struct point makepoint(int x, int y)
{
    struct point temp;
    temp.x = x;
    temp.x = y;
    return temp;
}
struct point addpoint(struct point p1, struct point p2) {
    p1.x += p2.x;  // Modifying a LOCAL copy (pass by value!)
    p1.y += p2.y;
    return p1;
}
// Convention: rect includes left/bottom edges, excludes top/right
bool ptinrect(struct point p, struct rect r) {
    return p.x >= r.pt1.x && p.x < r.pt2.x
        && p.y >= r.pt1.y && p.y < r.pt2.y;
}

struct screen rect;
screen.ptTR = makepoint(WINDOWSIZEX, WINDOWSIZEY);
screen.ptBL = makepoint(0, 0);

struct point middle = makepoint(
    (screen.ptTR.x + screen.ptBL.x) / 2,
    (screen.ptTR.y + screen.ptBL.y) / 2
);




