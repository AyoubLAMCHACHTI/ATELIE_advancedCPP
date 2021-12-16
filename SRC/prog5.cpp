
#include <iostream>
#include <set>
#include <iterator>
using namespace std ;
// searching a value in the set  
/*
bool check(set <int> para,int flag){
    set <int> ::iterator itr;
    for(itr=para.begin(); itr != para.end() ; ++itr){
        if(*itr==flag){
            return true ;  
        }
    }
    return false ;
}                                    */
// fonctiion avec iterators : fonction2

bool checkByIterator(set <int>::iterator head,set <int>::iterator foot ,int value){
     set <int> ::iterator parcours;
     for (parcours=head; parcours != foot ;++parcours)
     {
         if(*parcours == value){
             return true ;
         }
     }
     return false ;
     
}
// mla genaralisation de lafonction2
 
template <class T,class X>
bool checkAll(T <X>::iterator head,T <X>::iterator foot ,X value){
     T <X> ::iterator parcours;
     for (parcours=head; parcours != foot ;++parcours)
     {
         if(*parcours == value){
             return true ;
         }
     }
     return false ;
     
}


int main(int argc, char const *argv[])
{
    set <int> numbers;
    set <int> ::iterator it=numbers.begin();
    cout<<"\n************************ satrt ****************************\n";
    for(int i=1; i <=100 ;i++){
        numbers.insert(i);
    }
    int i=1;
    for(it=numbers.begin() ; it != numbers.end() ; ++it){
        cout<<" "<<*it;
        if(i%10==0){
            cout<<endl;
        }
        ++i;
    }
    if(checkAll(numbers.begin(),numbers.end(),1)){
        cout<<"the value est existe ";
    }
    cout<<endl;
    return 0;
}
