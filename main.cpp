#include <iostream>
#include <ctime>

using namespace std;

const unsigned int COLUMNS1 = 50; // COLUMNS 1 must == STRINGS2
const unsigned int STRINGS1 = 4;
const unsigned int COLUMNS2 = 4;
const unsigned int STRINGS2 = 50;

// Generating a random number between min and max
double random(double min, double max)
{
    return (double)(rand())/RAND_MAX*(max - min) + min;
}

int main()
{
    srand(unsigned(time(0)));
    float **a, **b, **c;
    system("chcp 1251");
    system("cls");

// Filling elements for matrix a
    a = new float*[STRINGS1];
    for(int i = 0; i < STRINGS1; i++){
        a[i] = new float[COLUMNS1];
        for(int j = 0; j < COLUMNS1; j++){
            a[i][j] = random(-1.235, 157.456);
        }
    }
/*
// Printing the elements of matrix a
    cout << "\nMatrix a:\n\n";
    for(int i = 0; i < STRINGS1; i++){
        for (int j = 0; j < COLUMNS1; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
*/
// Filling elements for matrix b
    b = new float*[STRINGS2];
    for(int i = 0; i < STRINGS2; i++){
        b[i] = new float[COLUMNS2];
        for(int j = 0; j < COLUMNS2; j++){
            b[i][j] = random(-1.235, 157.456) ;
        }
    }
/*
// Printing the elements of matrix a
    cout << "\nMatrix b:\n\n";
    for(int i = 0; i < STRINGS2; i++){
        for (int j = 0; j < COLUMNS2; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
*/
// Multiplication of matrix a and matrix b
  c = new float*[STRINGS1];
  for (int i = 0; i < STRINGS1; i++){
    c[i] = new float[COLUMNS2];
    for(int j = 0; j < COLUMNS2; j++){
      c[i][j] = 0;
      for (int k = 0; k < COLUMNS1; k++)
        c[i][j] += a[i][k] * b[k][j];
    }
  }
/*
// Printing the result matrix
    cout << "\nResult Matrix:\n\n";
    for(int i = 0; i < STRINGS1; i++){
        for(int j = 0; j < COLUMNS2; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
*/
// program execution time
    float runtime = (float)clock()/1000;
    cout << "\nRuntime = " << runtime << "\n\n" << endl;
// program performance
    int n = COLUMNS1 * STRINGS1;
    float performance = 2*((n*n*n)/runtime);
    cout << "Program performance(P) = 2(n)^3/runtime = " << performance << "\n\n" << endl;
    return 0;
}
