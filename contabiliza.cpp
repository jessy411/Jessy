#include<iostream>
using namespace std;

int main()
{
	int JLCM_i=0,JLCM_l;
	float JLCM_x,JLCM_s=0;
	cout<<"ingrese el limite JLCM_l="; cin>>JLCM_l;
	do{
		
	cout<<"ingrese el numero JLCM_x="; cin>>JLCM_x;
	JLCM_i=JLCM_i+1;
	JLCM_s=JLCM_s+JLCM_x;



	}while(JLCM_i<JLCM_l);
	cout<<"Se ingresaron "<<JLCM_l<<" numeros "<< "que sumaron "<<JLCM_s<<endl;
	return 0;



}
