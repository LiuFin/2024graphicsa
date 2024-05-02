#include <GL/glut.h>
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
float angle=0;///旋轉的角度
void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    myBody();
    glPushMatrix();
        glTranslatef(0.3, 0.3, 0);///(3)掛到肩上
        glRotatef(angle++, 0, 0, 1);///(2)旋轉的角度
        glTranslatef(0.15, 0, 0);///(1)把旋轉中心放在畫面的正中心
        myArm();///上手臂
        glPushMatrix();
            glTranslatef(0.15, 0, 0);///(3)掛到手肘上
            glRotatef(angle++, 0, 0, 1);///(2)旋轉的角度
            glTranslatef(0.15, 0, 0);///(1)把旋轉中心放在畫面的正中心
            myArm();///下手臂
        glPopMatrix();
    glPopMatrix();

	glutSwapBuffers();
}
int main(int argc, char*argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("week10");
	glutDisplayFunc(display);
	glutIdleFunc(display);///有空就旋轉
	glutMainLoop();
}
