#include <iostream>
#include <string.h>
using namespace std;

#include "student.h"

int main(int argc, char* argv[]) {
  
  int n= (argc-1)/3;
  student *pt_std=new student[n];
int i;
  //./aout monkey 20 3.5 Art 15 2.5
  for(i=1;i<argc;i+=3)   {
  
(*pt_std).set_all(argv[i],atoi(argv[i+1]),atof(argv[i+2]));
    pt_std++;
   }
  pt_std-=n;
  /*put them in 2 different loops*/
  for(i=0;i<n;i++){  
    pt_std->print_all();
    //(*(pt_std+i)).print_all()
    //(pt_std+i)->print_all()
    //pt_std[i].print_all();
    pt_std++;
  }
  pt_std-=n;
  float maxgpa;
  maxgpa=0.0;
  int count;
  for(i=0;i<n;i++){
    float temp;
    temp=(*(pt_std+i)).get_score();
    if (maxgpa<temp){
      maxgpa=temp;
      count=i;
    }
    //cout<<maxgpa<<count<<endl;
  }
  cout<<endl<<"---Highest Score---"<<endl;
  (pt_std+count)->print_all();
  
  delete [] pt_std;
  //name =oat
  //age =21
  //score=55
  //print all info


  }
  
  


