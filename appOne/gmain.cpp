#include"libOne.h"
void gmain() {
    window(1600, 900, full);
    int backImg = loadImage("assets\\ground.png");
    int buta1Img = loadImage("assets\\buta1.png");
    image(backImg, 0, 0);
    rectMode(CENTER);
    angleMode(DEGREES);
    image(buta1Img, 400, 300, 0, 2);
    pause();
}