//////////////////////////////////////////////////////
///Nicole Anderson
////CSCI238
////Assignment2
////Make a gradient image with two colors
////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

struct Pixel{
int finalred;
int finalgreen;
int finalblue;
}

void tofolder(char, int, int, int, int, int, int, int, int);
void pixelColor(int, int, int, int, int, int, int, int);


int main(int argc, char* argv[])
{

char file = argv[1];
int rows = atof(argv[2]);
int columns = atof( argv[3]);

char color1;
int red1, green1, blue1;
int red2, green2, blue2;
cout << "Please select a color from the list:" << endl;
cout << "\t Enter 'r' for Red" << endl;
cout << "\t Enter 'g' for Green" << endl;
cout << "\t Enter 'b' for Blue" << endl;

cout << "Enter your choice for color1: " << endl;
cin>> color1;

switch(color1)
case 'r':
red1 = 255;
green1 = 0;
blue1 = 0;
break;

case 'g':
red1 = 0;
green1=255;
blue1 = 0;
break;

case 'b':
red1 = 0;
green1 = 0;
blue1 = 255;
break;

cout <<"Enter the RGB values for color2: " << endl;
cin >>red2>>green2>>blue2;

if(red > 255 || red < 0)
{
cout << "Wrong red size";
exit(1);
}
if(green > 255 || green < 0)
{
cout << "Wrong green size";
exit(1);
}
if(blue > 255 || blue < 0)
{
cout << "Wrong blue size";
exit(1);
}
tofolder(file, columns, rows, red1, green1, blue1, red2, green2, blue2);
}

void pixelColor(int r1, int g1, int b1, int r2, int g2, int b2, int r, int c)
{
int ratio = c/r;
//distance = sqrt(ratio*r)^2 +c^2
int distance = sqrt((ratio*r)(ratio*r) +(c*c));
//max distance = sqrt (ratio *(rows-1))^2 + (columns - 1)^2
int maxDistance = sqrt(((ratio*(r-1))(ratio*(r-1))) + ((c-1)*(c-1)))
//color = (1 - (dis/max))*color1 + (dis/max)*color2
int disOverMax = distance/maxDistance;
finalred = ((1-disOverMax)*r1)+ (disOverMax*r2);
finalgreen = ((1-disOverMax)*g1)+ (disOverMax*g2);
finalblue = ((1-disOverMax)*b1)+ (disOverMax*b2);
}

void tofolder(char file, int c, int r, int reds1, int greens1, int blues1, int reds2, int greens2, int blues2)
{
FILE *output;
output = fopen(file);
fprintf(output, "P6 \n" + c + " " + r + "\n 255\n");
for (int row = 0; row< r; row++)
{
for (int cols = 0; cols < c; cols++)
{
Pixel pixelColor(int redOne, int greenOne, int blueOne, int redTwo, int greenTwo, int blueTwo, int numberOfRow, int numberOfColumns);
Pixel pixels= pixelColor(reds1, greens1, blues1, reds2, greens2, blues2, row, cols);
fprintf(output, "%c%c%c", pixels.finalred, pixels.finalgreen, pixels.finalblue);
}
}
fclose(output);
cout << file << " was successfully created! " << endl;
}