#include <iostream>
#include "matrix.h"

using namespace std;

int main()
{


  int data1 [] = {10,20,30,40,50,60};
  int data2 [] = {1,2,3,4};
  int data3 [] = {5,2,3,4,5,6};
  int data4 [] = {10,20,30,40,50,60};
  int data5 [] = {10,20,30,40,50,60};
  int data6 [] = {1,0,0,0,1,0,0,0,1};

   matrix mat1(2,3,data1,mat1),mat2(3,2,data2,mat2),mat3(2,3,data3,mat3),mat4(2,3,data4,mat4),mat5(2,3,data5,mat5),mat6(3,3,data6,mat6);
   matrix mat10(mat1);
   cout<<"mat10 == mat1 = "<<endl<<mat10<<endl<<endl;
   matrix mat50;
   //mat50=mat2; copy constructor
   cout<<"mat50 == mat2 = "<<endl<<(mat50=mat2)<<endl<<endl; //=operator





  cout<<"mat1 = "<<endl<<mat1<<endl<<endl;
  cout<<"mat2 = "<<endl<<mat2<<endl<<endl;
  cout<<"mat3 = "<<endl<<mat3<<endl<<endl;

  cout<<"20170010\n \n";

  cout<<"mat1+mat3 = "<<endl<<(mat1+mat3)<<endl<<endl;
  cout<<"mat3+mat3 = "<<endl<<(mat3+mat3)<<endl<<endl;
  cout<<"mat1-mat3 = "<<endl<<(mat1-mat3)<<endl<<endl;
  cout<<"mat1*mat2 = "<<endl<<(mat1*mat2)<<endl<<endl;
  cout<<"mat1+5 = "<<endl<<(mat1+5)<<endl<<endl<<endl;
  cout<<"mat1-5 = "<<endl<<(mat1-5)<<endl<<endl<<endl;
  cout<<"mat1*5 = "<<endl<<(mat1*5)<<endl<<endl<<endl;

  cout<<"20170047 \n \n";

  cout<<"mat1+=mat3 = "<<endl<<(mat1+=mat3)<<endl<<endl;
  cout<<"mat1-=mat3 = "<<endl<<(mat1-=mat3)<<endl<<endl;
  cout<<"mat1+=10 = "<<endl<<(mat1+=10)<<endl<<endl;
  cout<<"mat1-=10 = "<<endl<<(mat1-=10)<<endl<<endl;
  ++mat1;
  cout<<"++mat1 = "<<endl<<mat1<<endl<<endl;
  --mat1;
  cout<<"--mat1 = "<<endl<<mat1<<endl<<endl;

  cout<<"20170019 \n \n";

  cout<<"mat1 = "<<endl<<mat1<<endl<<endl;
  cout<<"mat3 = "<<endl<<mat3<<endl<<endl;
  cout<<"mat4 = "<<endl<<mat4<<endl<<endl;
  cout<<"mat5 = "<<endl<<mat5<<endl<<endl;
  cout<<"mat6 = "<<endl<<mat6<<endl<<endl;
  cout<<"Is mat4==mat5 ? = "<<(mat4==mat5)<<endl<<endl;
  cout<<"Is mat1==mat3 ? = "<<(mat1==mat3)<<endl<<endl;
  cout<<"Is mat1!=mat3 ? = "<<(mat1!=mat3)<<endl<<endl;
  cout<<"Is mat4!=mat5 ? = "<<(mat4!=mat5)<<endl<<endl;
  cout<<"Is mat6 Square ? = "<<(mat6.isSquare())<<endl<<endl;
  cout<<"Is mat1 Square ? = "<<(mat1.isSquare())<<endl<<endl;
  cout<<"Is mat6 Symmetric ? = "<<(mat6.isSymetric())<<endl<<endl;
  cout<<"Is mat1 Symmetric ? = "<<(mat1.isSymetric())<<endl<<endl;
  cout<<"Is mat6 Identity ? = "<<(mat6.isidentity())<<endl<<endl;
  cout<<"Is mat1 Identity ? = "<<(mat1.isidentity())<<endl<<endl;
  cout<<"The transpose for mat1 == "<<endl<<mat1.transpose()<<endl<<endl;


    return 0;
}


