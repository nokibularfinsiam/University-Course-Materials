/// Draw Sample Line

#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display()
{
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f); // Set background color to blue and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(2);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.5f, 0.2f);    // x, y
	glVertex2f(0.5f, 0.2f);    // x, y

	glEnd();

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv)
{
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutInitWindowPosition(80, 50);  // Set the window's initial position according to the monitor
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
