#include <iostream>
#include <list>
#include <iterator>
using namespace std;
// begining
// defining a function to ordre a lis lik sort() fucntion predefined in list class 
void swap(int &arg1 , int &arg2){
   int tmp;
      tmp=arg1; arg1=arg2; arg2=tmp;
}
void ordred_list(list <int> argument){
    list <int> ::iterator it1,it2;
    for(it1=argument.begin() ; it1 != argument.end() ;++it1){
      for(it2=++it1 ; it2 != argument.end() ; ++it2){
          if(*it1 > *it2){
            swap(*it1,*it2);
          }
      }
    }
     
}

int main(int argc, char const *argv[])
{
     
    list <int> usr_list ;
    int nbr,buffer;
    cout<<"\n How many number you will insert :";
    cin>>nbr;
    cout<<"type them one by one :";
    for(int i=0 ;i<nbr ; ++i){
       cin>>buffer;
       usr_list.push_back(buffer);
    }
    list <int> :: iterator it;  
    usr_list.sort();
    cout << "your list ordred :" ;
     
    for(it = usr_list.begin(); it != usr_list.end(); ++it){
      cout<<"\t"<<*it;
     }
     cout<<"\n\n";  
    return 0;
}
