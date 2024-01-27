#include <windows.h>
#include <GL/glut.h>


void display() {
    //glClearColor(0.5f, 0.5f, 0.5f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(10.0);
    glBegin(GL_LINES);
    //glColor3f(0.0f, 1.0f, 0.0f);
    glEnd();

    //glClearColor(0.0f, 1.0f, 0.0f, 0.0f); // triangle 1
    glBegin(GL_TRIANGLES);
    glVertex2f (-0.25f, 0.0f);
    glVertex2f (0.25f, 0.0f);
    glVertex2f (0.0f, 0.8f);
    glEnd();

   // glClearColor(0.1f, 0.0f, 0.0f, 0.0f); //triangle 2
    glBegin(GL_TRIANGLES);
    glVertex2f (-0.6f, 0.3f);
    glVertex2f (0.0f, 0.3f);
    glVertex2f (0.0f, -0.3f);
    glEnd();

    //glClearColor(0.0f, 0.0f, 1.0f, 0.0f); //triangle 3
    glBegin(GL_TRIANGLES);
    glVertex2f (-0.25f, -0.05f);
    glVertex2f (-0.4f, -0.6f);
    glVertex2f (0.0f, -0.3f);
    glEnd();

    //glClearColor(0.5f, 1.0f, 0.5f, 0.0f); //triangle 4
    glBegin(GL_TRIANGLES);
    glVertex2f (0.6f, 0.3f);
    glVertex2f (0.0f, 0.3f);
    glVertex2f (0.0f, -0.3f);
    glEnd();

    //glClearColor(0.5f, 1.0f, 0.5f, 0.0f); //triangle 5
    glBegin(GL_TRIANGLES);
    glVertex2f (0.25f, -0.05f);
    glVertex2f (0.4f, -0.6f);
    glVertex2f (0.0f, -0.3f);
    glEnd();




     glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(400, 150);
    glutCreateWindow("OpenGL Setup Test");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
