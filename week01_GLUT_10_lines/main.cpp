#include <GL/glut.h> ///18�� #include
void display()
{
    glutSolidTeapot( 0.3 );
    glutSwapBuffers();
}
int main(int argc, char *argv[]) ///��138��, int main
{
    glutInit(&argc, argv); ///140
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///143
    glutCreateWindow("GLUT Shapes"); ///145
    glutDisplayFunc(display); ///148
    glutMainLoop(); ///174
}
