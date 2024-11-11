// C program to print
// message as colored characters
#include<stdio.h>
#include<graphics.h>
#include<dos.h>

int inverse(int c)
{
    if(c == 2)
    {
        return 4;
    }
    if(c == 4)
    {
        return 2;
    }
}



// function for printing
// message as colored character
void printMsg()
{
	// auto detection
	int gdriver = DETECT,gmode,i;

	// initialize graphics mode
	initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");

///10,12
///4,2
    int A = 4;
    int B = 2;

		// setcolor of cursor

		// set text style as
		// settextstyle(font, orientation, size)
    settextstyle(3,0,70);

    do
    {
		// print text at coordinate x,y;
    setcolor(B);
    outtextxy(20,60,"M");

    setcolor(A);
    outtextxy(50,60,"e");

    setcolor(B);
    outtextxy(75,60,"r");

    setcolor(A);
    outtextxy(87,60,"r");

    setcolor(B);
    outtextxy(105,60,"y");

    setcolor(A);
    outtextxy(150,60,"C");

    setcolor(B);
    outtextxy(180,60,"h");

    setcolor(A);
    outtextxy(200,60,"r");

    setcolor(B);
    outtextxy(215,60,"i");

    setcolor(A);
    outtextxy(225,60,"s");

    setcolor(B);
    outtextxy(245,60,"t");

    setcolor(A);
    outtextxy(255,60,"m");

    setcolor(B);
    outtextxy(285,60,"a");

    setcolor(A);
    outtextxy(310,60,"s");

    setcolor(B);
    outtextxy(350,60,"D");

    setcolor(A);
    outtextxy(380,60,"a");

    setcolor(B);
    outtextxy(400,60,"d");
///---------------------------------

    setcolor(B);
    outtextxy(20,200,"I");


    setcolor(A);
    outtextxy(50,200,"L");

    setcolor(B);
    outtextxy(70,200,"O");

    setcolor(A);
    outtextxy(100,200,"V");

    setcolor(B);
    outtextxy(130,200,"E");


    setcolor(A);
    outtextxy(190,200,"Y");

    setcolor(B);
    outtextxy(220,200,"O");

    setcolor(A);
    outtextxy(250,200,"U");

    setcolor(B);
    outtextxy(280,200,"!");
    setcolor(A);
    outtextxy(290,200,"!");
    setcolor(B);
    outtextxy(300,200,"!");
    setcolor(A);
    outtextxy(310,200,"!");



    setcolor(B);
    outtextxy(20,300,"T");

    setcolor(A);
    outtextxy(45,300,"h");

    setcolor(B);
    outtextxy(65,300,"a");

    setcolor(A);
    outtextxy(90,300,"n");

    setcolor(B);
    outtextxy(110,300,"k");

    setcolor(A);
    outtextxy(130,300,"s");


    setcolor(B);
    outtextxy(185,300,"f");

    setcolor(A);
    outtextxy(195,300,"o");

    setcolor(B);
    outtextxy(220,300,"r");


    setcolor(A);
    outtextxy(270,300,"e");

    setcolor(B);
    outtextxy(295,300,"v");

    setcolor(A);
    outtextxy(317,300,"e");

    setcolor(B);
    outtextxy(340,300,"r");

    setcolor(A);
    outtextxy(355,300,"y");

    setcolor(B);
    outtextxy(380,300,"t");

    setcolor(A);
    outtextxy(390,300,"h");

    setcolor(B);
    outtextxy(410,300,"i");

    setcolor(A);
    outtextxy(420,300,"n");

    setcolor(B);
    outtextxy(440,300,"g");




	delay(600);

	A = inverse(A);
	B = inverse(B);

    }while(true);
}

// driver program
int main()
{
	printMsg();
	return 0;
}

