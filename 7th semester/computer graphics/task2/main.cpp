#include <windows.h>
#include <GL/glut.h>


void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(10.0);
    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, 1.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, -1.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON); ////////////finland
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.2f, 0.2f);
    glVertex2f(1.0f, 0.2f);
    glVertex2f(1.0f, 0.8f);
    glVertex2f(0.2f, 0.8f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.2f, 0.4f);
    glVertex2f(1.0f, 0.4f);
    glVertex2f(1.0f, 0.6f);
    glVertex2f(0.2f, 0.6f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.4f, 0.2f);
    glVertex2f(0.6f, 0.2f);
    glVertex2f(0.6f, 0.8f);
    glVertex2f(0.4f, 0.8f);
    glEnd(); ////////////finland

    glBegin(GL_POLYGON); ////////////tonga
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.2f, -0.2f);
    glVertex2f(-1.0f, -0.2f);
    glVertex2f(-1.0f, -0.8f);
    glVertex2f(-0.2f, -0.8f);
    glEnd();

    glBegin(GL_POLYGON); ////////////tonga
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.6f, -0.2f);
    glVertex2f(-0.6f, -0.6f);
    glVertex2f(-1.0f, -0.6f);
    glVertex2f(-1.0f, -0.2f);
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
