#include <GL/glut.h>
#include <mmsystem.h>
void myBody()
{
    glPushMatrix();
        glColor3f(1, 0, 0);
        glutWireCube(0.6);///myBody()
    glPopMatrix();
}
void myArm()
{
    glPushMatrix();
        glColor3f(0, 1, 0);
        glScalef(1, 0.4, 0.4);
        glutWireCube(0.3);///myArm()
    glPopMatrix();
}
float angle=0;///���઺����
void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    myBody();///����

    glPushMatrix();///�k�b��
        glTranslatef(0.3, 0.3, 0);///(3)����ӤW
        glRotatef(angle, 0, 0, 1);///(2)���઺����
        glTranslatef(0.15, 0, 0);///(1)����त�ߩ�b�e����������
        myArm();///�W���u
        glPushMatrix();
            glTranslatef(0.15, 0, 0);///(3)�����y�W
            glRotatef(angle, 0, 0, 1);///(2)���઺����
            glTranslatef(0.15, 0, 0);///(1)����त�ߩ�b�e����������
            myArm();///�U���u
        glPopMatrix();
    glPopMatrix();

    glPushMatrix();///���b��
        glTranslatef(-0.3, 0.3, 0);///(3)����ӤW
        glRotatef(-angle, 0, 0, 1);///(2)���઺����
        glTranslatef(-0.15, 0, 0);///(1)����त�ߩ�b�e����������
        myArm();///�W���u
        glPushMatrix();
            glTranslatef(-0.15, 0, 0);///(3)�����y�W
            glRotatef(-angle, 0, 0, 1);///(2)���઺����
            glTranslatef(-0.15, 0, 0);///(1)����त�ߩ�b�e����������
            myArm();///�U���u
        glPopMatrix();
    glPopMatrix();

	glutSwapBuffers();
}
void motion(int x, int y)
{
    angle=x;
    glutPostRedisplay();
}
int main(int argc, char*argv[])
{
    PlaySound("C:/horse.wav", NULL, SND_ASYNC);
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("week10");
	glutDisplayFunc(display);
	glutMotionFunc(motion);
	glutIdleFunc(display);///���ŴN����
	glutMainLoop();
}
