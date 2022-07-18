#include <stdio.h>

void sapXepTangDan(int mang[], int length){
    for(int i=0;i< length-1;i++){
        for(int j=1; j<length;j++)
        {
            if(mang[i]<mang[j])
            {
                temp = mang[i];
                mang[i] = mang[j];
                mang[j] = temp;
            }
        }
    }
    for(int i=0; i<length;i++){
        printf("%d  ",mang[i]);
    }  
}

void sapXepGiamDan(int mang[], int length){
    for(int i=0;i< lenght-1;i++){
        for(int j=1; j < lenght;j++)
        {
            if(mang[i]>mang[j])
            {
                temp= mang[i];
                mang[i]=mang[j];
                mang[j]=temp;
            }
        }
    }
    for(int i=0;i< lenght;i++){
        printf("%d  ",mang[i]);
    }  
}

void max(int mang[], int length)
{
    max = mang[0];
    for(int i=0; i<length;i++)
    {
        if(max<mang[i]) max = mang[i];
    }
    printf("\nMax: %d",max);
}

void min(int mang[], int length)
{
    min=mang[0];
    for(int i=0; i<length;i++)
    {
        if(min>mang[i]) min = mang[i];
    }        
    printf("\nMin: %d",min);

}


int main()
{
    int mang[30];
    int temp, max, min, length;
    scanf("%d",&length);
    for(int i=0; i<length;i++)
    {
        printf("Phan tu %d : ",i+1);
        scanf("%d",&mang[i]);
    }
    sapXepTangDan(mang, length);
    sapXepGiamDan(mang, length);
    max(mang, length);
    min(mang, length);
    return 0;
}
