#include<cstdio>
#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include<vector>
#include<math.h>
#define PI 3.1415
using namespace std;

float shift = 0;

char score = '00';
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

GLfloat position2 = 0.0f;
GLfloat speed2 = 0.004f;
void cloud(int value) {
    if(position2 > 1.0)
        position2 =-1.0f;
    position2 += speed2;
	glutPostRedisplay();
	glutTimerFunc(100, cloud, 0);
}

GLfloat position22 = 0.0f;
GLfloat speed22 = 0.007f;
void birdd(int value) {
    if(position22 > 1.0)
        position22 =-1.0f;
    position22 += speed22;
	glutPostRedisplay();
	glutTimerFunc(100, birdd, 0);
}

GLfloat positionfruit1 = 0.0f;
GLfloat speedfruit1 = 0.007f;
void updatefruit1(int value) {
    if(positionfruit1 > 1.0)
        positionfruit1 =-1.0f;
    positionfruit1 += speedfruit1;
	glutPostRedisplay();
	glutTimerFunc(100, updatefruit1, 0);
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

void sun()
{
    int i;

	GLfloat x=.0f; GLfloat y=.9f; GLfloat radius =.06f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 204, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}
void bird()
{
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


}

void cloud1()
{
    int i;

	GLfloat x=.5f; GLfloat y=.86f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=.55f; GLfloat b=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=.45f; GLfloat d=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=.52f; GLfloat f=.8f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=.6f; GLfloat h=.82f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

void cloud2()
{
   // glLoadIdentity();
    int i;

	GLfloat x=-.5f; GLfloat y=.86f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=-.55f; GLfloat b=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-.45f; GLfloat d=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=-.52f; GLfloat f=.8f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=-.6f; GLfloat h=.82f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void cloud3()
{
    // glLoadIdentity();
    int i;

	GLfloat x=0.0f; GLfloat y=.86f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=.05f; GLfloat b=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-0.05f; GLfloat d=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=.02f; GLfloat f=.8f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=.1f; GLfloat h=.82f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
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


void humen1()
{
//Human Code
glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();

    glColor3ub(253,231,173);
    glBegin(GL_TRIANGLES);
    glVertex2f(.12,.48);
    glVertex2f(.08,.55);
    glVertex2f(.0,.48);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(.05,.538);
    glVertex2f(.07,.55);
    glVertex2f(.09,.545);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(.0455,.45);
    glVertex2f(.075,.438);
    glVertex2f(.085,.445);
    glEnd();
    glColor3ub(253,231,173);

    glBegin(GL_QUADS);
    glVertex2f(-.06,.43);
    glVertex2f(-.06,.35);
    glVertex2f(.03,.35);
    glVertex2f(.03,.43);
    glEnd();

    //leg


    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-.05,-.5);
    glVertex2f(.1,-.5);
    glVertex2f(.09,-.45);
    glVertex2f(.05,-.45);
    glVertex2f(.08,0);
    glVertex2f(-.08,0);
    glEnd();



//    glRotatef(rightL,0,0,1);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-.05,-.5);
    glVertex2f(.1,-.5);
    glVertex2f(.09,-.45);
    glVertex2f(.05,-.45);
    glVertex2f(.08,0);
    glVertex2f(-.08,0);
    glEnd();





//body
 //   getColor();
    glBegin(GL_POLYGON);
    glVertex2f(-.065,.37);
    glVertex2f(-.1,.3);
    glVertex2f(-.08,0);
    glVertex2f(.08,0);
    glVertex2f(.083,.28);
    glVertex2f(.04,.35);
    glEnd();

    glColor3ub(253,231,173);
    glBegin(GL_POLYGON);

    glVertex2f(-.02,.14);
    glVertex2f(.04,.3);
    glVertex2f(-.07,.3);
    glVertex2f(-.1,.1);
    glVertex2f(.0,.05);
    glVertex2f(.02,.11);
    glEnd();
//    getColor();
    glBegin(GL_POLYGON);
    glVertex2f(.04,.3);
    glVertex2f(-.07,.3);
    glVertex2f(-.084,.22);
    glVertex2f(.01,.2);

    glEnd();
}
void key(int key, int x, int y) {
    switch (key)
    {
    case GLUT_KEY_LEFT:
        shift -= .01;
        glutPostRedisplay();
        break;
    case GLUT_KEY_RIGHT:
        shift += .01;
        glutPostRedisplay();
        break;
    }
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


void treeLeaf2()
{

}

void renderBitmapString(float x, float y, float z, void *font, char *string)
{
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}

void text ()
{

glColor3f(1.0,0.0,0.0);
renderBitmapString(-0.1f, 0.65f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Score : ");

}
void Score()
{

glColor3f(1.0,0.0,0.0);
renderBitmapString(0.0f, 0.65f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "00");

}
void myDisplay()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);

    sky();
    sun();
    ground();
    drawGrass();
    riverbank ();
    river ();
    bridgePiller();
    bridge();
    flower1();
    treeStem1();
    treeStem2();
    treeStem3();
    treeStem4();
    treeStem5();
    treeStem6();
    treeLeaf1();
    //
    flower1();
    flower3();
    humen();
    // humen1();
    flower2();
    fruit();
    cloud1();
    cloud2();
    cloud3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(position22,0.0f, 0.0f);
    glTranslatef(position2,0.0f, 0.0f);
    bird();
    glPopMatrix();
    text();
    Score();

    glFlush();
    glutSwapBuffers();
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1900, 1000);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("Catch the Fruit");

    glutDisplayFunc(myDisplay);
       glutSpecialFunc(key);
    glutTimerFunc(100, cloud, 0);
    glutTimerFunc(100, birdd, 0);

    /*
    glutTimerFunc(100, updateCar1, 0);
    glutTimerFunc(100, updates, 0);
    glutTimerFunc(100, updatesT, 0);
    glutTimerFunc(100, updatesT2, 0);
    glutTimerFunc(100, updateCar2, 0);
    glutTimerFunc(100, updateCar3, 0);

    glutTimerFunc(100, updateCloud1, 0);
    glutTimerFunc(100, updateCloud2, 0);
    glutTimerFunc(100, updateCloud3, 0);
    glutTimerFunc(100, updateCloud4, 0);
    glutTimerFunc(100, updateCloud5, 0);
    glutTimerFunc(100, updateSun, 0);
    /*
    glutTimerFunc(100, updateTank, 0);
    glutTimerFunc(100, updateTank2, 0);
    glutTimerFunc(100, updateHeli, 0);
    glutTimerFunc(100, updateRocket, 5);
    glutTimerFunc(100, updateRocket2, 5);
    glutTimerFunc(100, updateHeliRocket, 5);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    */
    glutMainLoop();
    return 0;
}
