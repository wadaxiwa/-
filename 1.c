#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*�������*/
int main()
{
    int i,n;
char a[52][3],b[52][3];//������ά�ַ�������
    srand((unsigned)time(NULL));
for(i=0;i<13;i++){
    a[i][0]='S';
    a[i][1]=i+1;}
for(i=13;i<26;i++){
    a[i][0]='H';
    a[i][1]=i-12;}
for(i=26;i<39;i++){
    a[i][0]='D';
    a[i][1]=i-25;}
for(i=39;i<52;i++){
    a[i][0]='C';
    a[i][1]=i-38;}
    for(i=0;i<52;i++){//���������
        n=rand()%(52-i);
        b[i][0]=a[n][0];
        b[i][1]=a[n][1];
        for(;n<52;n++){//��b�����Ŵ��ҵ�a����
            a[n][0]=a[n+1][0];
            a[n][1]=a[n+1][1];
            }

    }
    printf("the player 1 brand:");
    for(i=0;i<13;i++){//������
        printf("%c%d\t",b[i][0],b[i][1]);}
    printf("\nthe player 2 brand:");
    for(i=13;i<26;i++){
        printf("%c%d\t",b[i][0],b[i][1]);}
    printf("\nthe player 3 brand:");
    for(i=26;i<39;i++){
        printf("%c%d\t",b[i][0],b[i][1]);}
    printf("\nthe player 4 brand:");
    for(i=39;i<52;i++){
        printf("%c%d\t",b[i][0],b[i][1]);}


    return 0;
}
