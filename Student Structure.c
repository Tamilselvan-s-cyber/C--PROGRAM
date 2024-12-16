 #include<stdio.h>
struct details{
    int rn;
    int s1,s2,s3,s4,s5;
    float avg;
    int grade;
};
int main()
{
    int n;
    printf("STUDENT MARKSHEET USING STRUCTURES\n");
    printf("Enter the no of students\n");
    scanf("%d\n",&n);
    struct details e[n];
    for(int i=0;i<n;i++){
        scanf("%d %d %d %d %d %d",&e[i].rn,&e[i].s1,&e[i].s2,&e[i].s3,&e[i].s4,&e[i].s5);
        e[i].avg=(e[i].s1+e[i].s2+e[i].s3+e[i].s4+e[i].s5)/5;
        if(e[i].avg>70)
           e[i].grade=1;
        else if(e[i].avg>50 && e[i].avg<=70)
           e[i].grade=2;
        else
           e[i].grade=3;
    }
    printf("rn  s1  s2  s3  s4  s5  avg  grade\n");
    for(int i=0;i<n;i++){
        printf("%d  %d  %d  %d  %d  %d  %.2f  %d\n",e[i].rn,e[i].s1,e[i].s2,e[i].s3,e[i].s4,e[i].s5,e[i].avg,e[i].grade);
    }

    return 0;
}
