#include <GL/glut.h>
void display()

    {
        glColor3f(1,1,0); ///���ѷs�W���{��
        glutSolidTeapot( 0.3 );

        glColor3f(1,0,1);
        glutSolidTeapot( 0.2 );

        glutSwapBuffers();
    }

    int main(int argc, char *argv[])
    {
        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
        glutCreateWindow("GLUT Shapes");
        glutDisplayFunc(display);
        glutMainLoop();
    }
