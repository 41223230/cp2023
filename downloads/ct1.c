/* =========================
 struct – 3.
========================= */
#include <stdio.h>
#include <string.h>

/* ====================
 struct Mouse.
==================== */
struct Mouse
{
    int xPos, yPos;
    char Name[10];
};

/* ====================
 Copy Mouse 1
==================== */
void cpyMouse1(struct Mouse *tgt, struct Mouse *src)
{
    tgt->xPos = src->xPos;
    tgt->yPos = src->yPos;
    strcpy(tgt->Name, src->Name);
}

/* ====================
 main function.
==================== */
int main()
{
    struct Mouse myMouse, yourMouse;

    yourMouse.xPos = 10;
    yourMouse.yPos = 20;
    strcpy(yourMouse.Name, "Mickey");

    cpyMouse1(&myMouse, &yourMouse);

    printf("Name: %s, X: %d, Y: %d\n", myMouse.Name, myMouse.xPos, myMouse.yPos);

    return 0;
}