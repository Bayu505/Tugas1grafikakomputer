#include <GL/glut.h>

void garis();
main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(1000,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("tugas 2");
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glOrtho(0.0,1.0,0.0,1.0,-1.0,1.0);
    glutDisplayFunc(garis);
    glutMainLoop();
}
void garis()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(25.0);
    glBegin(GL_LINES);

    glVertex3f(0.2,0.5,0.0);
    glVertex3f(0.8,0.5,0.0);
    glColor4f(1.0,0.0,0.0,0.0);//red

    glEnd();
    glFlush();
}
