#include <glut.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

float xr = 0, yr = 0 , x_axis = 0;
int state = 1, state2 = 1;

void specialkey(int key, int x, int y) {
	switch (key) {
	case GLUT_KEY_UP:
		yr = yr + 10;
		cout << y << endl;
		glutPostRedisplay();
		break;
	case GLUT_KEY_DOWN:
		yr-=10;
		cout << y << endl;
		glutPostRedisplay();
		break;
	case GLUT_KEY_LEFT:
		xr-=10;
		if (xr == 200)
			xr = 50;
		cout << x << endl;
		glutPostRedisplay();
		break;
	case GLUT_KEY_RIGHT:
		xr+=10;
		if (xr == 80)
			xr = 230;
		cout << x << endl;
		glutPostRedisplay();
		break;
	}
}

void display() {
	glClearColor(0.537f, 0.812f, 0.941f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	
	//Mario
	glBegin(GL_QUADS);
	//Lower Left shoes
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(50 + xr, 50 + yr);
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(50 + xr, 60 + yr);
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(65 + xr, 60 + yr);
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(65 + xr, 50 + yr);
	//Higher Left shoes
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(53 + xr, 60 + yr);
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(53 + xr, 65 + yr);
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(65 + xr, 65 + yr);
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(65 + xr, 60 + yr);
	//Lower Left pantaloon
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(56 + xr, 65 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(56 + xr, 74 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(70 + xr, 74 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(70 + xr, 65 + yr);
	// Lower pantaloon
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(56 + xr, 74 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(56 + xr, 80 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(94 + xr, 80 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(94 + xr, 74 + yr);

	//Lower Right shoes
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(84 + xr, 50 + yr);
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(84 + xr, 60 + yr);
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(100 + xr, 60 + yr);
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(100 + xr, 50 + yr);
	//Higher Right shoes
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(84 + xr, 60 + yr);
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(84 + xr, 65 + yr);
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(97 + xr, 65 + yr);
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(97 + xr, 60 + yr);
	//Lower Right pantaloon
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(80 + xr, 65 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(80 + xr, 74 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(94 + xr, 74 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(94 + xr, 65 + yr);
	//Left Hand
	glColor3f(1, 0.8, 0.6);
	glVertex2f(56 + xr, 74 + yr);
	glColor3f(1, 0.8, 0.6);
	glVertex2f(56 + xr, 95 + yr);
	glColor3f(1, 0.8, 0.6);
	glVertex2f(50 + xr, 95 + yr);
	glColor3f(1, 0.8, 0.6);
	glVertex2f(50 + xr, 74 + yr);
	//Right Hand
	glColor3f(1, 0.8, 0.6);
	glVertex2f(94 + xr, 74 + yr);
	glColor3f(1, 0.8, 0.6);
	glVertex2f(94 + xr, 95 + yr);
	glColor3f(1, 0.8, 0.6);
	glVertex2f(100 + xr, 95 + yr);
	glColor3f(1, 0.8, 0.6);
	glVertex2f(100 + xr, 74 + yr);
	//Higher pantaloon
	glColor3f(0.0, 0.0, 1.00);   //57 //84  //92 //84
	glVertex2f(58 + xr, 80 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(58 + xr, 87 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(91 + xr, 87 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(91 + xr, 80 + yr);
	//Rest of higher pantaloon
	glColor3f(0.0, 0.0, 1.00);   
	glVertex2f(58 + xr, 80 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(58 + xr, 94 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(91 + xr, 94 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(91 + xr, 80 + yr);
	//Left Lower Hand_Dress
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(50 + xr, 95 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(50 + xr, 102 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(64 + xr, 102 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(64 + xr, 95 + yr);
	//Right Lower Hand_Dress
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(86 + xr, 95 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(86 + xr, 102 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(100 + xr, 102 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(100 + xr, 95 + yr);
	//Pantaloon between lower right and left hand_dress
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(64 + xr, 94 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(64 + xr, 102 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(86 + xr, 102 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(86 + xr, 94 + yr);
	//Left Middle Hand_Dress
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(53 + xr, 95 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(53 + xr, 108 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(64 + xr, 108 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(64 + xr, 95 + yr);
	//Right Middle Hand_Dress
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(86 + xr, 95 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(86 + xr, 108 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(97 + xr, 108 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(97 + xr, 95 + yr);
	//Right blue dot
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(82 + xr, 96 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(82 + xr, 108 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(86 + xr, 108 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(86 + xr, 96 + yr);
	//left blue dot low
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(64 + xr, 96 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(64 + xr, 108 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(68 + xr, 108 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(68 + xr, 96 + yr);
	//left blue dot
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(68 + xr, 98 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(68 + xr, 108 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(82 + xr, 108 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(82 + xr, 98 + yr);
	//Left High Hand_Dress
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(55 + xr, 100 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(55 + xr, 113 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(64 + xr, 113 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(64 + xr, 100 + yr);
	//Right High Hand_Dress
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(68 + xr, 108 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(68 + xr, 113 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(95 + xr, 113 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(95 + xr, 108 + yr);
	//left blue dot high
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(64 + xr, 108 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(64 + xr, 113 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(68 + xr, 113 + yr);
	glColor3f(0.0, 0.0, 1.00);
	glVertex2f(68 + xr, 108 + yr);
	//l1 Head
	glColor3f(1, 0.8, 0.6);
	glVertex2f(62 + xr, 113 + yr);
	glColor3f(1, 0.8, 0.6);
	glVertex2f(62 + xr, 120 + yr);
	glColor3f(1, 0.8, 0.6);
	glVertex2f(97 + xr, 120 + yr);
	glColor3f(1, 0.8, 0.6);
	glVertex2f(97 + xr, 113 + yr);
	//l2 Head
	glColor3f(1, 0.8, 0.6);
	glVertex2f(62 + xr, 120 + yr);
	glColor3f(1, 0.8, 0.6);
	glVertex2f(62 + xr, 127 + yr);
	glColor3f(1, 0.8, 0.6);
	glVertex2f(87 + xr, 127 + yr);
	glColor3f(1, 0.8, 0.6);
	glVertex2f(87 + xr, 120 + yr);
	// l1 Mostach
	glColor3f(0, 0, 0);
	glVertex2f(87 + xr, 120 + yr);
	glColor3f(0, 0, 0);
	glVertex2f(87 + xr, 127 + yr);
	glColor3f(0, 0, 0);
	glVertex2f(100 + xr, 127 + yr);
	glColor3f(0, 0, 0);
	glVertex2f(100 + xr, 120 + yr);
	//l3 Head
	glColor3f(1, 0.8, 0.6);
	glVertex2f(60 + xr, 127 + yr);
	glColor3f(1, 0.8, 0.6);
	glVertex2f(60 + xr, 134 + yr);
	glColor3f(1, 0.8, 0.6);
	glVertex2f(105 + xr, 134 + yr);
	glColor3f(1, 0.8, 0.6);
	glVertex2f(105 + xr, 127 + yr);
	//l2 Mostach
	glColor3f(0, 0, 0);
	glVertex2f(90 + xr, 127 + yr);
	glColor3f(0, 0, 0);
	glVertex2f(90 + xr, 134 + yr);
	glColor3f(0, 0, 0);
	glVertex2f(95 + xr, 134 + yr);
	glColor3f(0, 0, 0);
	glVertex2f(95 + xr, 127 + yr);
	//l4 Head
	glColor3f(1, 0.8, 0.6);
	glVertex2f(60 + xr, 134 + yr);
	glColor3f(1, 0.8, 0.6);
	glVertex2f(60 + xr, 141 + yr);
	glColor3f(1, 0.8, 0.6);
	glVertex2f(100 + xr, 141 + yr);
	glColor3f(1, 0.8, 0.6);
	glVertex2f(100 + xr, 134 + yr);
	//l5 Head
	glColor3f(1, 0.8, 0.6);
	glVertex2f(67 + xr, 141 + yr);
	glColor3f(1, 0.8, 0.6);
	glVertex2f(67 + xr, 148 + yr);
	glColor3f(1, 0.8, 0.6);
	glVertex2f(96 + xr, 148 + yr);
	glColor3f(1, 0.8, 0.6);
	glVertex2f(96 + xr, 141 + yr);
	//eyes 1
	glColor3f(0, 0, 0);
	glVertex2f(86 + xr, 134 + yr);
	glColor3f(0, 0, 0);
	glVertex2f(86 + xr, 148 + yr);
	glColor3f(0, 0, 0);
	glVertex2f(90 + xr, 148 + yr);
	glColor3f(0, 0, 0);
	glVertex2f(90 + xr, 134 + yr);
	// HAT 1
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(60 + xr, 148 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(60 + xr, 155 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(100 + xr, 155 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(100 + xr, 148 + yr);
	//HAT 2
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(65 + xr, 162 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(65 + xr, 155 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(90 + xr, 155 + yr);
	glColor3f(1.0, 0.0, 0.00);
	glVertex2f(90 + xr, 162 + yr);

	//hair 1
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(62 + xr, 125 + yr);
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(62 + xr, 130 + yr);
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(57 + xr, 130 + yr);
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(57 + xr, 125 + yr);

	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(60 + xr, 130 + yr);
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(60 + xr, 141 + yr);
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(57 + xr, 141 + yr);
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(57 + xr, 130 + yr);

	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(57 + xr, 141 + yr);
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(57 + xr, 148 + yr);
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(70 + xr, 148 + yr);
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(70 + xr, 141 + yr);
	
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(63 + xr, 130 + yr);
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(63 + xr, 148 + yr);
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(67 + xr, 148 + yr);
	glColor3f(0.59, 0.29, 0.00);
	glVertex2f(67 + xr, 130 + yr);
	// Tube base
	glColor3f(0, 0.6, 0);
	glVertex2f(190 , 40 );
	glColor3f(0, 0.6, 0);
	glVertex2f(190 , 150 );
	glColor3f(0, 0.6, 0);
	glVertex2f(250 , 150 );
	glColor3f(0, 0.6, 0);
	glVertex2f(250 , 40 );
	// Tube top
	glColor3f(0, 0.6, 0);
	glVertex2f(180 , 150 );
	glColor3f(0, 0.6, 0);
	glVertex2f(180 , 180 );
	glColor3f(0, 0.6, 0);
	glVertex2f(260 , 180 );
	glColor3f(0, 0.6, 0);
	glVertex2f(260 , 150 );

	//Base of flower
	glColor3f(0, 0.4, 0);
	glVertex2f(215, 180 );
	glColor3f(0, 0.4, 0);
	glVertex2f(215, 240);
	glColor3f(0, 0.4, 0);
	glVertex2f(225, 240);
	glColor3f(0, 0.4, 0);
	glVertex2f(225, 180);
	glEnd();

	glPointSize(10);
	glBegin(GL_POINTS);
	//simon pixel
	glColor3f(1, 0.8, 0.6);
	glVertex2f(92 + xr, 83.5 + yr);
	glColor3f(1, 0.8, 0.6);
	glVertex2f(58 + xr, 83.5 + yr);
	//Red pixel
	glColor3f(1, 0.0, 0.0);
	glVertex2f(92 + xr, 91 + yr);
	glColor3f(1, 0.0, 0.0);
	glVertex2f(58 + xr, 91 + yr);
	//Blue pixel
	glColor3f(0, 0.0, 1.0);
	glVertex2f(88 + xr, 91 + yr);
	glColor3f(0, 0.0, 1.0);
	glVertex2f(62 + xr, 91 + yr);
	//Yellow pixel
	glColor3f(1, 1.0, 0.0);
	glVertex2f(84 + xr, 91 + yr);
	glColor3f(1, 1.0, 0.0);
	glVertex2f(66 + xr, 91 + yr);
	//glVertex2f(73, 74);
	glEnd();

	glLineWidth(8);
	//Black Line of the tube
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex2f(190, 43);
	glColor3f(0, 0, 0);
	glVertex2f(190, 150);
	glColor3f(0, 0, 0);
	glVertex2f(250, 150);
	glColor3f(0, 0, 0);
	glVertex2f(250, 43);
	glEnd();
	//Black line of the top tube
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex2f(180, 150);
	glColor3f(0, 0, 0);
	glVertex2f(180, 180);
	glColor3f(0, 0, 0);
	glVertex2f(260, 180);
	glColor3f(0, 0, 0);
	glVertex2f(260, 150);

	glEnd();
	//Flower Circle
	int triangleAmount = 30; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * 22/7;
	glColor3f(1, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(220, 240); // center of circle
	for (int i = 0; i <= triangleAmount; i++) {
		glVertex2f(
			220 + (30 * cos(i * twicePi / triangleAmount)),
			240 + (30 * sin(i * twicePi / triangleAmount))
			);
	}
	glEnd();

	// Flower circle Line loop
	int lineAmount = 100; //# of triangles used to draw circle

	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i <= lineAmount; i++) {
		glVertex2f(
			220 + (30 * cos(i * twicePi / lineAmount)),
			240 + (30 * sin(i * twicePi / lineAmount))
			);
	}
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.537, 0.812, 0.941);
	glVertex2f(220, 240);
	glColor3f(0.537, 0.812, 0.941);
	glVertex2f(190, 290);
	glColor3f(0.537, 0.812, 0.941);
	glVertex2f(250, 290);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);
	glVertex2f(240, 268);
	glColor3f(0, 0, 0);
	glVertex2f(220, 240);
	glColor3f(0, 0, 0);
	glVertex2f(200, 268);
	
	glEnd();

	// Floor
	glBegin(GL_QUADS);
	glColor3f(0.604, 0.482, 0.31);
	glVertex2f(0 , 0 );
	glColor3f(0.604, 0.482, 0.31);
	glVertex2f(0 , 40 );
	glColor3f(0.604, 0.482, 0.31);
	glVertex2f(500 , 40 );
	glColor3f(0.604, 0.482, 0.31);
	glVertex2f(500 , 0 );
	glEnd();

	//Cloud
	glColor3f(1, 1, 1);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(100 + x_axis, 350); // center of circle
	for (int i = 0; i <= triangleAmount; i++) {
		glVertex2f(
			100 + x_axis + (30 * cos(i * twicePi / triangleAmount)),
			350 + (30 * sin(i * twicePi / triangleAmount))
			);
	}
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(120 + x_axis, 365); // center of circle
	for (int i = 0; i <= triangleAmount; i++) {
		glVertex2f(
			120 + x_axis + (30 * cos(i * twicePi / triangleAmount)),
			365 + (30 * sin(i * twicePi / triangleAmount))
			);
	}
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(135 + x_axis, 350); // center of circle
	for (int i = 0; i <= triangleAmount; i++) {
		glVertex2f(
			135 + x_axis + (30 * cos(i * twicePi / triangleAmount)),
			350 + (30 * sin(i * twicePi / triangleAmount))
			);
	}
	glEnd();

	//glRotatef(60, 0.4, 0.5, 0.0);
	//glTranslatef(0.2, 0.6, 0.3);
	glFlush();
	glutPostRedisplay();
	glutSwapBuffers();
}

void myinit() {
	/*glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(5.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 499.0, 0.0, 499.0);*/


}

void timer(int) {
	glutPostRedisplay();
	glutTimerFunc(1000 / 60, timer, 0);

	switch (state) {
	case 1:
		if (yr < 30) 
			yr = yr + 1;
		else
			state = -1;
		break;
	case -1:
		if (yr > -10)
			yr = yr - 1;
		else
			state = 1;
		break;
	}
	switch (state2) {
	case 1:
		if (x_axis < 400)
			x_axis = x_axis + 1;
		else
			state2 = -1;
		break;
	case -1:
		if (x_axis > -300)
			x_axis = x_axis - 1;
		else
			state2 = 1;
		break;
	}
	
}

void main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1000, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Super Mario");
	glutDisplayFunc(display);
	glClearColor(0, 1, 0, 0);
	gluOrtho2D(0.0, 400, 0.0, 400);
	glutSpecialFunc(specialkey);
	glutTimerFunc(0,timer,0);

	//myinit();
	glutMainLoop();
}