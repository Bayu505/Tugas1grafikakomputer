#include <GL/glut.h>

void polygon();
main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(1000,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("polygon");
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
    glutDisplayFunc(polygon);
    glutMainLoop();
}
void polygon()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glVertex3f(7,4,0);
    glVertex3f(-4,3,0);
    glVertex3f(7,-8,0);
    glVertex3f(2,6,0);
    glColor3f(1.0,1.0,0.0);//yellow


    glEnd();
    glFlush();
}
