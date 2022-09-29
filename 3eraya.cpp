#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main() 
{
	srand(time(0)); 
    char x,y,v;
    string dificultad;
    int posicion;
    bool Ocupado1=false,Ocupado2=false,Ocupado3=false,Ocupado4=false,Ocupado5=false,Ocupado6=false,Ocupado7=false,Ocupado8=false,Ocupado9=false;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0;
    char p1=a*v,p2=b*v,p3=c*v,p4=d*v,p5=e*v,p6=f*v,p7=g*v,p8=h*v,p9=i*v;
    cout<<"Alumno: Paula Paricahua Bernal"<<endl;
    cout<<"Curso: Ciencias de la Computacion I "<<endl;
    cout<<"UCSP 2022 I"<<endl;
    cout<<"/-------------------------------------"<<endl;
    cout<<"Enter a variable: "<<endl;
    cout<<"Player 1: ";cin>>x;
    cout<<"Player 2: ";cin>>y;
    while(dificultad!="normal"||dificultad!="easy"||dificultad!="hard")
    {
        cout<<"Choose a difficulty (easy/normal/hard): "<<endl;cin>>dificultad;
        if(dificultad=="easy"){break;}
        else if(dificultad=="normal"){break;}
        else if(dificultad=="hard"){break;}
    }
    cout<<"let's play!! "<<endl;
	for (int k=1;k<10;k++)
    {   
        if(k%2==1)
        { cout<<"Player 1, enter a position from 1 to 9: "<<endl;
          cin>> posicion;  
          v=x; 
            if (posicion==1&&Ocupado1==false)
            { a=1;p1=x;Ocupado1=true;}
            else if(posicion==2&&Ocupado2==false)
            { b=1;p2=x;Ocupado2=true;}
            else if(posicion==3&&Ocupado3==false)
            { c=1;p3=x;Ocupado3=true;}
            else if(posicion==4&&Ocupado4==false)
            { d=1;p4=x;Ocupado4=true;}
            else if(posicion==5&&Ocupado5==false)
            { e=1;p5=x;Ocupado5=true;}
            else if(posicion==6&&Ocupado6==false)
            { f=1;p6=x;Ocupado6=true;}
            else if(posicion==7&&Ocupado7==false)
            { g=1;p7=x;Ocupado7=true;}
            else if(posicion==8&&Ocupado8==false)
            { h=1;p8=x;Ocupado8=true;}
            else if(posicion==9&&Ocupado9==false) 
            { i=1;p9=x; Ocupado9=true;}
        	else
			{cout<<"Enter another position from 1 to 9: "<<endl;
        	 cin>> posicion;
        		if (posicion==1&&Ocupado1==false)
	            { a=1;p1=x;Ocupado1=true;}
	            else if(posicion==2&&Ocupado2==false)
	            { b=1;p2=x;Ocupado2=true;}
	            else if(posicion==3&&Ocupado3==false)
	            { c=1;p3=x;Ocupado3=true;}
	            else if(posicion==4&&Ocupado4==false)
	            { d=1;p4=x;Ocupado4=true;}
	            else if(posicion==5&&Ocupado5==false)
	            { e=1;p5=x;Ocupado5=true;}
	            else if(posicion==6&&Ocupado6==false)
	            { f=1;p6=x;Ocupado6=true;}
	            else if(posicion==7&&Ocupado7==false)
	            { g=1;p7=x;Ocupado7=true;}
	            else if(posicion==8&&Ocupado8==false)
	            { h=1;p8=x;Ocupado8=true;}
	            else if(posicion==9&&Ocupado9==false) 
	            { i=1;p9=x; Ocupado9=true;}
        	}
        }
        else 
        {
            if (dificultad=="easy")
            {
            cout<<"Player 2, enter a position from 1 to 9 : "<<endl;
            posicion=(rand() % 9) + 1;	  
                v=y;
                if (posicion==1&&Ocupado1==false){ a=1;p1=y;Ocupado1=true;}
                else if(posicion==2&&Ocupado2==false){ b=1;p2=y;Ocupado2=true;}
                else if(posicion==3&&Ocupado3==false){ c=1;p3=y; Ocupado3=true;}
                else if(posicion==4&&Ocupado4==false){ d=1;p4=y;Ocupado4=true;}
                else if(posicion==5&&Ocupado5==false){ e=1;p5=y; Ocupado5=true;}
                else if(posicion==6&&Ocupado6==false){ f=1;p6=y;Ocupado6=true;}
                else if(posicion==7&&Ocupado7==false){ g=1;p7=y;Ocupado7=true;}
                else if(posicion==8&&Ocupado8==false){ h=1;p8=y; Ocupado8=true;}
                else if(posicion==9&&Ocupado9==false){ i=1;p9=y; Ocupado9=true;}
                else
                {
                    posicion=(rand() % 9) + 1;
                    if (posicion==1&&Ocupado1==false){ a=1;p1=y;Ocupado1=true;}
                    else if(posicion==2&&Ocupado2==false){ b=1;p2=y;Ocupado2=true;}
                    else if(posicion==3&&Ocupado3==false){ c=1;p3=y; Ocupado3=true;}
                    else if(posicion==4&&Ocupado4==false){ d=1;p4=y;Ocupado4=true;}
                    else if(posicion==5&&Ocupado5==false){ e=1;p5=y; Ocupado5=true;}
                    else if(posicion==6&&Ocupado6==false){ f=1;p6=y;Ocupado6=true;}
                    else if(posicion==7&&Ocupado7==false){ g=1;p7=y;Ocupado7=true;}
                    else if(posicion==8&&Ocupado8==false){ h=1;p8=y; Ocupado8=true;}
                    else if(posicion==9&&Ocupado9==false){ i=1;p9=y; Ocupado9=true;}
                }
            }
 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            else if (dificultad=="normal") 
            { 
                cout<<"Player 2 , enter a position from 1 to 9: "<<endl;
                if((p3==x&&p2==x||p4==x&&p7==x||p5==x&&p9==x)&&Ocupado1==false){ posicion=1;}
                else if((p1==x&&p3==x||p5==x&&p8==x)&&Ocupado2==false){posicion=2;}
                else if((p1==x&&p2==x||p6==x&&p9==x||p5==x&&p7==x)&&Ocupado3==false){ posicion=3;}
                else if((p1==x&&p7==x||p5==x&&p6==x)&&Ocupado4==false){ posicion=4;}
                else if((p1==x&&p9==x||p7==x&&p3==x||p2==x&&p8==x||p4==x&&p6==x)&&Ocupado5==false){posicion=5;}
                else if((p3==x&&p9==x||p4==x&&p5==x)&&Ocupado6==false){posicion=6;}
                else if((p1==x&&p4==x||p8==x&&p9==x||p3==x&&p5==x)&&Ocupado7==false){posicion=7;}
                else if((p2==x&&p5==x||p7==x&&p9==x)&&Ocupado8==false){posicion=8;}
                else if((p1==x&&p5==x||p3==x&&p6==x||p7==x&&p8==x)&&Ocupado9==false){posicion=9;}  
                else{posicion=(rand() % 9) + 1;}
                if (posicion==1&&Ocupado1==false){ a=1;p1=y;Ocupado1=true;}
                else if(posicion==2&&Ocupado2==false){ b=1;p2=y;Ocupado2=true;}
                else if(posicion==3&&Ocupado3==false){ c=1;p3=y; Ocupado3=true;}
                else if(posicion==4&&Ocupado4==false){ d=1;p4=y;Ocupado4=true;}
                else if(posicion==5&&Ocupado5==false){ e=1;p5=y; Ocupado5=true;}
                else if(posicion==6&&Ocupado6==false){ f=1;p6=y;Ocupado6=true;}
                else if(posicion==7&&Ocupado7==false){ g=1;p7=y;Ocupado7=true;}
                else if(posicion==8&&Ocupado8==false){ h=1;p8=y; Ocupado8=true;}
                else if(posicion==9&&Ocupado9==false){ i=1;p9=y; Ocupado9=true;}
            }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            else if(dificultad=="hard")
            {
                cout<<"Player 2, enter a position from 1 to 9 :  "<<endl;
                if (k==2)
                {   
                    if (Ocupado1==true)
                    {   if (Ocupado7==true)
                        {   if (Ocupado5==true)
                            {   if(Ocupado3==true)
                                {   if (Ocupado2==true)
                                    {   posicion=(rand() % 9) + 1;}
                                    else{posicion=2;}
                                }
                                else {posicion=3;}
                            }
                            else{posicion=5;}
                        }
                        else{posicion=7;}
                    }
                    else{posicion=1;}
                }    
                else if(k==4)
                {   
                    if((p3==x&&p2==x||p4==x&&p7==x||p5==x&&p9==x)&&Ocupado1==false){ posicion=1;}
                    else if((p1==x&&p3==x||p5==x&&p8==x)&&Ocupado2==false){posicion=2;}
                    else if((p1==x&&p2==x||p6==x&&p9==x||p5==x&&p7==x)&&Ocupado3==false){ posicion=3;}
                    else if((p1==x&&p7==x||p5==x&&p6==x)&&Ocupado4==false){ posicion=4;}
                    else if((p1==x&&p9==x||p7==x&&p3==x||p2==x&&p8==x||p4==x&&p6==x)&&Ocupado5==false){posicion=5;}
                    else if((p3==x&&p9==x||p4==x&&p5==x)&&Ocupado6==false){posicion=6;}
                    else if((p1==x&&p4==x||p8==x&&p9==x||p3==x&&p5==x)&&Ocupado7==false){posicion=7;}
                    else if((p2==x&&p5==x||p7==x&&p9==x)&&Ocupado8==false){posicion=8;}
                    else if((p1==x&&p5==x||p3==x&&p6==x||p7==x&&p8==x)&&Ocupado9==false){posicion=9;}  
                    else
                    {
                        if (Ocupado1==true)
                        {   if (Ocupado7==true)
                            {   if (Ocupado5==true)
                                {   if(Ocupado3==true)
                                    {   if (Ocupado2==true)
                                        {   posicion=(rand() % 9) + 1;}
                                        else{posicion=2;}
                                    }
                                    else {posicion=3;}
                                }
                                else{posicion=5;}
                            }
                            else{posicion=7;}
                        }
                        else{posicion=1;}
                    }
                }
                else 
                {   
                    if((p3==y&&p2==y||p4==y&&p7==y||p5==y&&p9==y)&&Ocupado1==false){ posicion=1;}
                    else if((p1==y&&p3==y||p5==y&&p8==y)&&Ocupado2==false){posicion=2;}
                    else if((p1==y&&p2==y||p6==y&&p9==y||p5==y&&p7==y)&&Ocupado3==false){ posicion=3;}
                    else if((p1==y&&p7==y||p5==y&&p6==y)&&Ocupado4==false){ posicion=4;}
                    else if((p1==y&&p9==y||p7==y&&p3==y||p2==y&&p8==y||p4==y&&p6==y)&&Ocupado5==false){posicion=5;}
                    else if((p3==y&&p9==y||p4==y&&p5==y)&&Ocupado6==false){posicion=6;}
                    else if((p1==y&&p4==y||p8==y&&p9==y||p3==y&&p5==y)&&Ocupado7==false){posicion=7;}
                    else if((p2==y&&p5==y||p7==y&&p9==y)&&Ocupado8==false){posicion=8;}
                    else if((p1==y&&p5==y||p3==y&&p6==y||p7==y&&p8==y)&&Ocupado9==false){posicion=9;}  
                    else if((p3==x&&p2==x||p4==x&&p7==x||p5==x&&p9==x)&&Ocupado1==false){ posicion=1;}
                    else if((p1==x&&p3==x||p5==x&&p8==x)&&Ocupado2==false){posicion=2;}
                    else if((p1==x&&p2==x||p6==x&&p9==x||p5==x&&p7==x)&&Ocupado3==false){ posicion=3;}
                    else if((p1==x&&p7==x||p5==x&&p6==x)&&Ocupado4==false){ posicion=4;}
                    else if((p1==x&&p9==x||p7==x&&p3==x||p2==x&&p8==x||p4==x&&p6==x)&&Ocupado5==false){posicion=5;}
                    else if((p3==x&&p9==x||p4==x&&p5==x)&&Ocupado6==false){posicion=6;}
                    else if((p1==x&&p4==x||p8==x&&p9==x||p3==x&&p5==x)&&Ocupado7==false){posicion=7;}
                    else if((p2==x&&p5==x||p7==x&&p9==x)&&Ocupado8==false){posicion=8;}
                    else if((p1==x&&p5==x||p3==x&&p6==x||p7==x&&p8==x)&&Ocupado9==false){posicion=9;} 
                    else
                    {
                        if (Ocupado1==true)
                        {   if (Ocupado7==true)
                            {   if (Ocupado5==true)
                                {   if(Ocupado3==true)
                                    {   if (Ocupado2==true)
                                        {   posicion=(rand() % 9) + 1;}
                                        else{posicion=2;}
                                    }
                                    else {posicion=3;}
                                }
                                else{posicion=5;}
                            }
                            else{posicion=7;}
                        }
                        else{posicion=1;}
                    }
                }
                if (posicion==1&&Ocupado1==false){ a=1;p1=y;Ocupado1=true;}
                else if(posicion==2&&Ocupado2==false){ b=1;p2=y;Ocupado2=true;}
                else if(posicion==3&&Ocupado3==false){ c=1;p3=y; Ocupado3=true;}
                else if(posicion==4&&Ocupado4==false){ d=1;p4=y;Ocupado4=true;}
                else if(posicion==5&&Ocupado5==false){ e=1;p5=y; Ocupado5=true;}
                else if(posicion==6&&Ocupado6==false){ f=1;p6=y;Ocupado6=true;}
                else if(posicion==7&&Ocupado7==false){ g=1;p7=y;Ocupado7=true;}
                else if(posicion==8&&Ocupado8==false){ h=1;p8=y; Ocupado8=true;}
                else if(posicion==9&&Ocupado9==false){ i=1;p9=y; Ocupado9=true;}
            }
        }
        //-------------------------------------------------------------------------------------Pantalla----------------------------------------------------------------------------------------
        cout<<char(p1)<<"|"<<char(p2)<<"|"<<char(p3)<<endl;
        cout<<"=|=|="<<endl;
        cout<<char(p4)<<"|"<<char(p5)<<"|"<<char(p6)<<endl;
        cout<<"=|=|="<<endl;
        cout<<char(p7)<<"|"<<char(p8)<<"|"<<char(p9)<<endl;     
        //-----------------------------------------------------------quien gana,quien sigue, tu decides,epicas batallas del rap del frikismo---------------------------------------------------
        if (p1==x&&p2==x&&p3==x || p4==x&&p5==x&&p6==x ||p7==x&&p8==x&&p9==x|| p1==x&&p4==x&&p7==x||p2==x&&p5==x&&p8==x||p3==x&&p6==x&&p9==x||p1==x&&p5==x&&p9==x ||p3==x&&p5==x&&p7==x ){cout<<"El jugador 1 ha ganado !!"<<endl;break;}  
        else if (p1==y&&p2==y&&p3==y || p4==y&&p5==y&&p6==y ||p7==y&&p8==y&&p9==y|| p1==y&&p4==y&&p7==y||p2==y&&p5==y&&p8==y||p3==y&&p6==y&&p9==y|| p1==y&&p5==y&&p9==y ||p3==y&&p5==y&&p7==y ){cout<<"El jugador 2 ha ganado !!"<<endl;break;}  
        else if(k==9){cout<<"Tenemos un empate !!"<<endl;} 
    }
return 0;
}
