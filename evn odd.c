#include <stdio.h>
#include <stdlib.h>
int last_range; //itare globally declare korlam naile function o bar bar pass kora laglo ne

//2 ,1,4,3,6 ekta jinish dekh 2 er porer odd ita 2 thaki koto kom 1 kom .
//ar 1 porer even 1 thaki koto beshi 3 beshi
//otai main jinish kamo lagaisi
void print(int num, int x)  //poyla num asil 2 ar x asil 1 ..kita koislm x==1 oile even ar x==0 oile odd
{
    if (num > last_range) //ita oilo base condition num jodi boro oijay last range thaki tail sesh return koridimu
    {
        return;
    }
    if (x == 1) // x==1 oile jeta ase ota pprint koridimu even ota
    {
        printf("%d ", num); //print korlam even
        print(num - 1, 0); //ekehn even er pore odd even thaki 1 chuto nani ?? // 2,1,4,3,6,5 dekh even pore joto odd ar sob 1 kom even thaki ou num-1 koira abr function call korsi ar x==0 kora lagbo nani odd print kora lagi ou x=0 pass korsi
    }
    else
    {
        printf("%d ", num); //odd jeta ase print korse
        print(num + 3, 1); //2,1,4,4,6 dekh sob even odd thaki 3 beshi so num+3 korsi ar x=1 pass korsi
    }
}
int main()
{
    printf("Enter the last range:");//last koto porjonto print kortam
    scanf("%d", &last_range); //user e dilo
    print(2,1); //function call korlam 2 pass korlam ar 1 pass korlam karon 2 poyla print kormu ar 1 kne pass korlam 1 oile even print korbo ar 1 na oile odd print korbo
}
