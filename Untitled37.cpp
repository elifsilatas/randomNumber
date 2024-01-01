#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main()
{
	//Random Number Generator
	int rg;//rastgele=rg
	srand (time(NULL));//seed
	rg=rand()%6+1;//1 ile 6 arasında bir sayı döndürür.Örneğin, zar..
	//6 da dahil olsun diye +1 yaptık.
	cout << rg << endl;
	rg=rand()%2;//0 veya 1 gelir, 0 -> tura, 1 -> yazı
	
	if(rg==0)
		cout << rg << " => tura" << endl;
	else
		cout << rg << " => yazi" << endl;
	
	rg=rand()%100;//0 ile 100 arasında bir sayı getirir.
	cout << rg << endl;
}