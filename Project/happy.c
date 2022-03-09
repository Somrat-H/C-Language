oid happyarr(){

    int i,num;

    for(i=0;i<size;i++)
    {
    num=a[i];
    happy(num,i,0);
    }

}


void happy(int num,int index,int ix)
{
    int rem, sum = 0;//81


    while (num != 0 )
    {
        rem = num % 10; //2
        sum = sum + (rem*rem);//0+81=81
        num = num/10;//12

    }


    checkhappy(sum,index,ix, num);

}

void checkhappy(int sum,int index,int ix, int num)
{
    

   // arry = malloc(sizeof(int) * 100);

    int j,flag=0;

    arry[ix] = sum;
    ++ix;

    if(sum == 1)
    {

        flag=1;
        a[index] = a[index]*(-1) ;
    }
    else
    {

        for(j=0; j<ix-1; j++)
        {
            if(arry[j]==sum)
            {
                flag=1;
                break;
            }
        }


    }

    if(flag==0)
    {
        happy(sum,index,ix);
    }

   
}
