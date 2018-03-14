

/*
 * INTEGRANTES:
 * 	GRECIA GUADALUPE ESCOBAR GARCIA EG14001
 * 	BRAYAHN STANLEY AMAYA BLANCO    AB13001*/
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
void display(void)

	
{
	
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    

//definiendo el tamanio de los puntos en el plano
    glPointSize(15.0f);
    glBegin(GL_LINES);
    
	// Definiendo el color de los puntos en el plano
	//glColor3f(-9.0f, 4.5f, 0.0f);
	
		 glColor3f(1.0f, 1.0f, 1.0f);
 //***************************************************************************
//Definiendo la posicion de los vertices PARA EL CUADRADO PRINCIPAL
    glVertex3f(-9.0f, 4.5f, 0.0f);//dibujando el primer punto para linea
    glVertex3f(-9.0f,-4.5f,0.0f);//dibijando el segundo punto para linea
    glVertex3f(9.0f,-4.5f,0.0f);//dibijando el segundo punto para linea
    glVertex3f(9.0f,4.5f,0.0f);//dibujando el tercer punto para linea
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(-9.0f,-4.5f,0.0f);//dibujando el tercer punto para linea
    glVertex3f(9.0f,-4.5f,0.0f);//dibujando el tercer punto para linea
    glColor3f( 0.0,  1.0,  0.0 );
    glVertex3f(9.0f,4.5f,0.0f);//dibujando el tercer punto para linea
    glVertex3f(-9.0f,4.5f,0.0f);//dibujando el tercer punto para linea
 
  //***************************************************************************
    //para la raya central
    glVertex3f(0.0f,4.5f,0.0f);//dibujando el tercer punto para linea
    glVertex3f(0.0f,-4.5f,0.0f);//dibujando el tercer punto para linea
    
  //***************************************************************************
  //  glBegin(GL_POLYGON);
   // glColor3f(0.0f, 1.0f, 0.0f);
    
    //Para la porteria cuadro interno DEL LADO IZQUIERDO
    glVertex3f(-9.0f,1.5f,0.0f);//dibujando el tercer punto para linea
    glVertex3f(-9.0f,-1.5f,0.0f);//dibujando el tercer punto para linea
    
    glVertex3f(-8.0f,1.5f,0.0f);//dibujando el tercer punto para linea
   glVertex3f(-8.0f,-1.5f,0.0f);//dibujando el tercer punto para linea
   
   glVertex3f(-8.0f,1.5f,0.0f);//dibujando el tercer punto para linea
    glVertex3f(-9.0f,1.5f,0.0f);//dibujando el tercer punto para linea
    
    glVertex3f(-8.0f,-1.5f,0.0f);//dibujando el tercer punto para linea
    glVertex3f(-9.0f,-1.5f,0.0f);//dibujando el tercer punto para linea
    
    //PORTERIA CUADRO GRANDE LADO IZQQUIERDO
    glVertex3f(-9.0f,2.5f,0.0f);//dibujando el tercer punto para linea
    glVertex3f(-9.0f,-2.5f,0.0f);//dibujando el tercer punto para linea
    
    glVertex3f(-7.0f,2.5f,0.0f);//dibujando el tercer punto para linea
   glVertex3f(-7.0f,-2.5f,0.0f);//dibujando el tercer punto para linea
   
   glVertex3f(-7.0f,2.5f,0.0f);//dibujando el tercer punto para linea
    glVertex3f(-9.0f,2.5f,0.0f);//dibujando el tercer punto para linea
    
    glVertex3f(-7.0f,-2.5f,0.0f);//dibujando el tercer punto para linea
    glVertex3f(-9.0f,-2.5f,0.0f);//dibujando el tercer punto para linea
    
   //***************************************************************************

  //PARA EL SEMI CIRCULO PORTERIA IZQUIERDA
   /*  GLfloat mitad_angulo;
    int ii;
    int jj;
    float cx;
    float cy;
    float calx1;
    float caly1:
    float r1 =3;
    
    float px3=-9.2, py3=9, r3=1, calx3, caly3;
    for (double i=2.33; i<=3.98; i+=0.001){
		calx1=r1 * cos (i) + px1;
		caly1= r1*sin(i) +py1;
		//glVertex2f(-2.3, 5.2);
		glVertex2f(calx1, caly1);
		}
   
   glBegin(GL_POINTS);
      glPointSize(1);
   for(ii=0; ii<360; ii+=1.0)
    {
	    mitad_angulo = ii*M_PI/180.0f; //grados a radianes
		//glColor3f(0.0f, 1.0f, 0.0f);
		glVertex3f(-6.0f, 0.0f, 0.0f);
		
		glVertex3f(sin(mitad_angulo) ,cos(mitad_angulo) , 0.0);
    }//FIN DE FOR */
  //***************************************************************************
    
    //***************************************************************************
    //Para la porteria cuadro interno DEL LADO DERECHO
    glVertex3f(9.0f,1.5f,0.0f);//dibujando el tercer punto para linea
    glVertex3f(9.0f,-1.5f,0.0f);//dibujando el tercer punto para linea
    
    glVertex3f(8.0f,1.5f,0.0f);//dibujando el tercer punto para linea
   glVertex3f(8.0f,-1.5f,0.0f);//dibujando el tercer punto para linea
   
   glVertex3f(8.0f,1.5f,0.0f);//dibujando el tercer punto para linea
    glVertex3f(9.0f,1.5f,0.0f);//dibujando el tercer punto para linea
    
    glVertex3f(8.0f,-1.5f,0.0f);//dibujando el tercer punto para linea
    glVertex3f(9.0f,-1.5f,0.0f);//dibujando el tercer punto para linea
    
    //PORTERIA CUADRO GRANDE LADO IZQQUIERDO
    glVertex3f(9.0f,2.5f,0.0f);//dibujando el tercer punto para linea
    glVertex3f(9.0f,-2.5f,0.0f);//dibujando el tercer punto para linea
    
    glVertex3f(7.0f,2.5f,0.0f);//dibujando el tercer punto para linea
   glVertex3f(7.0f,-2.5f,0.0f);//dibujando el tercer punto para linea
   
   glVertex3f(7.0f,2.5f,0.0f);//dibujando el tercer punto para linea
    glVertex3f(9.0f,2.5f,0.0f);//dibujando el tercer punto para linea
    
    glVertex3f(7.0f,-2.5f,0.0f);//dibujando el tercer punto para linea
    glVertex3f(9.0f,-2.5f,0.0f);//dibujando el tercer punto para linea
    

 //***************************************************************************

  //PARA EL CIRCULO CENTRAL
    GLfloat angulo;
    int i;
    int j;
    glBegin(GL_POINTS);
       glPointSize(1);
    for(i=0; i<360; i+=1.0)
    {
	    angulo = i*M_PI/180.0f; //grados a radianes
		glColor3f(0.0f, 1.0f, 0.0f);
		glVertex3f(0.0f, 0.0f, 0.0f);
		glVertex3f(cos(angulo), sin(angulo), 0.0);
    }//FIN DE FOR
  //***************************************************************************
     

/* posicion del os vertices en un principio del ejercicio
glVertex3f(0.5f,0.5f,0.0f);
    glVertex3f(-0.5f,-0.5f,0.0f);
    glVertex3f(0.7f,0.7f,0.0f);
    glVertex3f(-0.7f,-0.7f,0.0f);
*/
    glEnd();
    glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

//glOrtho(left, right, bottom, top, nearVal, farVal);
    glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);

//glOrtho(1.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 420);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Ejemplo Puntos");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}


