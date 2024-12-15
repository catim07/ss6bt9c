#include<stdio.h>
#include<math.h>
int main(){
	int don,chuc,tram,i,armStrong;
	for(i=1;i<1000;i++){
		don=i%10;
		chuc=(i/10)%10;
		tram=i/100;
		armStrong=pow(don,3)+pow(chuc,3)+pow(tram,3);
		if(armStrong==i){
			printf("armstrong la: %d\n",i);
		}
	}
	return 0;
}
