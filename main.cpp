#include <windows.h>
#include <GL/glut.h>
#include<math.h>
# define PI           3.14159265358979323846
GLfloat i = 0.0f;
void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void display()
{
    ///MILL
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glRotatef(i,0.0,0.0,0.1);
    glBegin(GL_TRIANGLES);
    glColor3ub(51, 153, 255);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.225f, -0.225f);
    glVertex2f( 0.6f, -0.3f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(51, 153, 255);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.225f, -0.225f);
    glVertex2f( -0.6f, -0.3f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(51, 153, 255);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.1f, 0.3f);
    glVertex2f( 0.0f, 0.6f);
    glEnd();
    /*glBegin(GL_TRIANGLES);
    glColor3ub(51, 153, 255);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.1f, -0.3f);
    glVertex2f( 0.0f, -0.6f);
    glEnd();*/
    glPopMatrix();
    i+=-0.1f;
    glBegin(GL_TRIANGLES);
    glColor3ub(166, 166, 166);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.05f, -0.92f);
    glVertex2f( -0.05f, -0.92f);
    glEnd();
    glFlush();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);          // Initialize GLUT
    glutInitWindowSize(320, 320);
    glutCreateWindow("Model Transform");
    glutDisplayFunc(display);//
    glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
    glutMainLoop();
    return 0;}

