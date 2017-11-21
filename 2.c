#include<stdio.h>
#include<stdlib.h>
#include<time.h>
char meihua()
{
    printf("\n************************************************************************************************************************\n");
}
int main()
{
    int a1/*生命值*/,b1,b2/*护甲值*/,c1,c2/*攻击力*/,e1/*暴击率*/,f1/*回避率*/;
    int a2/*生命值*/,b3,b4/*护甲值*/,c3,c4/*攻击力*/,e2/*暴击率*/,f2/*回避率*/;
    int d1/*攻速*/,d2/*攻速*/;
    srand((unsigned)time(NULL));

    int i,m,n,p,q,r=1;
    char x,g;
    printf("请输入属性值\n");
    meihua();
    printf("玩家一生命值:");//为玩家一属性赋值
    scanf("%d",&a1);
    printf("%护甲值（a~b）:");
    scanf("%d~%d",&b1,&b2);
    printf("%攻击力（a~b）:");
    scanf("%d~%d",&c1,&c2);
    printf("%攻速（每多少秒攻击一次）:");
    scanf("%d",&d1);
    printf("%暴击率:");
    scanf("%d",&e1);
    printf("%回避率:");
    scanf("%d",&f1);
    getchar();
    printf("是否佩戴武器（Y or N）:");
    scanf("%c",&x);
    if(x=='Y'){
    printf("请输入武器编号\n1、饮血（+10攻击力）\t2、无尽（+7攻击力+20暴击率）\n");
    scanf("%d",&m);
        printf("（装备完毕）\n");
    if(m==1){c1=10; c2+=10;}
    if(m==2){c1+=7;c2+=7;e1+=20;}}
    getchar();
    printf("是否佩戴宝石（Y or N）:");
    scanf("%c",&g);
    if(g=='Y'){
        printf("请输入武器标号\n1、红宝石（+10生命值）\t2、绿宝石（+5护甲值）\n");
        scanf("%d",&n);
        printf("（装备完毕）\n");
        if(n==1)a1+=10;
        if(n==2){b1+=5;b2+=5;}
    }

    meihua();
    meihua();
    printf("玩家二生命值:");//为玩家二属性赋值
    scanf("%d",&a2);
    printf("%护甲值（a~b）:");
    scanf("%d~%d",&b3,&b4);
    printf("%攻击力（a~b）:");
    scanf("%d~%d",&c3,&c4);
    printf("%攻速(每多少秒攻击一次):");
    scanf("%d",&d2);
    printf("%暴击率:");
    scanf("%d",&e2);
    printf("%回避率:");
    scanf("%d",&f2);
    getchar();
    printf("是否佩戴武器（Y or N）:");
    scanf("%c",&x);
    if(x=='Y'){
    printf("请输入武器编号\n1、饮血（+100攻击力）\t2、无尽（+70攻击力+20暴击率）\n");
    scanf("%d",&m);
        printf("（装备完毕）\n");
    if(m==1)c3+=10; c4+=10;
    if(m==2)c3+=7;c4+=10;e2+=20;}
        getchar();
    printf("是否佩戴宝石（Y or N）:");
    scanf("%c",&g);
    if(g=='Y'){
        printf("请输入武器标号\n1、红宝石（+10生命值）\t2、绿宝石（+5护甲值）\n");
        scanf("%d",&n);
        printf("（装备完毕）\n");
        if(n==1)a2+=10;
        if(n==2){b3+=5;b4+=5;}
    }
    meihua();

    for(i=1;;i++){//模拟对战过程
        if(i%d1==0){
        meihua();
        printf("round %d\n",r);
        r=r+1;
        printf("玩家一攻击\n");
        m=rand()%100+1;
        n=rand()%100+1;
        p=rand()%(c2-c1+1)+c1;
        q=rand()%(b4-b3+1)+b3;
        if(n<f2)
            {printf("闪避！！\n");
            printf("玩家二生命值%d,掉血值0\n",a2);}
        else if(m<e1)
            {printf("暴击！！\n");
            printf("玩家二生命值%d,掉血值%d\n",a2-2*p+q,2*p-q);
            a2=a2-2*p+q;}
        else
            {printf("玩家二生命值%d,掉血值%d\n",a2-p+q,p-q);
            a2=a2-p+q;}
        meihua();
            }


        if(i%d2==0){
        meihua();
        printf("round %d\n",r);
        r=r+1;
        printf("玩家二攻击\n");
        m=rand()%100+1;
        n=rand()%100+1;
        p=rand()%(c4-c3+1)+c3;
        q=rand()%(b2-b1+1)+b1;
        if(n<f2)
            {printf("闪避！！\n");
            printf("玩家一生命值%d,掉血值0\n",a1);}
        else if(m<e1)
            {printf("暴击！！\n");
            printf("玩家一生命值%d,掉血值%d\n",a1-2*p+q,2*p-q);
            a1=a1-2*p+q;}
        else
            {printf("玩家一生命值%d,掉血值%d\n",a1-p+q,p-q);
            a1=a1-p+q;}
        meihua();
    }



    if(a1<0){//输出对战结果
        printf("游戏结束:玩家二胜出\n经过%d轮",r);
        meihua();
        break;
        }
    if(a2<0){
        printf("游戏结束:玩家一胜出\n经过%d轮",r);
        meihua();
        break;
    }

}
    return 0;
}

