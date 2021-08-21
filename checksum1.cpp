#include<bits/stdc++.h>
using namespace std;
int sender(int b[10],int k)
 {
 	int checksum,sum=0,i;
    for(i=0;i<k;i++){
      		sum+=b[i];}
      	printf("Sum is : %d\n",sum);
    	checksum=~sum;
    	printf("Sender's checksum is :%d\n",checksum);
    	return checksum;
}

int receiver(int c[10],int k,int scheck)
{
    int checksum,sum=0,i;
     	for(i=0;i<k;i++){
      		sum+=c[i];}
      	printf("The reciever's sum is :%d",sum);
      	sum=sum+scheck;
      	checksum=~sum;
      	printf("\nThe reciever's checksum is :%d",checksum);
      	return checksum;
}
void decToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    // printing binary array in reverse order
	int j;
    for (j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
		if((j+1)%4==0){
			cout<<" ";
		}
}
int main()
{
     	int a[10],i,m,scheck,rcheck;
        printf("\nEnter the size of the OTP: ");
     	scanf("%d",&m);
		int o;
		printf("Enter the OTP : ");
		scanf("%d",&o);
		decToBinary(o);
     	printf("\nEnter the elements of the array as above : \n ");
     	for(i=0;i<m;i++){
    	    scanf("%d",&a[i]);}
    	scheck=sender(a,m);
    	rcheck=receiver(a,m,scheck);
    	if(rcheck==0){
      		printf("\n\nThe OTP is correct. You may proceed to the further transaction\n\n");}
    	else{
      		printf("\n\nInvalid OTP");}
} 	