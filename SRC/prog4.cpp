 #include <iostream>
 #include <list> 
 #include <iterator>
 using namespace std ;
 class persona {
     public:
     string nom ;
     string prenom ;
     persona(string nom , string prenom){
        this->nom=nom; this->prenom=prenom ;
     }
 };
 
 // make the list in order by alphabetic 
 // let's us first make a function wich compare string
 int comareSTR(string str1 , string str2){
     int i=0;
     while (i != str1.length() && i != str2.length())
     {
        if( int(str1[i]) < int(str2[i]) ){
            return 1;
        }
        else if( int(str1[i]) > int(str2[i]) ){
            return -1;
        }
     }
     return 0;
 }
 // we will use it in the fallowing function 

 void mysort(list <persona> exp){
     // we need two iterators to browse the list 
     list <persona> ::iterator it1,it2;
     string help;
     for(it1=exp.begin() ; it1 != exp.end() ; ++it1){
         it2=it1++;
         for (it2; it2 != exp.end() ; ++it2)
         {
             if( comareSTR(it1->prenom,it2->prenom)==-1 ){ // swaping values 
                 help=it1->prenom;
                 it1->prenom=it2->prenom;
                 it2->prenom=help;

             }
         }
         
     }
 }


 int main(int argc, char const *argv[])
 {
     list <persona> gentes={persona("ayoub","bakkali"),persona("ayoub","saber"),persona("ayoub","allali")};
    /* list <string> data;// list assistante 
     list <persona>::iterator ptr; // pointeur pou iterer la list des personnes 
     list <string> ::iterator itr ;  // iterer la list qui contient seulement les prenoms 
     for(ptr=gentes.begin(); ptr != gentes.end();++ptr){
         data.push_back(ptr->prenom);  // parcourir la list des personnes et affecter les noms à data
     }
     data.sort(); // trier la list des prenoms ;
     cout<<"lalist des personnes trié : \n";
     itr=data.begin(); // au debut l'iterator est à l'entête de data
     for(ptr=gentes.begin(); ptr != gentes.end();++ptr){
         cout<<*itr<<" "<<ptr->nom<<endl;// afficher à la fois les npms et prenoms 
         ++itr;  // sauter à l'ememnt suivant 
 
     }

     */
     //
     mysort(gentes);
 
     cout<<gentes.begin()->prenom;
     return 0;
 }
 