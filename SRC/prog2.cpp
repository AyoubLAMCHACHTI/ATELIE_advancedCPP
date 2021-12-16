
#include <iostream>
#include <vector>
using namespace std;
 
int main(int argc, char const *argv[])
{
     vector <char> date,heure;
     string str="161220212119";
     // construire la date ;
     int j=0;
     for(int i=0 ; i < 10 ;i++){
        if(i==2 || i== 5 ){
            date.push_back('/');
        }
        else {
            date.push_back(str[j]);
            j++;
        }
     }
     // construire l'heure 
     j=0;
     for(int i=0 ; i < 5 ;i++){
        if(i==2 ){
            heure.push_back(':');
        }
        else {
            heure.push_back(str[j+8]);
            j++;
        }
     }

     cout<<"\n----------------------------- la sortie -------------------------\n\n\n";
     // afficher la dayte et l'heure 
     cout<<" ajourd'huit : ";
     for (int  i = 0; i < date.size(); i++)
     {
         cout<<date[i];
     }
     cout<<"  ";
     for (int  i = 0; i < heure.size(); i++)
     {
         cout<<heure[i];
     }
    cout<<"\n\n\n\n----------------------------- copy right 2021-------------------------\n\n\n";
     
      
      
    return 0;
}
