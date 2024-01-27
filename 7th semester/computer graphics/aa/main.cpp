#include<cstdio>
#include <bits/stdc++.h>
#include <stdlib.h>
#include<cstdlib>
#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include<vector>
#include<math.h>
#include<ctime>
#include <mmsystem.h>


#define PI 3.1415

float shift = 0;
float fruitX=-.1;
float fruitX2=.1;
float y_position=.1;
float y_position2=.1;
float boomY_position=.25;
float fishY_position=-1;
float fishx_position=0;
float fish2x_position=0;
float fish2Y_position=0;
int state=1;
int fish_state=1;
int score = 0;
float ball_radius = 0.02;
float boom_radius = 0.06;
float boomX_position=2;
bool animation_started = false;
bool animation_fish_started = false;
bool animation_re_fish_started = false;
float cloudX1=0;
float cloudY=.86f;
float cloud_radius= .05;
float cloudX2=-.5;
float cloudX3=.5;
GLfloat position22 = 0.0f;
GLfloat speed22 = 0.007f;
float fishX_boom=fishx_position ;
float fishY_boom=fishY_position-.8;
float fish2X_boom=fish2x_position;
float fish2Y_boom=fish2Y_position-.6;


void reset_animetion()

{
    float shift = 0;
float fruitX=-.1;
float fruitX2=.1;
float y_position=.1;
float y_position2=.1;
float boomY_position=.25;
float fishY_position=-1;
float fishx_position=0;
float fish2x_position=0;
float fish2Y_position=0;
int state=1;
int fish_state=1;
int score = 0;
float ball_radius = 0.03;
float boom_radius = 0.06;
float boomX_position=2;
bool animation_started = false;
bool animation_fish_started = false;
bool animation_re_fish_started = false;
float cloudX1=0;
float cloudY=.86f;
float cloud_radius= .05;
float cloudX2=-.5;
float cloudX3=.5;
GLfloat position22 = 0.0f;
GLfloat speed22 = 0.007f;
float fishX_boom=fishx_position ;
float fishY_boom=fishY_position-.8;
float fish2X_boom=fish2x_position;
float fish2Y_boom=fish2Y_position-.6;
 glutPostRedisplay();

}

// Define the desired frame rate (in frames per second)
const int DESIRED_FPS = 10;

// Define the time interval (in milliseconds) between frames
const int FRAME_INTERVAL = 1000 / DESIRED_FPS;

// Define a variable to store the time of the last frame
unsigned int lastFrameTime = 0;



void display1();
/* Initialize OpenGL Graphics */
void initGL() {
   // Set "clearing" or background color
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}
/* Handler for window-repaint event. Call back when the window first appears and
   whenever the window needs to be re-painted. */

void start_animation(int value) {
    animation_started = true;
    glutPostRedisplay();
}

void start_animation_fish(int value) {
    animation_fish_started = true;
    glutPostRedisplay();
}

void start_animation_re_fish(int value) {
    animation_re_fish_started = true;
    glutPostRedisplay();
}
float random(float min_value, float max_value)
{

    float random_number =min_value + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / (max_value - min_value)));

   return random_number;

}

void notification_sound()
{

    PlaySound("notification.wav", NULL, SND_ASYNC|SND_FILENAME);
    //PlaySound("notification.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);

}
void BackgroundSound()
{

    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME);
    PlaySound("BackgroundSong.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);

}


void write_function(float x, float y, float z, void *font, char *string)
{
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}

void write_display1()
{
  glColor3f(0.0,0.0,0.0);
    write_function(-0.3f, 0.8f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "American International University-Bangladesh (AIUB)");
    write_function(-0.1f, 0.7f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Computer Graphics[C]");
    write_function(-0.18f, 0.6f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Supervised By : MAHFUJUR RAHMAN");
    write_function(-0.18f, 0.55f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, " LECTURER,Computer Science");
    write_function(-0.2f, 0.4f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Welcome to < Catch the Fruit > Game");
    write_function(-0.2f, 0.3f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "To Start the game:");
    write_function(-0.15f, 0.25f, 0.0f, GLUT_BITMAP_HELVETICA_18, "-> Press 1 For Level : 1");
    write_function(-0.15f, 0.2f, 0.0f, GLUT_BITMAP_HELVETICA_18, "-> Press 2 For Level : 2");
    write_function(-0.15f, 0.15f, 0.0f, GLUT_BITMAP_HELVETICA_18, "-> Press 3 For Level : 3");
    write_function(-0.25f, 0.0f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Press -> to move right.      Press <- to move left.");
    write_function(0.5f, -.40f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Develop By :");
    write_function(0.5f, -.50f, 0.0f, GLUT_BITMAP_HELVETICA_18, "21-44792-1        MAHFUZUL HAQUE SHAFE");
    write_function(0.5f, -.55f, 0.0f, GLUT_BITMAP_HELVETICA_18, "21-44824-1        SHAHRIAR HASAN SAHIL");
    write_function(0.5f, -.60f, 0.0f, GLUT_BITMAP_HELVETICA_18, "21-44793-1        NOKIBUL ARFIN SIAM");
    write_function(0.5f, -.65f, 0.0f, GLUT_BITMAP_HELVETICA_18, "21-44802-1        ABDULLA AL MASUD");
    write_function(0.5f, -.70f, 0.0f, GLUT_BITMAP_HELVETICA_18, "21-44800-1        IMRAN HOSSAIN");


}

//circle Function
int circle(float x,float y, float r, float r1, float R,float G, float B){

    int i;
    int triangleAmount = 40;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(R,G,B);
    glVertex2f(x,y);

    for(i=0; i<=triangleAmount;i++)
    {
        glVertex2f(
            x+(r*cos(i*twicePi/triangleAmount)),
            y+(r1*sin(i*twicePi/triangleAmount))
        );
    }

    glEnd();
}

void reshape(int w,int h)
{
	glViewport(0,0,w,h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45,w/h,1,200);
}
void humen()
{
//left Lag
    glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(-.5 +shift,-.625);
    glVertex2f(-.5 +shift,-.5);
    glVertex2f(-.475 +shift,-.5);
    glVertex2f(-.475 +shift,-.625);
    glEnd();

//right Lag
    glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-.475 +shift,-.625);
    glVertex2f(-.475 +shift,-.5);
    glVertex2f(-.45 +shift,-.5);
    glVertex2f(-.45 +shift,-.625);
    glEnd();

//body
  glBegin(GL_POLYGON);

    glColor3f(0.5f, 0.0f, 0.0f);
    glVertex2f(-.5 +shift,-.5);
    glVertex2f(-.45 +shift,-.5);
    glVertex2f(-.45 +shift,-.425);
    glVertex2f(-.5 +shift,-.425);
    glEnd();

//head
  glBegin(GL_POLYGON);

    glColor3f(0.2f, 0.0f, 0.0f);
    glVertex2f(-.45 +shift,-.425);
    glVertex2f(-.5 +shift,-.425);
    glVertex2f(-.5 +shift,-.365);
    glVertex2f(-.45 +shift,-.365);
    glEnd();
//right hand
    glBegin(GL_POLYGON);

    glColor3f(0.2f, 0.0f, 0.0f);
    glVertex2f(-.45 +shift,-.425);
    glVertex2f(-.425 +shift,-.425);
    glVertex2f(-.425 +shift,-.525);
    glVertex2f(-.45 +shift,-.525);
    glEnd();
//left hand
    glBegin(GL_POLYGON);

    glColor3f(0.2f, 0.0f, 0.0f);
    glVertex2f(-.5 +shift,-.425);
    glVertex2f(-.525 +shift,-.425);
    glVertex2f(-.525 +shift,-.525);
    glVertex2f(-.5 +shift,-.525);
    glEnd();

}

void sky()
{
    glBegin(GL_POLYGON);
    glColor3f(0,.7,1);
    glVertex2f(-1,1);
    glVertex2f(1,1);
    glColor3f(.9,.9,.9);
    glVertex2f(1,-1);
    glVertex2f(-1,-1);
    glEnd();
}

void cloud1()
{
	glPushMatrix();
	glTranslatef(0,0,0.0);
    float R=1;
    float G=1;
    float B=1;

    int i;
    int triangleAmount = 40;
    GLfloat twicePi = 2.0f * PI;


    //circle(.5f,.86f,.05,.05,1,1,1);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(R,G,B);
    glVertex2f(cloudX1,cloudY);

    for(i=0; i<=triangleAmount;i++)
    {
        glVertex2f(
            cloudX1+(cloud_radius*cos(i*twicePi/triangleAmount)),
            cloudY+(cloud_radius*sin(i*twicePi/triangleAmount))
        );
    }

    glEnd();
    glPopMatrix();

    glPushMatrix();
	glTranslatef(0,0,0.0);
    //	circle(.55f,.83f,.05,.05,1,1,1);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(R,G,B);
    glVertex2f((cloudX1+.05),(cloudY-.03));

    for(i=0; i<=triangleAmount;i++)
    {
        glVertex2f(
            (cloudX1+.05)+(cloud_radius*cos(i*twicePi/triangleAmount)),
            (cloudY-.03)+(cloud_radius*sin(i*twicePi/triangleAmount))
        );
    }

    glEnd();
	glPopMatrix();

    glPushMatrix();
	glTranslatef(0,0,0.0);


    //circle(.45f,.83f,.05,.05,1,1,1);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(R,G,B);
    glVertex2f((cloudX1-.05),(cloudY-.03));

    for(i=0; i<=triangleAmount;i++)
    {
        glVertex2f(
            (cloudX1-.05)+(cloud_radius*cos(i*twicePi/triangleAmount)),
            (cloudY-.03)+(cloud_radius*sin(i*twicePi/triangleAmount))
        );
    }

    glEnd();
    glPopMatrix();

    glPushMatrix();
	glTranslatef(0,0,0.0);

    //circle(.52f,.8f,.05,.05,1,1,1);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(R,G,B);
    glVertex2f((cloudX1-.02),(cloudY-.06));

    for(i=0; i<=triangleAmount;i++)
    {
        glVertex2f(
            (cloudX1-.02)+(cloud_radius*cos(i*twicePi/triangleAmount)),
            (cloudY-.06)+(cloud_radius*sin(i*twicePi/triangleAmount))
        );
    }

    glEnd();
    glPopMatrix();

    glPushMatrix();
	glTranslatef(0,0,0.0);
    //circle(.6f,.82f,.05,.05,1,1,1);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(R,G,B);
    glVertex2f((cloudX1-.1),(cloudY-.04));

    for(i=0; i<=triangleAmount;i++)
    {
        glVertex2f(
            (cloudX1+.1)+(cloud_radius*cos(i*twicePi/triangleAmount)),
            (cloudY-.04)+(cloud_radius*sin(i*twicePi/triangleAmount))
        );
    }

    glEnd();

	glPopMatrix();
}

void updateCloud1(int)
{
    glutPostRedisplay();
    glutTimerFunc(FRAME_INTERVAL,updateCloud1,0);

    switch(state)
    {

    case 1:
        if (cloudX1>-1.5)
            cloudX1-=0.03;
        else
            {
               // ball_radius=0;
                cloudX1=1.5;
                //cloudX1=random( -.9,.9);
            }
        break;

    }
}


void cloud2()
{
	glPushMatrix();
	glTranslatef(0,0,0.0);
    float R=1;
    float G=1;
    float B=1;

    int i;
    int triangleAmount = 40;
    GLfloat twicePi = 2.0f * PI;


    //circle(.5f,.86f,.05,.05,1,1,1);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(R,G,B);
    glVertex2f(cloudX2,cloudY);

    for(i=0; i<=triangleAmount;i++)
    {
        glVertex2f(
            cloudX2+(cloud_radius*cos(i*twicePi/triangleAmount)),
            cloudY+(cloud_radius*sin(i*twicePi/triangleAmount))
        );
    }

    glEnd();
    glPopMatrix();

    glPushMatrix();
	glTranslatef(0,0,0.0);
    //	circle(.55f,.83f,.05,.05,1,1,1);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(R,G,B);
    glVertex2f((cloudX2+.05),(cloudY-.03));

    for(i=0; i<=triangleAmount;i++)
    {
        glVertex2f(
            (cloudX2+.05)+(cloud_radius*cos(i*twicePi/triangleAmount)),
            (cloudY-.03)+(cloud_radius*sin(i*twicePi/triangleAmount))
        );
    }

    glEnd();
	glPopMatrix();

    glPushMatrix();
	glTranslatef(0,0,0.0);


    //circle(.45f,.83f,.05,.05,1,1,1);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(R,G,B);
    glVertex2f((cloudX2-.05),(cloudY-.03));

    for(i=0; i<=triangleAmount;i++)
    {
        glVertex2f(
            (cloudX2-.05)+(cloud_radius*cos(i*twicePi/triangleAmount)),
            (cloudY-.03)+(cloud_radius*sin(i*twicePi/triangleAmount))
        );
    }

    glEnd();
    glPopMatrix();

    glPushMatrix();
	glTranslatef(0,0,0.0);

    //circle(.52f,.8f,.05,.05,1,1,1);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(R,G,B);
    glVertex2f((cloudX2+.02),(cloudY-.06));

    for(i=0; i<=triangleAmount;i++)
    {
        glVertex2f(
            (cloudX2-.02)+(cloud_radius*cos(i*twicePi/triangleAmount)),
            (cloudY-.06)+(cloud_radius*sin(i*twicePi/triangleAmount))
        );
    }

    glEnd();
    glPopMatrix();

    glPushMatrix();
	glTranslatef(0,0,0.0);
    //circle(.6f,.82f,.05,.05,1,1,1);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(R,G,B);
    glVertex2f((cloudX2-.1),(cloudY-.04));

    for(i=0; i<=triangleAmount;i++)
    {
        glVertex2f(
            (cloudX2+.1)+(cloud_radius*cos(i*twicePi/triangleAmount)),
            (cloudY-.04)+(cloud_radius*sin(i*twicePi/triangleAmount))
        );
    }

    glEnd();

	glPopMatrix();
}



void updateCloud2(int)
{
    glutPostRedisplay();
    glutTimerFunc(FRAME_INTERVAL,updateCloud2,0);

    switch(state)
    {

    case 1:
        if (cloudX2>-1.5)
            cloudX2-=0.01;
        else
            {
               // ball_radius=0;
                cloudX2=1.5;
                //cloudX1=random( -.9,.9);
            }
        break;

    }
}




void cloud3()
{
	glPushMatrix();
	glTranslatef(0,0,0.0);
    float R=1;
    float G=1;
    float B=1;

    int i;
    int triangleAmount = 40;
    GLfloat twicePi = 2.0f * PI;


    //circle(.5f,.86f,.05,.05,1,1,1);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(R,G,B);
    glVertex2f(cloudX3,cloudY);

    for(i=0; i<=triangleAmount;i++)
    {
        glVertex2f(
            cloudX3+(cloud_radius*cos(i*twicePi/triangleAmount)),
            cloudY+(cloud_radius*sin(i*twicePi/triangleAmount))
        );
    }

    glEnd();
    glPopMatrix();

    glPushMatrix();
	glTranslatef(0,0,0.0);
    //	circle(.55f,.83f,.05,.05,1,1,1);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(R,G,B);
    glVertex2f((cloudX3+.05),(cloudY-.03));

    for(i=0; i<=triangleAmount;i++)
    {
        glVertex2f(
            (cloudX3+.05)+(cloud_radius*cos(i*twicePi/triangleAmount)),
            (cloudY-.03)+(cloud_radius*sin(i*twicePi/triangleAmount))
        );
    }

    glEnd();
	glPopMatrix();

    glPushMatrix();
	glTranslatef(0,0,0.0);


    //circle(.45f,.83f,.05,.05,1,1,1);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(R,G,B);
    glVertex2f((cloudX3-.05),(cloudY-.03));

    for(i=0; i<=triangleAmount;i++)
    {
        glVertex2f(
            (cloudX3-.05)+(cloud_radius*cos(i*twicePi/triangleAmount)),
            (cloudY-.03)+(cloud_radius*sin(i*twicePi/triangleAmount))
        );
    }

    glEnd();
    glPopMatrix();

    glPushMatrix();
	glTranslatef(0,0,0.0);

    //circle(.52f,.8f,.05,.05,1,1,1);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(R,G,B);
    glVertex2f((cloudX3+.02),(cloudY-.06));

    for(i=0; i<=triangleAmount;i++)
    {
        glVertex2f(
            (cloudX3-.02)+(cloud_radius*cos(i*twicePi/triangleAmount)),
            (cloudY-.06)+(cloud_radius*sin(i*twicePi/triangleAmount))
        );
    }

    glEnd();
    glPopMatrix();

    glPushMatrix();
	glTranslatef(0,0,0.0);
    //circle(.6f,.82f,.05,.05,1,1,1);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(R,G,B);
    glVertex2f((cloudX3-.1),(cloudY-.04));

    for(i=0; i<=triangleAmount;i++)
    {
        glVertex2f(
            (cloudX3+.1)+(cloud_radius*cos(i*twicePi/triangleAmount)),
            (cloudY-.04)+(cloud_radius*sin(i*twicePi/triangleAmount))
        );
    }

    glEnd();

	glPopMatrix();
}



void updateCloud3(int)
{
    glutPostRedisplay();
    glutTimerFunc(FRAME_INTERVAL,updateCloud3,0);

    switch(state)
    {

    case 1:
        if (cloudX3>-1.5)
            cloudX3-=0.02;
        else
            {
               // ball_radius=0;
                cloudX3=1.5;
                //cloudX1=random( -.9,.9);
            }
        break;

    }
}
void display1_Color()
{
    glBegin(GL_POLYGON);
    glColor3f(.8,.8,.8);
    glVertex2f(-1,1);
    glVertex2f(1,1);
    glVertex2f(1,-1);
    glVertex2f(-1,-1);
    glEnd();
}

void updatebird(int value) {
    if(position22 > 2.0)
        position22 =-1.0f;
    position22 += speed22;
	glutPostRedisplay();
	glutTimerFunc(FRAME_INTERVAL, updatebird, 0);
}

void bird()
{

    glPushMatrix();
	glTranslatef(position22,0,0.0);
    int i;

	GLfloat mm=0.182f; GLfloat nn=.801f; GLfloat radiusmm =.01f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mm, nn); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            mm + (radiusmm * cos(i *  twicePi / triangleAmount)),
			    nn + (radiusmm * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(0.1f,0.8f);
    glVertex2f(0.11f,0.79f);
    glVertex2f(0.12f,0.78f);
    glVertex2f(0.16f,0.77f);
    glVertex2f(0.19f,0.79f);
    glVertex2f(0.201f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.15f,0.8f);
    glVertex2f(0.14f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.144f,0.8f);
    glVertex2f(0.12f,0.83f);
    glEnd();
	/////2nd bird////

	GLfloat mmm=0.062f; GLfloat nnn=.801f; GLfloat radiusmmm =.01f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mmm, nnn); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            mmm + (radiusmmm * cos(i *  twicePi / triangleAmount)),
			    nnn + (radiusmmm * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.02f,0.8f);
    glVertex2f(-0.01f,0.79f);
    glVertex2f(0.0f,0.78f);
    glVertex2f(0.04f,0.77f);
    glVertex2f(0.07f,0.79f);
    glVertex2f(0.081f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.03f,0.8f);
    glVertex2f(0.02f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.024f,0.8f);
    glVertex2f(0.0f,0.83f);
    glEnd();

    	/////3rd bird/////
	glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.72f,0.8f);
    glVertex2f(-0.71f,0.79f);
    glVertex2f(-0.7f,0.78f);
    glVertex2f(-0.66f,0.77f);
    glVertex2f(-0.63f,0.79f);
    glVertex2f(-0.619f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.645f,0.8f);
    glVertex2f(-0.67f,0.8f);
    glVertex2f(-0.68f,0.84f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(-0.645f,0.8f);
    glVertex2f(-0.676f,0.8f);
    glVertex2f(-0.7f,0.83f);
    glEnd();

	GLfloat mmmm=-0.638f; GLfloat nnnn=.801f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mmmm,nnnn); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            mmmm + (radiusmmm * cos(i *  twicePi / triangleAmount)),
			    nnnn + (radiusmmm * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	////4th bird////

	GLfloat mmmmm=-0.518f; GLfloat nnnnn=.801f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mmmmm, nnnnn); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            mmmmm + (radiusmm * cos(i *  twicePi / triangleAmount)),
			    nnnnn + (radiusmm * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.6f,0.8f);
    glVertex2f(-0.59f,0.79f);
    glVertex2f(-0.58f,0.78f);
    glVertex2f(-0.54f,0.77f);
    glVertex2f(-0.51f,0.79f);
    glVertex2f(-0.499f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.525f,0.8f);
    glVertex2f(-0.55f,0.8f);
    glVertex2f(-0.56f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(-0.525f,0.8f);
    glVertex2f(-0.556f,0.8f);
    glVertex2f(-0.58f,0.83f);
    glEnd();
    glPopMatrix();

}

void sun()
{
    circle(-.6,.85,.07,.079,1.0f, 0.75f, 0.0f);
}


void drawBall1()
{
    //fruitX=random();
	glColor3f(1.0, 0.5, 0.0);
	glPushMatrix();
	glTranslatef(fruitX,y_position,1.0);
	glutSolidSphere(ball_radius,20,20);
	glPopMatrix();
}

void updateBall1(int)
{
    glutPostRedisplay();
    glutTimerFunc(FRAME_INTERVAL,updateBall1,0);

    switch(state)
    {

    case 1:
        if (y_position>-.55)
            y_position-=0.01;
        else
            {
               // ball_radius=0;
                y_position=.1;
                fruitX=random( -.9,.9);
            }
        break;

    }
}


void drawBall2()
{
    //fruitX=random();
	glColor3f(1.0, 0.5, 0.0);
	glPushMatrix();
	glTranslatef(fruitX2,y_position2,1.0);
	glutSolidSphere(ball_radius,20,20);
	glPopMatrix();
}


void updateBall2(int)
{
    glutPostRedisplay();
    glutTimerFunc(FRAME_INTERVAL,updateBall2,0);

    switch(state)
    {

    case 1:
        if (y_position2>-.55)
            y_position2-=0.03;
        else
            {
               // ball_radius=0;
                y_position2=.1;
                fruitX2=random(-.9,.9);
            }
        break;

    }
}



void boom()
{
    glColor3f(0.0,0.0,0.0);
	glPushMatrix();
	glTranslatef(boomX_position,boomY_position,1.0);
	glutSolidSphere(boom_radius,20,20);
	glPopMatrix();

}
void updateBoom(int)
{
    glutPostRedisplay();
    glutTimerFunc(FRAME_INTERVAL,updateBoom,0);

    switch(state)
    {

    case 1:
        if (boomY_position>-.55)
            boomY_position-=0.01;
        else
            {
               // ball_radius=0;
                boomY_position=.25;
                boomX_position=random(-.9,.9);
            }
        break;

    }
}

void fish()
{
    glPushMatrix();
    glTranslatef(fishx_position,fishY_position,0.0);


    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0,-0.7);
    glVertex2f(0.03,-.75);
    glVertex2f(-0.0,-.85);
    glVertex2f(-0.03,-.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0,-0.85);
     glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.02,-.89);
    glVertex2f(0.00,-.875);
    glVertex2f(-0.02,-.89);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.03,-0.75);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.06,-.78);
    glVertex2f(-0.0,-.78);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.03,-0.75);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.06,-.78);
    glVertex2f(0.0,-.78);

    glEnd();
	glPopMatrix();
}

void re_fish()
{
    glPushMatrix();

    glTranslatef(fish2x_position,fish2Y_position,0.0);
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0,-0.7);
    glVertex2f(0.03,-.65);
    glVertex2f(-0.0,-.55);
    glVertex2f(-0.03,-.65);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0,-0.55);
     glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.02,-.49);
    glVertex2f(0.00,-.525);
    glVertex2f(-0.02,-.49);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.03,-0.65);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.06,-.62);
    glVertex2f(-0.0,-.62);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.03,-0.65);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.06,-.62);
    glVertex2f(0.0,-.62);

    glEnd();

	glPopMatrix();
}


void fish_boom()
{
    glColor3f(0.0,0.0,0.0);
	glPushMatrix();
	glTranslatef(fishX_boom,fishY_boom,1.0);
	glutSolidSphere(boom_radius,20,20);
	glPopMatrix();
}
void fish_boom2()
{
    glColor3f(0.0,0.0,0.0);
	glPushMatrix();
	glTranslatef(fish2X_boom,fish2Y_boom,1.0);
	glutSolidSphere(boom_radius,20,20);
	glPopMatrix();
}

void updateFish(int)
{
    glutPostRedisplay();
    glutTimerFunc(FRAME_INTERVAL,updateFish,0);

    switch(fish_state)
    {

    case 1:
        if (fishY_position<=.5)
            {
                fishY_position+=0.02;
                fishY_boom+=0.02;
            }
        else
            {
               // ball_radius=0;
                fishY_position=-1;

                fishx_position=random(-.15,.15);
                fishX_boom=fishx_position ;
                fishY_boom=fishY_position-.8;
                fish_state=-1;
            }
            break;
        case -1:
        if (fish2Y_position>-1)
            {
                fish2Y_position-=0.01;
                fish2Y_boom-=0.01;
            }
        else
            {
               // ball_radius=0;
                fish2Y_position=.5;
                fish2x_position=random(-.15,.15);
                fish_state=1;
                fish2X_boom=fish2x_position;
                fish2Y_boom=fish2Y_position-.6;
            }
        break;
    }
}

void call_fish()
{


    switch(fish_state)
    {

    case 1:
       fish();
       //fish_boom();

        break;
    case -1:
        re_fish();
        //fish_boom2();
        break;
    }
}


/*
float fishX_boom=fishx_position ;
float fishY_boom=fishY_position-.8;
float fish2X_boom=fish2x_position;
float fish2Y_boom=fish2Y_position-.6;
void fish_boom()
{
    glColor3f(0.0,0.0,0.0);
	glPushMatrix();
	glTranslatef(fishX_boom,fishY_boom,1.0);
	glutSolidSphere(boom_radius,20,20);
	glPopMatrix();
}
void fish_boom2()
{
    glColor3f(0.0,0.0,0.0);
	glPushMatrix();
	glTranslatef(fish2X_boom,fish2Y_boom,1.0);
	glutSolidSphere(boom_radius,20,20);
	glPopMatrix();
}

void updateFish_boom(int)
{
    glutPostRedisplay();
    glutTimerFunc(100,updateFish_boom,0);

    switch(fish_state)
    {

    case 1:
        if (fishY_boom<=.5)
            fishY_boom+=0.02;
        else
            {

                fishY_boom=-.8;

                fishX_boom=fishx_position;

                fish_state=-1;
            }
            break;
        case -1:
        if (fish2Y_boom>-1)
            fish2Y_boom-=0.01;
        else
            {

                fish2Y_boom=.5;
                fish2X_boom=fish2x_position;
                fish_state=1;

            }
        break;
    }
}

*/


void call_fish_boom()
{


    switch(fish_state)
    {

    case 1:
       fish_boom();

        break;
    case -1:
        fish_boom2();

        break;
    }
}

void updateScore(int newScore) {
    int currentScore=0;
    if (newScore > currentScore) {
        notification_sound(); // Play the notification sound
    }
    currentScore = newScore;
}

void fruitBasket()
{
   float fruitBasket_position = -0.475+shift;
    glColor3f(0.0,0.0,1.0);
	glPushMatrix();
	glTranslatef(fruitBasket_position, -0.465,1.0);
	glutSolidSphere(0.06,20,20);
	glPopMatrix();

	float x1= fruitBasket_position;
	float x2=  fruitX;
	float x22=  fruitX2;
	float y1= -0.465;
	float y2= y_position;
	float y22=y_position2;
	float def = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
	float def2 = sqrt(pow(x22 - x1, 2) + pow(y22 - y1, 2) * 1.0);


	if (def<= .06 )
    {

        score++;
        y_position=.35;
        //y_position2=.35;
        fruitX=random(-.9,.9);
        //fruitX2=random();
        char _score[10];
        itoa(score,_score,10);
        char text[50]="Your score : ";
        strcat(text,_score);
        //MessageBox(NULL, text,"fruitX",0);
        updateScore(score);
    }
	if ( def2<= .06)
    {
         int temp = score;
        score++;
        //y_position=.35;
        y_position2=.35;
        //fruitX=random();
        fruitX2=random(-.9,.9);
        char _score[10];
        itoa(score,_score,10);
        char text[50]="Your score : ";
        strcat(text,_score);
        //MessageBox(NULL, text,"fruitX2",0);
        updateScore(score);
    }
    float bx1= fruitBasket_position;
	float bx2=  boomX_position;
	float bx22=  fruitX2;
	float by1= -0.465;
	float by2= boomY_position;
    float boom_def = sqrt(pow(bx2 - bx1, 2) + pow(by2 - by1, 2) * 1.0);
	float boom_def2 = sqrt(pow(bx22 - bx1, 2) + pow(by2 - by1, 2) * 1.0);



    if (boom_def<= .06 )
    {

        char _score[10];
        itoa(score,_score,10);
        char text[50]="Your score : ";
        strcat(text,_score);
        MessageBox(NULL, text,"Game Over",0);
        exit(0);
        glutDisplayFunc(display1);
        score=0;
    }

    ///Fish

	float f_x1= fruitBasket_position;
	float f_x2=  fishX_boom;
	float f_x22=  fish2X_boom;
	float f_y1= -0.465;
	float f_y2= fishY_boom;
	float f_y22=fish2Y_boom;
	float f_def = sqrt(pow(f_x2 - f_x1, 2) + pow(f_y2 - f_y1, 2) * 1.0);
	float f_def2 = sqrt(pow(f_x22 - f_x1, 2) + pow(f_y22 - f_y1, 2) * 1.0);

    if (f_def<= .03 )
    {

        char _score[10];
        itoa(score,_score,10);
        char text[50]="Your score : ";
        strcat(text,_score);
        MessageBox(NULL, text,"Game Over",0);
        exit(0);
        score=0;
    }
        if (f_def2<= .03 )
    {

        char _score[10];
        itoa(score,_score,10);
        char text[50]="Your score : ";
        strcat(text,_score);
        MessageBox(NULL, text,"Game Over",0);
        exit(0);
        score=0;
    }
}


void ground()
{

     glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.2f, 0.0f);
    glVertex2f(-1,-1);
    glVertex2f(-1,-.65);
    glVertex2f(-.3,-.65);
    glVertex2f(-.3,-.75);
    glVertex2f(-.25,-.85);
    glVertex2f(-.25,-1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.2f, 0.0f);
    glVertex2f(1,-1);
    glVertex2f(1,-.65);
    glVertex2f(.3,-.65);
    glVertex2f(.3,-.75);
    glVertex2f(.25,-.85);
    glVertex2f(.25,-1);
    glEnd();
}

void drawGrass()
{
     glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.8f, 0.0f);
    glVertex2f(-1,-.6);
    glVertex2f(-.3,-.6);
    glVertex2f(-.3,-.65);
    glVertex2f(-1,-.65);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.8f, 0.0f);
    glVertex2f(1,-.6);
    glVertex2f(.3,-.6);
    glVertex2f(.3,-.65);
    glVertex2f(1,-.65);

    glEnd();
}

void riverbank ()
{
    glBegin(GL_POLYGON);

    glColor3f(0.42f, 0.56f, 0.14f);
    glVertex2f(-.3,-.6);
    glVertex2f(-.3,-.75);
    glVertex2f(-.25,-.85);
    glVertex2f(-.25,-1);
    glColor3f(0.0f, 0.8f, 0.0f);
    glVertex2f(-.2,-1);
    glVertex2f(-.2,-.85);
    glVertex2f(-.25,-.75);
    glVertex2f(-.25,-.6);
    glEnd();

     glBegin(GL_POLYGON);

    glColor3f(0.42f, 0.56f, 0.14f);
    glVertex2f(.3,-.6);
    glVertex2f(.3,-.75);
    glVertex2f(.25,-.85);
    glVertex2f(.25,-1);
    glColor3f(0.0f, 0.8f, 0.0f);
    glVertex2f(.2,-1);
    glVertex2f(.2,-.85);
    glVertex2f(.25,-.75);
    glVertex2f(.25,-.6);
    glEnd();
}

void river ()
{
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.47f, 0.75f);
    glVertex2f(-.2,-.9);
    glVertex2f(-.2,-1);
    glVertex2f(.2,-1);
    glVertex2f(.2,-.9);

    glEnd();
}


void bridge()
{
    glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.8f, 0.0f);
    glVertex2f(-.35,-.625);
    glColor3f(0.71f, 0.40f, 0.11f);
    glVertex2f(-.3,-.6);
    glVertex2f(.3,-.6);
    glColor3f(0.0f, 0.8f, 0.0f);
    glVertex2f(.35,-.625);

glEnd();
}


void bridgePiller()
{
    glBegin(GL_POLYGON);
    glColor3f(0.9f, 0.9f, 0.9f);

    glVertex2f(-.315,-.615);
    glVertex2f(-.315,-.5);
    glVertex2f(-.3,-.5);
    glVertex2f(-.3,-.6);
glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.9f, 0.9f, 0.9f); // Set color to brown
    glVertex2f(-.215,-.615);
    glVertex2f(-.215,-.5);
    glVertex2f(-.2,-.5);
    glVertex2f(-.2,-.6);
glEnd();



glBegin(GL_POLYGON);
    glColor3f(0.9f, 0.9f, 0.9f); // Set color to brown

    glVertex2f(-.115,-.615);
    glVertex2f(-.115,-.5);
    glVertex2f(-.1,-.5);
    glVertex2f(-.1,-.6);

glEnd();
glBegin(GL_POLYGON);
    glColor3f(0.9f, 0.9f, 0.9f); // Set color to brown

    glVertex2f(-.015,-.615);
    glVertex2f(-.015,-.5);
    glVertex2f(.0,-.5);
    glVertex2f(.0,-.6);

glEnd();
glBegin(GL_POLYGON);
    glColor3f(0.9f, 0.9f, 0.9f); // Set color to brown

    glVertex2f(.115,-.615);
    glVertex2f(.115,-.5);
    glVertex2f(.1,-.5);
    glVertex2f(.1,-.6);


glEnd();
glBegin(GL_POLYGON);
    glColor3f(0.9f, 0.9f, 0.9f); // Set color to brown

    glVertex2f(.215,-.615);
    glVertex2f(.215,-.5);
    glVertex2f(.2,-.5);
    glVertex2f(.2,-.6);

glEnd();
glBegin(GL_POLYGON);
    glColor3f(0.9f, 0.9f, 0.9f); // Set color to brown

    glVertex2f(.315,-.615);
    glVertex2f(.315,-.5);
    glVertex2f(.3,-.5);
    glVertex2f(.3,-.6);

glEnd();
}


void flower1()
{
//flower
	circle(-.95,-.5,.02,.025, 1.0, 0.2, 0.0);
	circle(-.85,-.55,.02,.025, 1.0, 0.4, 0.0);

	glLineWidth(4);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.4f, 0.0f);

    glVertex2f(-.95f, -0.6f);
    glVertex2f(-1.0f, -0.55f);
        glVertex2f(-.95f, -0.6f);
    glVertex2f(-.95f, -0.5f);
        glVertex2f(-.95f, -0.6f);
    glVertex2f(-.9f, -0.525f);
        glVertex2f(-.95f, -0.6f);
    glVertex2f(-.85f, -0.55f);

    glEnd();

}
void flower2()
{
//flower
	circle(-.55,-.525,.02,.025, 1.0, 0.2, 0.0);
	circle(-.45,-.5,.02,.025, 1.0, 0.4, 0.0);
    circle(-.35,-.525,.02,.025, 1.0, 0.6, 0.0);
	glLineWidth(4);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.4f, 0.0f);
//1
        glVertex2f(-.45f, -0.65f);
    glVertex2f(-.525f, -0.6f);
//2
        glVertex2f(-.45f, -0.65f);
    glVertex2f(-.45,-.5);
//3
        glVertex2f(-.45f, -0.65f);
    glVertex2f(-.415f, -0.55f);

    glVertex2f(-.45f, -0.65f);
    glVertex2f(-.485f, -0.55f);

        glVertex2f(-.45f, -0.65f);
    glVertex2f(-.55,-.525);
//4
        glVertex2f(-.45f, -0.65f);
    glVertex2f(-.35,-.525);

 glVertex2f(-.45f, -0.65f);
    glVertex2f(-.365f, -0.6f);

    glEnd();

}
void flower3()
{
//flower
	circle(.45,-.45,.02,.025, 1.0, 0.2, 0.0);
	circle(.35,-.5,.02,.025, 1.0, 0.4, 0.0);
    circle(.55,-.5,.02,.025, 1.0, 0.6, 0.0);
	glLineWidth(4);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.4f, 0.0f);

        glVertex2f(.45f, -0.6f);
    glVertex2f(.45,-.45);

        glVertex2f(.45f, -0.6f);
    glVertex2f(.35,-.5);

        glVertex2f(.45f, -0.6f);
    glVertex2f(.55,-.5);

    glVertex2f(.45f, -0.6f);
    glVertex2f(.35f, -0.55f);

        glVertex2f(.45f, -0.6f);
    glVertex2f(.55,-.55);

        glVertex2f(.45f, -0.6f);
    glVertex2f(.4,-.5);

 glVertex2f(.45f, -0.6f);
    glVertex2f(.5f, -0.5f);

    glEnd();

}



void fruit()
{
    //f1
circle(-0.93,-0.01,.021,.02,1.0, 0.5, 0.0);
circle(-0.82,-0.03,.021,.02,1.0, 0.5, 0.0);
circle(-1.0, 0.07,.021,.02,1.0, 0.5, 0.0);
circle(-0.93, 0.1,.021,.02,1.0, 0.5, 0.0);
circle(-0.85, 0.07,.021,.02,1.0, 0.5, 0.0);
circle(-0.93, 0.2,.021,.02,1.0, 0.5, 0.0);



//f2
circle(-0.37,-0.02,.021,.02,1.0, 0.5, 0.0);
circle(-0.28,-0.06,.021,.02,1.0, 0.5, 0.0);
circle(-0.46,-0.06,.021,.02,1.0, 0.5, 0.0);
circle(-0.33,0.07,.021,.02,1.0, 0.5, 0.0);
circle(-0.42,0.07,.021,.02,1.0, 0.5, 0.0);
circle(-0.4,0.13,.021,.02,1.0, 0.5, 0.0);
circle(-0.3,0.15,.021,.02,1.0, 0.5, 0.0);
circle(-0.37,0.21,.021,.02,1.0, 0.5, 0.0);
circle(-0.2,-0.06,.021,.02,1.0, 0.5, 0.0);
circle(-0.12,-0.04,.021,.02,1.0, 0.5, 0.0);
circle(-0.06,-0.03,.021,.02,1.0, 0.5, 0.0);
circle(-0.1,0.06,.021,.02,1.0, 0.5, 0.0);
circle(-0.15,0.1,.021,.02,1.0, 0.5, 0.0);
circle(-0.19,0.15,.021,.02,1.0, 0.5, 0.0);
circle(-0.22,0.1,.021,.02,1.0, 0.5, 0.0);
circle(-0.25,0.22,.021,.02,1.0, 0.5, 0.0);

//f3

circle(-0.65,-0.02,.021,.02,1.0, 0.5, 0.0);
circle(-0.58,-0.07,.021,.02,1.0, 0.5, 0.0);
circle(-0.72,-0.08,.021,.02,1.0, 0.5, 0.0);
circle(-0.57,0.09,.021,.02,1.0, 0.5, 0.0);
circle(-0.69,0.1,.021,.02,1.0, 0.5, 0.0);
circle(-0.64,0.2,.021,.02,1.0, 0.5, 0.0);


    //f4
circle(0.93,-0.01,.021,.02,1.0, 0.5, 0.0);
circle(0.82,-0.03,.021,.02,1.0, 0.5, 0.0);
circle(1.0, 0.07,.021,.02,1.0, 0.5, 0.0);
circle(0.93, 0.1,.021,.02,1.0, 0.5, 0.0);
circle(0.85, 0.07,.021,.02,1.0, 0.5, 0.0);
circle(0.93, 0.2,.021,.02,1.0, 0.5, 0.0);


//f5
circle(0.37,-0.02,.021,.02,1.0, 0.5, 0.0);
circle(0.28,-0.06,.021,.02,1.0, 0.5, 0.0);
circle(0.46,-0.06,.021,.02,1.0, 0.5, 0.0);
circle(0.33,0.07,.021,.02,1.0, 0.5, 0.0);
circle(0.42,0.07,.021,.02,1.0, 0.5, 0.0);
circle(0.4,0.13,.021,.02,1.0, 0.5, 0.0);
circle(0.3,0.15,.021,.02,1.0, 0.5, 0.0);
circle(0.37,0.21,.021,.02,1.0, 0.5, 0.0);
circle(0.2,-0.06,.021,.02,1.0, 0.5, 0.0);
circle(0.12,-0.04,.021,.02,1.0, 0.5, 0.0);
circle(0.06,-0.03,.021,.02,1.0, 0.5, 0.0);
circle(0.1,0.06,.021,.02,1.0, 0.5, 0.0);
circle(0.15,0.1,.021,.02,1.0, 0.5, 0.0);
circle(0.19,0.15,.021,.02,1.0, 0.5, 0.0);
circle(0.22,0.1,.021,.02,1.0, 0.5, 0.0);
circle(0.25,0.22,.021,.02,1.0, 0.5, 0.0);

//f6

circle(0.65,-0.02,.021,.02,1.0, 0.5, 0.0);
circle(0.58,-0.07,.021,.02,1.0, 0.5, 0.0);
circle(0.72,-0.08,.021,.02,1.0, 0.5, 0.0);
circle(0.57,0.09,.021,.02,1.0, 0.5, 0.0);
circle(0.69,0.1,.021,.02,1.0, 0.5, 0.0);
circle(0.64,0.2,.021,.02,1.0, 0.5, 0.0);


}


void treeStem1 ()
{
    glBegin(GL_POLYGON);

    glColor3f(0.59f, 0.29f, 0.14f);
    glVertex2f(-0.95,-.6);
    glVertex2f(-0.90,-.6);
    glVertex2f(-0.90,0.0);
    glVertex2f(-0.95,0.0);
    glEnd();

}

void treeStem2 ()
{
    glBegin(GL_POLYGON);

    glColor3f(0.59f, 0.29f, 0.0f);
    glVertex2f(-0.67,-.6);
    glVertex2f(-0.62,-.6);
    glVertex2f(-0.62,0.0);
    glVertex2f(-0.67,0.0);
    glEnd();


}
void treeStem3 ()
{
    glBegin(GL_POLYGON);

glColor3f(0.59f, 0.29f, 0.14f);
glVertex2f(-0.35,-.6);
glVertex2f(-0.3,-.6);
glVertex2f(-0.3,0.0);
glVertex2f(-0.35,0.0);
glEnd();
}

void treeStem4 ()
{
    glBegin(GL_POLYGON);

    glColor3f(0.59f, 0.29f, 0.14f);
    glVertex2f(0.95,-.6);
    glVertex2f(0.90,-.6);
    glVertex2f(0.90,0.0);
    glVertex2f(0.95,0.0);
    glEnd();
}

void treeStem5 ()
{
    glBegin(GL_POLYGON);

    glColor3f(0.59f, 0.29f, 0.0f);
    glVertex2f(0.67,-.6);
    glVertex2f(0.62,-.6);
    glVertex2f(0.62,0.0);
    glVertex2f(0.67,0.0);
    glEnd();
}

void treeStem6 ()
{
glBegin(GL_POLYGON);

glColor3f(0.59f, 0.29f, 0.14f);
glVertex2f(0.35,-.6);
glVertex2f(0.3,-.6);
glVertex2f(0.3,0.0);
glVertex2f(0.35,0.0);
glEnd();

}

void treeLeaf1()
{
    //leaf 1
    circle(-0.93,-0.01,0.08,0.08,0.0, 0.7, 0.0);
    circle(-0.82,-0.03,0.08,0.08,0.0, 0.7, 0.0);
    circle(-1.0,-0.03,0.07,0.08,0.0, 0.7, 0.0);
    circle(-1.0,0.07,0.08,0.08,0.0, 0.7, 0.0);
    circle(-0.87,0.07,0.08,0.08,0.0, 0.7, 0.0);
    circle(-0.93,0.2,0.08,0.09,0.0, 0.7, 0.0);


    // Leaf 2
circle(-0.32,-0.02,0.08,0.08,0.0, 0.7, 0.0);
circle(-0.22,0.02,0.08,0.08,0.0, 0.7, 0.0);
circle(-0.12,-0.04,0.12,0.08,0.0, 0.7, 0.0);
circle(-0.42,0.02,0.1,0.08,0.0, 0.7, 0.0);
circle(-0.47,-0.04,0.1,0.08,0.0, 0.7, 0.0);
circle(-0.15,0.08,0.1,0.08,0.0, 0.7, 0.0);
circle(-0.20,0.15,0.08,0.08,0.0, 0.7, 0.0);
circle(-0.25,0.22,0.08,0.08,0.0, 0.7, 0.0);
circle(-0.32,0.1,0.08,0.08,0.0, 0.7, 0.0);
circle(-0.32,0.17,0.08,0.08,0.0, 0.7, 0.0);
circle(-0.39,0.1,0.08,0.08,0.0, 0.7, 0.0);

     //Leaf 3
     circle(-0.65,-0.02,0.08,0.08,0.0, 0.7, 0.0);
     circle(-0.58,-0.07,0.08,0.08,0.0, 0.7, 0.0);
     circle(-0.72,-0.07,0.08,0.08,0.0, 0.7, 0.0);
     circle(-0.57,0.09,0.1,0.08,0.0, 0.7, 0.0);
     circle(-0.69,0.09,0.1,0.08,0.0, 0.7, 0.0);
      circle(-0.65,0.20,0.08,0.08,0.0, 0.7, 0.0);

      //leaf 4
    circle(0.93,-0.01,0.08,0.08,0.0, 0.7, 0.0);
    circle(0.82,-0.03,0.08,0.08,0.0, 0.7, 0.0);
    circle(1.0,-0.03,0.07,0.08,0.0, 0.7, 0.0);
    circle(1.0,0.07,0.08,0.08,0.0, 0.7, 0.0);
    circle(0.87,0.07,0.08,0.08,0.0, 0.7, 0.0);
    circle(0.93,0.2,0.08,0.09,0.0, 0.7, 0.0);


    // Leaf 5
circle(0.32,-0.02,0.08,0.08,0.0, 0.7, 0.0);
circle(0.22,0.02,0.08,0.08,0.0, 0.7, 0.0);
circle(0.12,-0.04,0.119,0.08,0.0, 0.7, 0.0);
circle(0.42,0.02,0.1,0.08,0.0, 0.7, 0.0);
circle(0.47,-0.04,0.1,0.08,0.0, 0.7, 0.0);
circle(0.15,0.08,0.1,0.08,0.0, 0.7, 0.0);
circle(0.20,0.15,0.08,0.08,0.0, 0.7, 0.0);
circle(0.25,0.22,0.08,0.08,0.0, 0.7, 0.0);
circle(0.32,0.1,0.08,0.08,0.0, 0.7, 0.0);
circle(0.32,0.17,0.08,0.08,0.0, 0.7, 0.0);
circle(0.39,0.1,0.08,0.08,0.0, 0.7, 0.0);

     //Leaf 6
     circle(0.65,-0.02,0.08,0.08,0.0, 0.7, 0.0);
     circle(0.58,-0.07,0.08,0.08,0.0, 0.7, 0.0);
     circle(0.72,-0.07,0.08,0.08,0.0, 0.7, 0.0);
     circle(0.57,0.09,0.1,0.08,0.0, 0.7, 0.0);
     circle(0.69,0.09,0.1,0.08,0.0, 0.7, 0.0);
      circle(0.65,0.20,0.08,0.08,0.0, 0.7, 0.0);

}




void key(int key, int x, int y) {
    switch (key)
    {
    case GLUT_KEY_LEFT:
        shift -= .05;
        glutPostRedisplay();
        break;
    case GLUT_KEY_RIGHT:
        shift += .05;
        glutPostRedisplay();
        break;
    }
}

void display1() {
   glClear(GL_COLOR_BUFFER_BIT);    // Clear the color buffer

   glLoadIdentity();                // Reset the model-view matrix
    display1_Color();
    write_display1();
    reset_animetion();

    glutSwapBuffers();
}

void display_level1()
{
    glClear(GL_COLOR_BUFFER_BIT);    // Clear the color buffer

   glLoadIdentity();                // Reset the model-view matrix
    reset_animetion();
    fruitBasket();

    sky();

    bird();
    ground();
    drawGrass();
    riverbank ();
    river ();
    bridgePiller();
    bridge();
    flower1();
    drawBall2();
    drawBall1();
    treeStem1();
    treeStem2();
    treeStem3();
    treeStem4();
    treeStem5();
    treeStem6();
    treeLeaf1();

fruit();
    fruitBasket();
    humen();
    flower2();
    flower3();


    glutSwapBuffers();
}

void display_level2()
{
    glClear(GL_COLOR_BUFFER_BIT);    // Clear the color buffer

    glLoadIdentity();                // Reset the model-view matrix
    reset_animetion();
    sky();

    bird();
    ground();
    drawGrass();
    riverbank ();
    river ();
    bridgePiller();
    bridge();
    flower1();
    fruitBasket();
    humen();
    flower2();
    flower3();
    drawBall2();
    drawBall1();
    if(animation_started)
    boom();

    glutSwapBuffers();
}

void display_level3()
{
    glClear(GL_COLOR_BUFFER_BIT);    // Clear the color buffer

   glLoadIdentity();                // Reset the model-view matrix
    reset_animetion();
    sky();

    bird();
    ground();
    drawGrass();
    riverbank ();
    river ();
    bridgePiller();
    bridge();
    flower1();
    fruitBasket();
    humen();
    flower2();
    flower3();
    treeStem1();
    treeStem2();
    treeStem3();
    treeStem4();
    treeStem5();
    treeStem6();
    treeLeaf1();

fruit();
    drawBall2();
    drawBall1();
    if(animation_started)
    boom();
    call_fish();
//    fish();
  //  re_fish();
   //glFlush();   // Render now
    glutSwapBuffers();
}
void display() {
   glClear(GL_COLOR_BUFFER_BIT);    // Clear the color buffer

   glLoadIdentity();                // Reset the model-view matrix
    fruitBasket();
    call_fish_boom();
    sky();
    sun();
    cloud1();
    cloud2();
    cloud3();
    bird();
    ground();
    drawGrass();
    riverbank ();
    river ();
    bridgePiller();
    bridge();
    flower1();

    humen();



    treeStem1();
    treeStem2();
    treeStem3();
    treeStem4();
    treeStem5();
    treeStem6();
    treeLeaf1();

fruit();








    flower2();
    flower3();
    drawBall2();
    drawBall1();
    if(animation_started)
    boom();
    call_fish();

   //glFlush();   // Render now
    glutSwapBuffers();
}


void lavel1_animation()
{
    // Get the current time
    unsigned int currentTime = glutGet(GLUT_ELAPSED_TIME);

    // Compute the time elapsed since the last frame
    unsigned int elapsedTime = currentTime - lastFrameTime;

    // Check if enough time has elapsed to update the animation
    if (elapsedTime >= FRAME_INTERVAL)
    {
        // Register the callback functions here...
        glutTimerFunc(100, updatebird, 0);
        glutTimerFunc(100, updateBall2, 0);
        glutTimerFunc(100, updateBall1, 0);

        glutTimerFunc(100,updateCloud1,0);
        glutTimerFunc(100,updateCloud2,0);
        glutTimerFunc(100,updateCloud3,0);

        // Store the current time as the time of the last frame
        lastFrameTime = currentTime;
    }

    // Redraw the display
    glutPostRedisplay();
}

void lavel2_animation()
{
    // Get the current time
    unsigned int currentTime = glutGet(GLUT_ELAPSED_TIME);

    // Compute the time elapsed since the last frame
    unsigned int elapsedTime = currentTime - lastFrameTime;

    // Check if enough time has elapsed to update the animation
    if (elapsedTime >= FRAME_INTERVAL)
    {
        // Register the callback functions here...
        glutTimerFunc(100, updatebird, 0);
        glutTimerFunc(100, updateBall2, 0);
        glutTimerFunc(100, updateBall1, 0);
        glutTimerFunc(4000, start_animation, 0);
        if(start_animation)
        {
            glutTimerFunc(100, updateBoom, 0);
        }

        glutTimerFunc(100,updateCloud1,0);
        glutTimerFunc(100,updateCloud2,0);
        glutTimerFunc(100,updateCloud3,0);

        // Store the current time as the time of the last frame
        lastFrameTime = currentTime;
    }

    // Redraw the display
    glutPostRedisplay();
}

void lavel3_animation()
{
    // Get the current time
    unsigned int currentTime = glutGet(GLUT_ELAPSED_TIME);

    // Compute the time elapsed since the last frame
    unsigned int elapsedTime = currentTime - lastFrameTime;

    // Check if enough time has elapsed to update the animation
    if (elapsedTime >= FRAME_INTERVAL)
    {
        // Register the callback functions here...
        glutTimerFunc(100, updatebird, 0);
        glutTimerFunc(100, updateBall2, 0);
        glutTimerFunc(100, updateBall1, 0);
        glutTimerFunc(4000, start_animation, 0);
        if(start_animation)
        {
            glutTimerFunc(100, updateBoom, 0);
        }
        glutTimerFunc(100, updateFish, 0);
        glutTimerFunc(100,updateCloud1,0);
        glutTimerFunc(100,updateCloud2,0);
        glutTimerFunc(100,updateCloud3,0);

        // Store the current time as the time of the last frame
        lastFrameTime = currentTime;
    }

    // Redraw the display
    glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y)
{
	        char _score[10];
        itoa(score,_score,10);
        char text[50]="Your score : ";
        strcat(text,_score);
	switch (key)
    {
    case '1':


        glutDisplayFunc(display_level1);//
        lavel1_animation();
        glutPostRedisplay();

        score=0;
        break;
    case '2':
        glutDisplayFunc(display_level2);//
        lavel2_animation();
        score=0;
        glutPostRedisplay();
        break;
    case '3':
        glutDisplayFunc(display_level3);//
        lavel3_animation();
        score=0;
        glutPostRedisplay();
        break;
    case 'q':
        glutDisplayFunc(display1);//
        MessageBox(NULL, text,"Game Over",0);
        score=0;
        glutPostRedisplay();
        break;
    case 27:
        glutDisplayFunc(display1);//
        MessageBox(NULL, text,"Game Over",0);
        score=0;
        glutPostRedisplay();
        break;

    glutPostRedisplay();

	}
}



/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);          // Initialize GLUT
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowSize(1900, 1000);// Set the window's initial width & height - non-square
    glutInitWindowPosition(10, 10);// Position the window's initial top-left corner
    glutCreateWindow("Catch the Fruit"); // Create window with the given title
    glutDisplayFunc(display1);       // Register callback handler for window re-paint event
    glutKeyboardFunc(handleKeypress);
    glutSpecialFunc(key);



    glutReshapeFunc(reshape);       // Register callback handler for window re-size event
    initGL();                       // Our own OpenGL initialization

    glutMainLoop();                 // Enter the infinite event-processing loop
return 0;
}
