#include<cstdio>
#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include<vector>
#include<math.h>
#define PI 3.1415
using namespace std;

 

void grass(){
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(0.20f, 0.39f, 0.22f);
    glVertex2f(85.5f,67.0f);
    glVertex2f(84.0f,65.5f);
    glEnd();

 

    glBegin(GL_LINES);
    glColor3f(0.20f, 0.39f, 0.22f);
    glVertex2f(85.5f,67.0f);
    glVertex2f(84.7f,65.5f);
    glEnd();

 

    glBegin(GL_LINES);
    glColor3f(0.20f, 0.39f, 0.22f);
    glVertex2f(85.5f,67.0f);
    glVertex2f(87.0f,65.5f);
    glEnd();

 

    glBegin(GL_LINES);
    glColor3f(0.20f, 0.39f, 0.22f);
    glVertex2f(85.5f,67.0f);
    glVertex2f(86.3f,65.5f);
    glEnd();

 

    glBegin(GL_LINES);
    glColor3f(0.20f, 0.39f, 0.22f);
    glVertex2f(85.5f,67.0f);
    glVertex2f(85.5f,65.5f);
    glEnd();
}

 

void grassSS(){
    grass();
    glPushMatrix();
        glTranslatef(8.0f,0.0f,0.0f);
        //glScalef(f,f,f);
        grass();
    glPopMatrix();

 

    glPushMatrix();
        glTranslatef(-8.0f,5.0f,0.0f);
        //glScalef(f,f,f);
        grass();
    glPopMatrix();

 

    glPushMatrix();
        glTranslatef(4.0f,5.0f,0.0f);
        //glScalef(f,f,f);
        grass();
    glPopMatrix();

 

    glPushMatrix();
        glTranslatef(13.0f,3.0f,0.0f);
        //glScalef(f,f,f);
        grass();
    glPopMatrix();

 

    glPushMatrix();
        glTranslatef(20.0f,5.0f,0.0f);
        //glScalef(f,f,f);
        grass();
    glPopMatrix();

 

    glPushMatrix();
        glTranslatef(20.0f,-5.0f,0.0f);
        //glScalef(f,f,f);
        grass();
    glPopMatrix();

 

    glPushMatrix();
        glTranslatef(5.0f,2.0f,0.0f);
        glScalef(1.2f,1.0f,0.0f);
        grass();
    glPopMatrix();

 

    glPushMatrix();
        glTranslatef(-2.0f,-2.0f,0.0f);
        glScalef(1.2f,1.0f,0.0f);
        grass();
    glPopMatrix();
}

 

void grassS(){
    grassSS();
    glPushMatrix();
        glTranslatef(20.0f,5.0f,0.0f);
        //glScalef(f,f,f);
        grassSS();
    glPopMatrix();

 

    glPushMatrix();
        glTranslatef(20.0f,-5.0f,0.0f);
        //glScalef(f,f,f);
        grassSS();
    glPopMatrix();

 

    glPushMatrix();
        glTranslatef(20.0f,-15.0f,0.0f);
        //glScalef(f,f,f);
        grassSS();
    glPopMatrix();

 

    glPushMatrix();
        glTranslatef(0.0f,-15.0f,0.0f);
        //glScalef(f,f,f);
        grassSS();
    glPopMatrix();

 

    glPushMatrix();
        glTranslatef(-8.0f,-8.0f,0.0f);
        //glScalef(f,f,f);
        grassSS();
    glPopMatrix();

 

}
void ground()
{
    glBegin(GL_POLYGON);
    glColor3f(0.20f, 0.39f, 0.22f);
    glVertex2f(-1.0,-0.4);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,-0.4);
    glEnd();

 

}
void riverbank()
{
    glBegin(GL_POLYGON);
    glColor3f(0.55f, 0.27f, 0.07f);
    glVertex2f(-0.3,-0.4);
    glVertex2f(-0.3,-0.6);
    glVertex2f(-0.2,-0.6);
    glVertex2f(-0.2,-1.00);
    glVertex2f(0.2,-1.00);
    glVertex2f(0.3,-0.4);
    glVertex2f(0.3,-0.6);
    glVertex2f(0.2,-0.6);

 

    glEnd();

 

}
void riverWater()
{
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.5f);
    glVertex2f(-0.25,-0.7);
    glVertex2f(-0.2,-1.00);
    glVertex2f(0.2,-1.00);
    glVertex2f(0.25,-0.7);

 

    glEnd();

 

}
void draw_fish()
{

 

    // Set the fish color to orange
    glColor3f(1.0, 0.5, 0.0);

 

    // Draw the body of the fish
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, 0.2);
    glVertex2f(0.3, 0.3);
    glVertex2f(0.5, 0.1);
    glVertex2f(0.3, -0.1);
    glVertex2f(0.0, -0.2);
    glEnd();

 

    // Set the fish color to white
    glColor3f(1.0, 1.0, 1.0);

 

    // Draw the eye of the fish
    glBegin(GL_POLYGON);
    glVertex2f(0.4, 0.15);
    glVertex2f(0.4, 0.05);
    glVertex2f(0.45, 0.1);
    glEnd();
}

 

void drawTree()
{
    glBegin(GL_POLYGON);
glColor3f(0.545f, 0.271f, 0.075f); // Brown color for trunk

 

// Draw the trunk
glVertex2f(-0.05f, -1.0f);
glVertex2f(0.05f, -1.0f);
glVertex2f(0.05f, -0.2f);
glVertex2f(-0.05f, -0.2f);
glEnd();

 

glBegin(GL_POLYGON);
glColor3f(0.0f, 0.392f, 0.0f); // Green color for leaves

 

// Draw the leaves
glVertex2f(-0.7f, -0.2f);
glVertex2f(0.7f, -0.2f);
glVertex2f(0.0f, 0.6f);
glEnd();

 

}

 

void bridge()
{
    glBegin(GL_POLYGON);
    glColor3f(0.71f, 0.40f, 0.11f); // Set color to brown
    glVertex2f(0.39,-0.39);
    glVertex2f(0.41,-0.41);
    glVertex2f(-0.41,-0.41);
    glVertex2f(-0.39,-0.39);

 

glEnd();
}

 

void bridgePiller()
{
    glBegin(GL_POLYGON);
    glColor3f(0.9f, 0.9f, 0.9f); // Set color to brown

 

    glVertex2f(-0.41,-0.41);
    glVertex2f(-0.41,-0.30);
    glVertex2f(-0.39,-0.30);
    glVertex2f(-0.39,-0.39);

 

glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.9f, 0.9f, 0.9f); // Set color to brown

 

    glVertex2f(-0.31,-0.39);
    glVertex2f(-0.31,-0.30);
    glVertex2f(-0.29,-0.30);
    glVertex2f(-0.29,-0.39);

 

glEnd();
glBegin(GL_POLYGON);
    glColor3f(0.9f, 0.9f, 0.9f); // Set color to brown

 

    glVertex2f(-0.21,-0.39);
    glVertex2f(-0.21,-0.30);
    glVertex2f(-0.19,-0.30);
    glVertex2f(-0.19,-0.39);

 

glEnd();
glBegin(GL_POLYGON);
    glColor3f(0.9f, 0.9f, 0.9f); // Set color to brown

 

    glVertex2f(-0.11,-0.39);
    glVertex2f(-0.11,-0.30);
    glVertex2f(-0.09,-0.30);
    glVertex2f(-0.09,-0.39);

 

glEnd();
glBegin(GL_POLYGON);
    glColor3f(0.9f, 0.9f, 0.9f); // Set color to brown

 

    glVertex2f(-0.01,-0.39);
    glVertex2f(-0.01,-0.30);
    glVertex2f(0.01,-0.30);
    glVertex2f(0.01,-0.39);

 

glEnd();
glBegin(GL_POLYGON);
    glColor3f(0.9f, 0.9f, 0.9f); // Set color to brown

 

    glVertex2f(0.09,-0.39);
    glVertex2f(0.09,-0.30);
    glVertex2f(0.11,-0.30);
    glVertex2f(0.11,-0.39);

 

glEnd();
glBegin(GL_POLYGON);
    glColor3f(0.9f, 0.9f, 0.9f); // Set color to brown

 

    glVertex2f(0.19,-0.39);
    glVertex2f(0.19,-0.30);
    glVertex2f(0.21,-0.30);
    glVertex2f(0.21,-0.39);

 

glEnd();
glBegin(GL_POLYGON);
    glColor3f(0.9f, 0.9f, 0.9f); // Set color to brown

 

    glVertex2f(0.29,-0.39);
    glVertex2f(0.29,-0.30);
    glVertex2f(0.31,-0.30);
    glVertex2f(0.31,-0.39);

 

glEnd();
glBegin(GL_POLYGON);
    glColor3f(0.9f, 0.9f, 0.9f); // Set color to brown

 

    glVertex2f(0.39,-0.39);
    glVertex2f(0.39,-0.30);
    glVertex2f(0.41,-0.30);
    glVertex2f(0.41,-0.41);

 

glEnd();
}

 

void myDisplay()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

 

    ground();
    riverbank();
    riverWater();
    bridge();
    bridgePiller();

 

    glFlush();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1900, 1000);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("Catch the Fruit");
    myInit();
    glutDisplayFunc(myDisplay);
   
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
    glutTimerFunc(100, updateTank, 0);
    glutTimerFunc(100, updateTank2, 0);
    glutTimerFunc(100, updateHeli, 0);
    glutTimerFunc(100, updateRocket, 5);
    glutTimerFunc(100, updateRocket2, 5);
    glutTimerFunc(100, updateHeliRocket, 5);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
   
    glutMainLoop();
    return 0;
}
