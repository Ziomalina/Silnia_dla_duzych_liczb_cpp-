#include<iostream>
using namespace std;
//----------------------------------------------------------------------
void silnia( int n );
//---------------------------------------------------------------------- //Martyna Grabelus
int main()
{
	int d;
	
	do
	{
	cin>>d;	
	}while(d<1 || d>100 );


	int * tab = new int[ d ];
 
	for(int i=0 ; i<d ; i++ )
	{
		do
        {
	     cin>>tab[i];
	    }while( tab[i]<0 || tab[i]>1000 );
		
	}
	
	
	for( int i=0 ; i<d ; i++ )
	{
		
		silnia( tab[i] );
		cout<<endl;
		
	}
	
	
	cout<<endl<<endl;
	delete [] tab;
	system("pause");
	return 0;
}
//-------------------------------------------------------------------------
void silnia( int n )
{
	
	long long silniaa=1;
	
	if(n<=20)
	{
	 
	 for(int k=1; k<=n ; k++ )
	     silniaa=silniaa*k;
	
	      cout<<silniaa;	
		
		
	}
	else
	{
	
	 int a=10000;
	
     unsigned int liczba[ a ];
    

//------------------------------------------
for( int i = 1; i < a; i++ )                 
    liczba[ i ] = 0;


liczba[ 0 ] = 1;

//------------------------------------------

     for(int  j = 1; j <= n; j++ )
       {

                     for( int i = 0; i < a ; i++ )
                        liczba[ i ] = liczba[ i ] * j;

                     //=====================================================  //przesuwanie
					 
					 for(int  i = 0; i < a - 1; i++ )
                        {
                          liczba[ i + 1 ] = liczba[ i + 1 ] + liczba[ i ] / 10;                   
                          liczba[ i ] = liczba[ i ] % 10;                                     
                        }

       }



//-----------------------------------------------------
int czy_liczba=0;

for( int i = a -1 ; i>=0 ; i--)
{


	if(liczba[i]==0 && czy_liczba!=1 )
	{
		
	}
	else
	{
		cout<<liczba[i];
		czy_liczba=1;
		
	}
	
	
}
    

} //koniec elsa

}
















