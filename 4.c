#include <stdio.h>
#include <GL/glut.h>
float zNum=4;
float step=10.0;
float col=0.0,col1=0.0,col2=0.0;
float colStep=0.1;
int ab(int n,int x,int y);
int cd(int n,int x,int y);
void quad(int x,int y){
	if(col!=1.0)
	 glColor3f(col+=(col<1.0)?colStep:0,col1+=(col>=1.0&&col1<=1.0)?colStep:0,col2+=(col1>=1.0&&col2<=1.0)?colStep:0);
			for(int i=0;i<20;i++){
			glVertex2f(x,y);
			glVertex2f(x+step,y);
			glVertex2f(x+step,y+step);
			glVertex2f(x,y+step);
			}
}
void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_QUADS);
		int x=200;
		int y=200;
			quad(x,y);
			quad(x+=step,y);
			quad(x,y-=step);

	for(int i=2;i<zNum;i++){
		if((i%2)==0) cd(i,x-=step,y);
		else ab(i,x,y+=step);
	}

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


int ab(int n,int x,int y){
	for(int i=0;i<n;i++,x+=step){
		quad(x,y);
	}
	y-=step;
	x-=step;
	for (int i = 0; i < n;i++,y-=step)
	{
		quad(x,y);
	}
}

int cd(int n,int x,int y){
	for(int i=0;i<n;i++,x-=step){
		quad(x,y);
	}
	y+=step;
	x+=step;
	for (int i=0;i<n;i++,y+=step)
	{
		quad(x,y);
	}
}