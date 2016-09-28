#include <stdio.h>
#include <GL/glut.h>
float d=3.0;
void quad(int x,int y){
	// glColor3f(1.0,0.0,0.0);
			for(int i=0;i<20;i++){
			glVertex2f(x,y);
			glVertex2f(x+d,y);
			glVertex2f(x+d,y+d);
			glVertex2f(x,y+d);
			}
}
void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_QUADS);
		int x=200;
		int y=200;
			glColor3f(1.0,0.0,0.0);
			glVertex2f(x,y);
			glVertex2f(x+d,y);
			glVertex2f(x+d,y+d);
			glVertex2f(x,y+d);
	// if()
	// glColor3f(0.0,0.0,0.0);
	// for(int i=0;i<20;i++)

	// 	for (int j = 0; j < 20; j++)
	// 	{
	// 		if((i+j)%2)
	// 		glColor3f(1.0,1.0,1.0);
	// 		else
	// 		glColor3f(0,0,0);	
	// 		int x=(i*d)+200;
	// 		int y=(j*d)+200;

	// 		glVertex2f(x,y);
	// 		glVertex2f(x+d,y);
	// 		glVertex2f(x+d,y+d);
	// 		glVertex2f(x,y+d);
	// 	}



	glEnd();
	glFlush();
}


int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(400,400);
	glutCreateWindow("Lesson 1");
	glClearColor(1.0,1.0,1.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0,400.0,0.0,400.0,-1.0,1.0);

	glutDisplayFunc(display);
	glutMainLoop();
	// return 1;

}