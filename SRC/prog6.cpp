#include <iostream>
using namespace std;
class Test{
public:
static int tableau[] ;
public :
static int division(int indice, int diviseur){
   if(diviseur == 0){
       throw "la division par 0 est indifinie !!!!";
   }
   return tableau[indice]/diviseur;
}
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main()
{
int x, y,flag=-100;
    cout << "Entrez l\'indice de l\'entier a diviser: " << endl;
    cin >> x ;
    cout << "Entrez le diviseur: " << endl;
    cin >> y ;
        while (flag==-100)
        {
            try{
                flag=Test::division(x,y);
            }catch(const char* error){
                cout<<error; 
                cout<<" enterer un autre diviseur non nul :" ;
                cin>>y;   
            }
        }
        cout << "Le resultat de la division est: "<<flag<< endl;
    return 0;
}
