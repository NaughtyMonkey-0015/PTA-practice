#include<stdio.h>
int t(int time,int dtime);
int main(){
    int time,dtime;
    scanf("%d %d",&time,&dtime);
  
    printf("%d\n",t(time,dtime));

    return 0;
}
int t(int time,int dtime){
	int ltime;
	if(time%100+dtime>=60){
        ltime = ((time/100)+(time%100+dtime)/60)*100+((time%100+dtime)%60);
    }else if(time%100+dtime<0){
        ltime = ((time/100)+(time%100+dtime)/60-1)*100+(60+((time%100+dtime)%60));
	}
	else{
        ltime = (time/100)*100 + time%100+dtime;
    }
    return ltime;
}
