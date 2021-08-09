#include<iostream>

using namespace std;

class Matrix3D{
    public :
    double a[3][3];

 //  Matrix3D();
  ~ Matrix3D(){}
  //  double det();
   // Matrix3D inverse();

Matrix3D (double a1,double a2,double a3,double a4,double a5,double a6,double a7,double a8,double a9)
{
    a[0][0]=a1;
    a[0][1]=a2;
    a[0][2]=a3;
    a[1][0]=a4;
    a[1][1]=a5;
    a[1][2]=a6;
    a[2][0]=a7;
    a[2][1]=a8;
    a[2][2]=a9;
}
Matrix3D ()
{
    a[0][0]=0;
    a[0][1]=0;
    a[0][2]=0;
    a[1][0]=0;
    a[1][1]=0;
    a[1][2]=0;
    a[2][0]=0;
    a[2][1]=0;
    a[2][2]=0;
}

double det()
{
    double temp;
    temp = a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2])-a[0][1]*(a[0][1]*a[2][2]-a[0][2]*a[2][1])+a[0][2]*(a[2][1]*a[1][0]-a[2][0]*a[1][1]);
    return temp;
}

Matrix3D inverse()
{
    int i,j;
    Matrix3D temp;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            temp.a[i][j]=(((a[(j+1)%3][(i+1)%3] * a[(j+2)%3][(i+2)%3]) - (a[(j+1)%3][(i+2)%3] * a[(j+2)%3][(i+1)%3]))/ det());
    }
    return temp;
}

 Matrix3D operator+(Matrix3D m2)
 {
     Matrix3D temp;
     int i, j;

     for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            temp.a[i][j]=(a[i][j]+m2.a[i][j]);
    }
    return temp;
 }

 Matrix3D operator-(Matrix3D m2)
 {
     Matrix3D temp;
     int i, j;

     for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            temp.a[i][j]=(a[i][j]-m2.a[i][j]);
    }
    return temp;
 }

 Matrix3D operator*(Matrix3D m2)
 {
     Matrix3D temp;
     double sum = 0;
     int i, j, k;

     for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            for(k = 0; k < 3; k++){
                sum+=(a[i][k]*m2.a[k][j]);
            }
            temp.a[i][j]=sum;
        }
    }
    return temp;
 }
};
int main()
{
    int i,j;
    Matrix3D M(5,4,2,3,8,4,2,4,7);
    Matrix3D M1(6,4,2,3,8,7,2,4,5);
    Matrix3D M2(3,9,4,3,5,6,2,1,7);
    Matrix3D M3;
    cout <<"determinant of M is "<<M.det() << endl;

    M = M.inverse();
    cout <<"\ninverse of M is " << endl;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            cout <<M.a[i][j]<<" ";
        cout<<"\n\n";
    }


    cout <<"M1+M2 is " << endl;
    M3 =M1 + M2;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            cout <<M3.a[i][j]<<" ";
        cout<<"\n\n";
    }


    cout <<"M1-M2 is " << endl;
    M3 =M1 - M2;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            cout <<M3.a[i][j]<<" ";
        cout<<"\n\n";
    }


    cout <<"M1*M2 is " << endl;
    M3 =M1 * M2;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            cout <<M3.a[i][j]<<" ";
        cout<<"\n\n";
    }
    return 0;
}
