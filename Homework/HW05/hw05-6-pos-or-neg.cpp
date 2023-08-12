/*
    จงรับค่าจากผู้ใชิ และวิเคราะห์ว่าจำนวนดังกล่าวเป็นจำนวนเต็มบวก หรือจำนวนเต็มลบ
    
    Test case:
        Input :
            49

    Output:
        Positive

    Test case:
        Input :
            -90

    Output:
        Negative

*/


#include<stdio.h>

int main(){

    int ip;

    printf("Input :\n");
    scanf("%d" , &ip);

    if (ip <= -1)
    {
       printf("Negative");
    }
    else if (ip == 0)
    {
        printf("Zero");
    }
    else{
        printf("Positive");
    }
    

    return 0;
}