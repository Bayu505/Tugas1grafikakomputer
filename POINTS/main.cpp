#include <GL/glut.h>

void titik ();
main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("tugas 2");
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glOrtho(0.0,0.0,0.0,0.0,0.0,0.0);
    glutDisplayFunc(titik);
    glutMainLoop();
}
void titik()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(25.0);
    glBegin(GL_POINTS);

    glColor4f(1.0, 1.0, 1.0, 0.0);//white
    glVertex2f(-0.5,-0.1);

    glColor3f(0.0, 1.0, 0.0);//green
    glVertex2f(-0.3,0.1);

    glColor3f(0.5, 1.0, 1.0);//cyan
    glVertex2f(-0.1,-0.1);

    glColor3f(1.0, 0.5, 1.0);//orange
    glVertex2f(0.1,0.1);

    glColor3f(0.5, 0.5, 0.5);//violet
    glVertex2f(0.3,-0.1);

    glColor4f(1.0, 0.0, 0.0, 0.0);//red
    glVertex2f(0.5,0.1);

    glColor4f(1.0, 1.0, 0.0, 0.0);//yellow
    glVertex2f(0.7,-0.1);

    glEnd();
    glFlush();
}
