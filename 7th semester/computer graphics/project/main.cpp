#include <GL/glut.h>
#include <cmath>

void drawTree() {
    // Draw the trunk of the tree
    const float trunk_height = 0.3;
    const float trunk_width = 0.1;
    glColor3f(0.5, 0.35, 0.05);
    glBegin(GL_POLYGON);
    glVertex2f(-trunk_width / 2, 0.0);
    glVertex2f(-trunk_width / 2, trunk_height);
    glVertex2f(trunk_width / 2, trunk_height);
    glVertex2f(trunk_width / 2, 0.0);
    glEnd();

    // Draw the tree's branches
    const float branch_size = 0.2;
    const float branch_angle = 30.0;
    const float branch_x = trunk_width / 2;
    const float branch_y = trunk_height;
    glColor3f(0.0, 0.5, 0.0);
    glPushMatrix();
    glTranslatef(branch_x, branch_y, 0.0);
    glRotatef(branch_angle, 0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.0);
    glVertex2f(branch_size, 0.0);
    glVertex2f(branch_size / 2, branch_size);
    glVertex2f(-branch_size / 2, branch_size);
    glVertex2f(-branch_size, 0.0);
    glEnd();
    glPopMatrix();

    // Draw the tree's leaves
    const float leaf_size = 0.1;
    const int num_segments = 16;
    const float leaf_radius = 0.4;
    const float leaf_x = branch_x + branch_size / 2;
    const float leaf_y = branch_y + branch_size / 2;
    glColor3f(0.0, 1.0, 0.0);
    glPushMatrix();
    glTranslatef(leaf_x, leaf_y, 0.0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < num_segments; ++i) {
        float theta = 2.0f * M_PI * float(i) / float(num_segments);
        float x = leaf_radius * cosf(theta);
        float y = leaf_radius * sinf(theta);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();

    // Draw the tree's shadow
    const float shadow_offset = 0.1;
    const float shadow_size = 0.5;
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex2f(-shadow_size / 2, 0.0);
    glVertex2f(-shadow_size / 2, -shadow_offset);
    glVertex2f(shadow_size / 2, -shadow_offset);
    glVertex2f(shadow_size / 2, 0.0);
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);

    glPushMatrix();
    glTranslatef(0.0, -0.5, 0.0);
    drawTree();
    glPopMatrix();

    glutSwapBuffers();
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
    glutInitWindowSize(500, 500);
    glutCreateWindow("2D Realistic Tree");
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
