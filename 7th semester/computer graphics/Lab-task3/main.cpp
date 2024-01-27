#include <windows.h>
#include <GL/glut.h>

void initGL() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void display()

{
glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 0.0f);

glVertex2f(0.0f, 0.60f);
glVertex2f(-0.55f, 0.60f);
glVertex2f(-0.55f, 0.55f);
glVertex2f(-0.60f, 0.55f);
glVertex2f(-0.60f, 0.50f);
glVertex2f(-0.65f, 0.50f);
glVertex2f(-0.65f, 0.45f);
glVertex2f(-0.70f, 0.45f);
glVertex2f(-0.70f, 0.40f);
glVertex2f(-0.75f, 0.40f);
glVertex2f(-0.75f, 0.35f);
glVertex2f(-0.80f, 0.35f);
glVertex2f(-0.80f, 0.30f);
glVertex2f(-0.85f, 0.30f);
glVertex2f(-0.85f, 0.25f);
glVertex2f(-0.90f, 0.25f);
glVertex2f(-0.90f, 0.20f);
glVertex2f(-0.95f, 0.20f);
glVertex2f(-0.95f, -0.20f);
glVertex2f(-0.90f, -0.20f);
glVertex2f(-0.90f, -0.25f);
glVertex2f(-0.85f, -0.25f);
glVertex2f(-0.85f, -0.3f);
glVertex2f(-0.8f, -0.3f);
glVertex2f(-0.8f, -0.35f);
glVertex2f(-0.75f, -0.35f);
glVertex2f(-0.75f, -0.4f);
glVertex2f(-0.7f, -0.4f);
glVertex2f(-0.7f, -0.45f);
glVertex2f(-0.65f, -0.45f);
glVertex2f(-0.65f, -0.5f);
glVertex2f(-0.6f, -0.5f);
glVertex2f(-0.6f, -0.55f);
glVertex2f(-0.55f, -0.55f);
glVertex2f(-0.55f, -0.6f);


glVertex2f(0.55f, -0.6f);
glVertex2f(0.55f, -0.55f);
glVertex2f(0.6f, -0.55f);
glVertex2f(0.6f, -0.5f);
glVertex2f(0.65f, -0.5f);
glVertex2f(0.65f, -0.45f);
glVertex2f(0.7f, -0.45f);
glVertex2f(0.7f, -0.4f);
glVertex2f(0.75f, -0.4f);
glVertex2f(0.75f, -0.35f);
glVertex2f(0.8f, -0.35f);
glVertex2f(0.8f, -0.3f);
glVertex2f(0.85f, -0.3f);
glVertex2f(0.85f, -0.25f);
glVertex2f(0.9f, -0.25f);
glVertex2f(0.9f, -0.2f);
glVertex2f(0.95f, -0.2f);
glVertex2f(0.95f, 0.2f);
glVertex2f(0.9f, 0.2f);
glVertex2f(0.9f, 0.25f);
glVertex2f(0.85f, 0.25f);
glVertex2f(0.85f, 0.3f);
glVertex2f(0.8f, 0.3f);
glVertex2f(0.8f, 0.35f);
glVertex2f(0.75f, 0.35f);
glVertex2f(0.75f, 0.4f);
glVertex2f(0.7f, 0.4f);
glVertex2f(0.7f, 0.45f);
glVertex2f(0.65f, 0.45f);
glVertex2f(0.65f, 0.5f);
glVertex2f(0.6f, 0.5f);
glVertex2f(0.6f, 0.55f);
glVertex2f(0.55f, 0.55f);
glVertex2f(0.55f, 0.6f);
glVertex2f(0.0f, 0.6f);

glEnd();


glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 0.0f);

glVertex2f(0.0f, 0.55f);
glVertex2f(-0.55f, 0.55f);
glVertex2f(-0.55f, 0.5f);
glVertex2f(-0.6f, 0.5f);
glVertex2f(-0.6f, 0.45f);
glVertex2f(-0.65f, 0.45f);
glVertex2f(-0.65f, 0.4f);
glVertex2f(-0.7f, 0.4f);
glVertex2f(-0.7f, 0.35f);
glVertex2f(-0.75f, 0.35f);
glVertex2f(-0.75f, 0.3f);
glVertex2f(-0.8f, 0.3f);
glVertex2f(-0.8f, 0.25f);
glVertex2f(-0.85f, 0.25f);
glVertex2f(-0.85f, 0.2f);
glVertex2f(-0.9f, 0.2f);
glVertex2f(-0.9f, -0.2f);
glVertex2f(-0.85f, -0.2f);
glVertex2f(-0.85f, -0.25f);
glVertex2f(-0.8f, -0.25f);
glVertex2f(-0.8f, -0.3f);
glVertex2f(-0.75f, -0.3f);
glVertex2f(-0.75f, -0.35f);
glVertex2f(-0.7f, -0.35f);
glVertex2f(-0.7f, -0.4f);
glVertex2f(-0.65f, -0.4f);
glVertex2f(-0.65f, -0.45f);
glVertex2f(-0.6f, -0.45f);
glVertex2f(-0.6f, -0.5f);
glVertex2f(-0.55f, -0.5f);
glVertex2f(-0.55f, -0.55f);
glVertex2f(-0.5f, -0.55f);

glVertex2f(0.55f, -0.55f);
glVertex2f(0.55f, -0.5f);
glVertex2f(0.6f, -0.5f);
glVertex2f(0.6f, -0.45f);
glVertex2f(0.65f, -0.45f);
glVertex2f(0.65f, -0.4f);
glVertex2f(0.7f, -0.4f);
glVertex2f(0.7f, -0.35f);
glVertex2f(0.75f, -0.35f);
glVertex2f(0.75f, -0.3f);
glVertex2f(0.8f, -0.3f);
glVertex2f(0.8f, -0.25f);
glVertex2f(0.85f, -0.25f);
glVertex2f(0.85f, -0.2f);
glVertex2f(0.9f, -0.2f);
glVertex2f(0.9f, 0.2f);
glVertex2f(0.85f, 0.2f);
glVertex2f(0.85f, 0.25f);
glVertex2f(0.8f, 0.25f);
glVertex2f(0.8f, 0.3f);
glVertex2f(0.75f, 0.3f);
glVertex2f(0.75f, 0.35f);
glVertex2f(0.7f, 0.35f);
glVertex2f(0.70f, 0.40f);
glVertex2f(0.65f, 0.40f);
glVertex2f(0.65f, 0.45f);
glVertex2f(0.6f, 0.45f);
glVertex2f(0.6f, 0.50f);
glVertex2f(0.55f, 0.50f);
glVertex2f(0.55f, 0.55f);
glVertex2f(0.50f, 0.55f);

glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 0.0f);


glVertex2f(-0.40f, 0.45f);
glVertex2f(-0.55f, 0.45f);
glVertex2f(-0.55f, 0.40f);
glVertex2f(-0.60f, 0.40f);
glVertex2f(-0.60f, 0.35f);
glVertex2f(-0.65f, 0.35f);
glVertex2f(-0.65f, 0.30f);
glVertex2f(-0.70f, 0.30f);
glVertex2f(-0.7f, 0.25f);
glVertex2f(-0.75f, 0.25f);
glVertex2f(-0.75f, 0.20f);
glVertex2f(-0.80f, 0.20f);
glVertex2f(-0.80f, 0.15f);
glVertex2f(-0.85f, 0.15f);
glVertex2f(-0.85f, -0.15f);
glVertex2f(-0.8f, -0.15f);
glVertex2f(-0.80f, -0.20f);
glVertex2f(-0.75f, -0.20f);
glVertex2f(-0.75f, -0.25f);
glVertex2f(-0.70f, -0.25f);
glVertex2f(-0.70f, -0.30f);
glVertex2f(-0.65f, -0.30f);
glVertex2f(-0.65f, -0.35f);
glVertex2f(-0.60f, -0.35f);
glVertex2f(-0.60f, -0.40f);
glVertex2f(-0.55f, -0.40f);
glVertex2f(-0.55f, -0.45f);
glVertex2f(-0.40f, -0.45f);
glVertex2f(-0.40f, -0.50f);


glVertex2f(0.40f, -0.50f);
glVertex2f(0.40f, -0.45f);
glVertex2f(0.55f, -0.45f);
glVertex2f(0.55f, -0.40f);
glVertex2f(0.60f, -0.40f);
glVertex2f(0.6f, -0.35f);
glVertex2f(0.65f, -0.35f);
glVertex2f(0.65f, -0.30f);
glVertex2f(0.70f, -0.30f);
glVertex2f(0.70f, -0.25f);
glVertex2f(0.75f, -0.25f);
glVertex2f(0.75f, -0.20f);
glVertex2f(0.80f, -0.20f);
glVertex2f(0.80f, -0.15f);
glVertex2f(0.85f, -0.15f);
glVertex2f(0.85f, 0.15f);
glVertex2f(0.80f, 0.15f);
glVertex2f(0.80f, 0.20f);
glVertex2f(0.75f, 0.20f);
glVertex2f(0.75f, 0.25f);
glVertex2f(0.70f, 0.25f);
glVertex2f(0.70f, 0.30f);
glVertex2f(0.65f, 0.30f);
glVertex2f(0.65f, 0.35f);
glVertex2f(0.60f, 0.35f);
glVertex2f(0.60f, 0.40f);
glVertex2f(0.55f, 0.40f);
glVertex2f(0.55f, 0.45f);
glVertex2f(0.40f, 0.45f);


glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 0.0f);

glVertex2f(-0.40f, 0.45f);
glVertex2f(-0.40f, 0.15f);
glVertex2f(-0.20f, 0.15f);
glVertex2f(-0.20f, 0.20f);
glVertex2f(-0.15f, 0.20f);
glVertex2f(-0.15f, 0.45f);


glEnd();
glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 0.0f);

glVertex2f(-0.40f, 0.40f);
glVertex2f(-0.45f, 0.40f);
glVertex2f(-0.45f, 0.20f);
glVertex2f(-0.40f, 0.20f);

glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 0.0f);

glVertex2f(-0.15f, 0.50f);
glVertex2f(-0.15f, 0.45f);
glVertex2f(-0.10f, 0.45f);
glVertex2f(-0.10f, 0.50f);

glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 0.0f);

glVertex2f(0.10f, 0.50f);
glVertex2f(0.10f, 0.45f);
glVertex2f(0.15f, 0.45f);
glVertex2f(0.15f, 0.50f);

glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 0.0f);

glVertex2f(0.15f, 0.45f);
glVertex2f(0.15f, 0.20f);
glVertex2f(0.40f, 0.20f);
glVertex2f(0.40f, 0.45f);


glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 0.0f);

glVertex2f(0.20f, 0.20f);
glVertex2f(0.20f, 0.15f);
glVertex2f(0.40f, 0.15f);
glVertex2f(0.40f, 0.20f);

glEnd();


glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 0.0f);

glVertex2f(0.40f, 0.40f);
glVertex2f(0.40f, 0.20f);
glVertex2f(0.45f, 0.20f);
glVertex2f(0.45f, 0.40f);

glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 0.0f);

glVertex2f(0.30f, -0.45f);
glVertex2f(0.30f, -0.50f);
glVertex2f(0.30f, -0.50f);
glVertex2f(0.30f, -0.45f);

glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 0.0f);

glVertex2f(0.10f, -0.40f);
glVertex2f(0.10f, -0.45f);
glVertex2f(0.30f, -0.45f);
glVertex2f(0.30f, -0.40f);

glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 0.0f);

glVertex2f(0.10f, -0.35f);
glVertex2f(0.10f, -0.40f);
glVertex2f(0.25f, -0.40f);
glVertex2f(0.25f, -0.35f);

glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 0.0f);

glVertex2f(0.15f, -0.30f);
glVertex2f(0.15f, -0.35f);
glVertex2f(0.20f, -0.35f);
glVertex2f(0.20f, -0.30f);

glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 0.0f);

glVertex2f(-0.30f, -0.45f);
glVertex2f(-0.30f, -0.50f);
glVertex2f(-0.03f, -0.50f);
glVertex2f(-0.03f, -0.45f);

glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 0.0f);

glVertex2f(-0.30f, -0.40f);
glVertex2f(-0.30f, -0.45f);
glVertex2f(-0.10f, -0.45f);
glVertex2f(-0.10f, -0.40f);

glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 0.0f);

glVertex2f(-0.25f, -0.35f);
glVertex2f(-0.25f, -0.40f);
glVertex2f(-0.10f, -0.40f);
glVertex2f(-0.10f, -0.35f);

glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 0.0f);

glVertex2f(-0.20f, -0.30f);
glVertex2f(-0.20f, -0.35f);
glVertex2f(-0.15f, -0.35f);
glVertex2f(-0.15f, -0.30f);



glEnd();

glFlush();

}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutCreateWindow("BatMan Logo");
glutInitWindowSize(800, 720);
glutInitWindowPosition(80, 50);
glutDisplayFunc(display);
initGL();
glutMainLoop();
return 0;
}




