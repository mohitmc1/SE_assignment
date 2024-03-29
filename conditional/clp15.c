/*Write a C program to determine eligibility for admission to a professional 
course based on the following criteria 
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks 
in Chem>=50 and Total in all three subject >=190 or Total in Maths and 
Physics >=140 -------------------------------------- Input the marks obtained in 
Physics :65 Input the marks obtained in Chemistry :51 Input the marks 
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 
188 Total marks of Maths and Physics : 137 The candidate is not eligible. */
#include<stdio.h>
int main(){
	int maths,physics,chem,Tpcm,Tpm;
	Tpcm=physics+chem+maths,Tpm=physics+maths;
	physics=65,chem=51,maths=72;
	if(maths>=65&&physics>=55&&chem>=50&&(Tpcm>=190||Tpm>=140)){
		printf("candidate is eligible\n");
	}else{
		printf("candidate is not eligible\n");
	}
}
