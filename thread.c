#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
int data[1000];
int chunk_size=100;

void *Add(void *arg)
{

    int start= (int)arg;
    int end=start+chunk_size;
    int sum =0;
    int i=0;
    for(i=0;i<end;i++){
        sum =sum+data[i];
    }
    return ((void*)sum);

}
int main(){
    int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
    pthread_t t1,t2,t3,t4,t5,t6,t7,t8,t9,t10;
    int i;
    for(i=0;i<1000;i++){
        data[i]=i;

    }


    pthread_create(&t1,NULL,Add,(void*)(1*chunk_size));
    pthread_create(&t2,NULL,Add,(void*)(2*chunk_size));
    pthread_create(&t3,NULL,Add,(void*)(3*chunk_size));
    pthread_create(&t4,NULL,Add,(void*)(4*chunk_size));
    pthread_create(&t5,NULL,Add,(void*)(5*chunk_size));
    pthread_create(&t6,NULL,Add,(void*)(6*chunk_size));
    pthread_create(&t7,NULL,Add,(void*)(7*chunk_size));
    pthread_create(&t8,NULL,Add,(void*)(8*chunk_size));
    pthread_create(&t9,NULL,Add,(void*)(9*chunk_size));
    pthread_create(&t10,NULL,Add,(void*)(10*chunk_size));

    pthread_join(t1,(void**)&s1);
    pthread_join(t2,(void**)&s2);
    pthread_join(t2,(void**)&s3);
    pthread_join(t2,(void**)&s4);
    pthread_join(t2,(void**)&s5);
    pthread_join(t2,(void**)&s6);
    pthread_join(t2,(void**)&s7);
    pthread_join(t2,(void**)&s8);
    pthread_join(t2,(void**)&s9);
    pthread_join(t2,(void**)&s10);
    int s=0;
s=s1+s2+s3+s4+s5+s6+s7+s8+s9+s10;
    printf("%d",s);


    return 0;



}






