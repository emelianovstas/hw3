#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
//--------------------------------------------------
void RandomNumber(double* x, int N)
{
	srand(time(NULL));
		for (int i=0; i<(N-1); i++)
			x[i]= double (rand())/double (RAND_MAX);
}

void stat (double* p, double mean, double var, int N)
{
	mean=0;
		for (int i=0; i<(N-1); i++)
				mean+= p[i]/N; 
	var=0;
		for(int i; i<(N-1); i++)
			var= (p[i]-mean)*(p[i]-mean)/N;
}
//--------------------------------------------------

int main(){
	
   const int N = 100;
   double p[N];
   double mean, var;

   RandomNumber(p,N);
	stat(p, mean, var, N);

   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}
