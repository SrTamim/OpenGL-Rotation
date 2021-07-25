#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
using namespace std;

float x1,x2,x3,y1,y2,y3;
int angle,c;

void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
 if(c=1 && c!=2){
    glColor3f (1, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glVertex2f(x3,y3);
    glEnd();

    glLoadIdentity();
    glTranslatef(x1,y1,0);
    glRotatef(-angle,0,0,1);
    glTranslatef(-x1,-y1,0);

    glColor3f (0, 0, 1);
    glBegin(GL_TRIANGLES);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glVertex2f(x3,y3);
    glEnd();
    cout<<"clock";
    glFlush();
    }

  else if(c=2){
    glColor3f (1, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glVertex2f(x3,y3);
    glEnd();

    glLoadIdentity();
    glTranslatef(x1,y1,0);
    glRotatef(angle,0,0,1);
    glTranslatef(-x1,-y1,0);

    glColor3f (0, 0, 1);
    glBegin(GL_TRIANGLES);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glVertex2f(x3,y3);
    glEnd();
    cout<<"anti";
    glFlush();
    }
}
void init (void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
}

int main(int argc, char** argv)
{

    cout<<"Enter the 1st 2 points: ";
    cin>>x1>>y1;
    cout<<"Enter the 2nd 2 points: ";
    cin>>x2>>y2;
    cout<<"Enter the 3rd 2 points: ";
    cin>>x3>>y3;
    cout<<"Enter Rotation Angle: ";
    cin>>angle;
    cout<<"Clockwise or Anticlockwise ? (1/2): ";
    cin>>c;
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Rotation");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
