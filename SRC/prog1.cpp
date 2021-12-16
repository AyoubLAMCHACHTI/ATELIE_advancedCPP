
 
 // les bibliothèques necessaires 
 #include <iostream>
#include <cmath>
 
using namespace std;
// defintiion de la classe complex 
class complex {
    public :
    float x,y;
    // consuctreur àinitialiser les données 
    void set_data(float x , float y){
        this->x=x; this->y=y;
    }
    // la methode de l'affichage 
     void display(){     // sert à afficher le nombre
                        // sous le format trivial en math 
       if(y>0 && x!=0){
        cout<<x<<" +i"<<y<<" "; ///ici le traitement des
                                    // cas possible pour 
                                    // afficher le bon format 
       }
       if(y<0 && x!=0){
         cout<<x<<" "<<y<<"i";
       }
       if(y==0){
           cout<<x;
       }
       if(x==0 && x!=0){
           cout<<x<<"i";
       }

    }
    // surcharger un opérateur qui caluclue le module ,l'i=on va noter |
    void operator | (complex u){
         cout<<"|"; display();cout<<"| = "<<sqrt(x*x+y*y);
    }
    // sommer 2 complexes 
    complex operator + (complex u){
        complex tmp;
        tmp.x=x+u.x; tmp.y=y+u.y;
        return tmp;
    }
    // soustraire deux complex ;
    complex operator - (complex u){
        complex  tmp;
        tmp.x=x-u.x; tmp.y=y-u.y;
        return tmp;
    }
    // multiplier 2 complex 
    complex operator * (complex u){
        complex tmp;
        tmp.x=(x*u.x)-(y+u.y); tmp.y=x*u.y+u.x*y; // la regle mathematique
        return tmp;
    }
    // notons l'argument par []
    void operator [] (complex u){
        //float arg;
        if(y==0 && x!=0){
            cout<<"[";display();cout<<"] = 2kpi ";
        }
        else if( y==0){
             cout<<"[";display();cout<<"] = undifini";
        }
        else {
             cout<<"[";display();cout<<"] = "<<atan(y/x);
        }


    }

};
// dessiner le menu 
void draw_menu(){  // une fonctio assistante pour reduire la taille de code 
    cout<<"-------------------------------------------"<<endl;
    cout<<"|1. pour afficher le complexe               |"<<endl;
    cout<<"|2. pour calculer le module                 |"<<endl;
    cout<<"|3. pour la somme de 2 complexes            |"<<endl;
    cout<<"|4. pour faire la multiplication            |"<<endl;
    cout<<"|5. pour calculer l\'argumet                 |"<<endl;
    cout<<"|0 .pour quitter                            |"<<endl;
    cout<<"___________________________________________ "<<endl;
    
}


int main(int argc, char const *argv[])
{
    complex test1,test2;
     
    int aux=-1; // la variable assistante, au début elle porte une valeur négative 
                 // pour dire que l'utilisateur on n'a pas encore l'envie de quitter  
    
    
    while (aux!=0)
    {
      cout<<endl;
      draw_menu();
      
      cout<<"enter votre choix :"  ; cin>>aux;
      switch (aux)
      {
      case 1: cout<<"la partie reelle = "; cin>>test1.x;
              cout<<"la partie imaginaire = "; cin>>test1.y;
               system("clear")  ;
              cout<<"votre imaginaire est :";test1.display();
          break;
      case 2: cout<<"la partie reelle = "; cin>>test1.x;
              cout<<"la partie imaginaire = "; cin>>test1.y;
               system("clear")  ;
              test1|test1;
          break;
      case 5: cout<<"la partie reelle = "; cin>>test1.x;
              cout<<"la partie imaginaire = "; cin>>test1.y;
               system("clear")  ;
              test1[test1];
          break;
      case 3: cout<<"la partie reelle1 = "; cin>>test1.x;
              cout<<"la partie imaginaire 1= "; cin>>test1.y;
              cout<<"la partie reelle2 = "; cin>>test2.x;
              cout<<"la partie imaginaire 2= "; cin>>test2.y;
              system("clear")  ;
        test1.display();cout<<" + ";test2.display(); cout<<" = ";(test1+test2).display();
          break;
      

      case 4: cout<<"la partie reelle1 = "; cin>>test1.x;
              cout<<"la partie imaginaire 1= "; cin>>test1.y;
              cout<<"la partie reelle2 = "; cin>>test2.x;
              cout<<"la partie imaginaire 2= "; cin>>test2.y;
               system("clear")  ;
              cout<<"(";test1.display();cout<<")";cout<<" * ";cout<<"(";
              test2.display();cout<<")"; cout<<" = ";(test1*test2).display();
              
              break;
      default:if(aux!=0){
              system("clear")  ;
             cout<<"erreur lors de la siasie ! merci d'enter un  nombre existe ";
             }
      }  
      
    } 
    cout<<"au revoir "<<endl;
    
    

     
    return 0;
}


