#include<stdio.h>
#include<stdlib.h>
#include<time.h>
char meihua()
{
    printf("\n************************************************************************************************************************\n");
}
int main()
{
    int a1/*����ֵ*/,b1,b2/*����ֵ*/,c1,c2/*������*/,e1/*������*/,f1/*�ر���*/;
    int a2/*����ֵ*/,b3,b4/*����ֵ*/,c3,c4/*������*/,e2/*������*/,f2/*�ر���*/;
    int d1/*����*/,d2/*����*/;
    srand((unsigned)time(NULL));

    int i,m,n,p,q,r=1;
    char x,g;
    printf("����������ֵ\n");
    meihua();
    printf("���һ����ֵ:");//Ϊ���һ���Ը�ֵ
    scanf("%d",&a1);
    printf("%����ֵ��a~b��:");
    scanf("%d~%d",&b1,&b2);
    printf("%��������a~b��:");
    scanf("%d~%d",&c1,&c2);
    printf("%���٣�ÿ�����빥��һ�Σ�:");
    scanf("%d",&d1);
    printf("%������:");
    scanf("%d",&e1);
    printf("%�ر���:");
    scanf("%d",&f1);
    getchar();
    printf("�Ƿ����������Y or N��:");
    scanf("%c",&x);
    if(x=='Y'){
    printf("�������������\n1����Ѫ��+10��������\t2���޾���+7������+20�����ʣ�\n");
    scanf("%d",&m);
        printf("��װ����ϣ�\n");
    if(m==1){c1=10; c2+=10;}
    if(m==2){c1+=7;c2+=7;e1+=20;}}
    getchar();
    printf("�Ƿ������ʯ��Y or N��:");
    scanf("%c",&g);
    if(g=='Y'){
        printf("�������������\n1���챦ʯ��+10����ֵ��\t2���̱�ʯ��+5����ֵ��\n");
        scanf("%d",&n);
        printf("��װ����ϣ�\n");
        if(n==1)a1+=10;
        if(n==2){b1+=5;b2+=5;}
    }

    meihua();
    meihua();
    printf("��Ҷ�����ֵ:");//Ϊ��Ҷ����Ը�ֵ
    scanf("%d",&a2);
    printf("%����ֵ��a~b��:");
    scanf("%d~%d",&b3,&b4);
    printf("%��������a~b��:");
    scanf("%d~%d",&c3,&c4);
    printf("%����(ÿ�����빥��һ��):");
    scanf("%d",&d2);
    printf("%������:");
    scanf("%d",&e2);
    printf("%�ر���:");
    scanf("%d",&f2);
    getchar();
    printf("�Ƿ����������Y or N��:");
    scanf("%c",&x);
    if(x=='Y'){
    printf("�������������\n1����Ѫ��+100��������\t2���޾���+70������+20�����ʣ�\n");
    scanf("%d",&m);
        printf("��װ����ϣ�\n");
    if(m==1)c3+=10; c4+=10;
    if(m==2)c3+=7;c4+=10;e2+=20;}
        getchar();
    printf("�Ƿ������ʯ��Y or N��:");
    scanf("%c",&g);
    if(g=='Y'){
        printf("�������������\n1���챦ʯ��+10����ֵ��\t2���̱�ʯ��+5����ֵ��\n");
        scanf("%d",&n);
        printf("��װ����ϣ�\n");
        if(n==1)a2+=10;
        if(n==2){b3+=5;b4+=5;}
    }
    meihua();

    for(i=1;;i++){//ģ���ս����
        if(i%d1==0){
        meihua();
        printf("round %d\n",r);
        r=r+1;
        printf("���һ����\n");
        m=rand()%100+1;
        n=rand()%100+1;
        p=rand()%(c2-c1+1)+c1;
        q=rand()%(b4-b3+1)+b3;
        if(n<f2)
            {printf("���ܣ���\n");
            printf("��Ҷ�����ֵ%d,��Ѫֵ0\n",a2);}
        else if(m<e1)
            {printf("��������\n");
            printf("��Ҷ�����ֵ%d,��Ѫֵ%d\n",a2-2*p+q,2*p-q);
            a2=a2-2*p+q;}
        else
            {printf("��Ҷ�����ֵ%d,��Ѫֵ%d\n",a2-p+q,p-q);
            a2=a2-p+q;}
        meihua();
            }


        if(i%d2==0){
        meihua();
        printf("round %d\n",r);
        r=r+1;
        printf("��Ҷ�����\n");
        m=rand()%100+1;
        n=rand()%100+1;
        p=rand()%(c4-c3+1)+c3;
        q=rand()%(b2-b1+1)+b1;
        if(n<f2)
            {printf("���ܣ���\n");
            printf("���һ����ֵ%d,��Ѫֵ0\n",a1);}
        else if(m<e1)
            {printf("��������\n");
            printf("���һ����ֵ%d,��Ѫֵ%d\n",a1-2*p+q,2*p-q);
            a1=a1-2*p+q;}
        else
            {printf("���һ����ֵ%d,��Ѫֵ%d\n",a1-p+q,p-q);
            a1=a1-p+q;}
        meihua();
    }



    if(a1<0){//�����ս���
        printf("��Ϸ����:��Ҷ�ʤ��\n����%d��",r);
        meihua();
        break;
        }
    if(a2<0){
        printf("��Ϸ����:���һʤ��\n����%d��",r);
        meihua();
        break;
    }

}
    return 0;
}

