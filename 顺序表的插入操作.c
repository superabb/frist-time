int insert(Sqlist &L,int p,int e)
{
    int i;
    if(p<1||p>L.length+1||L.length==maxSize-1)//未知错误或者表长已经达到顺序表的最大允许值，此时插入不成功，
       return 0; //返回0
    for(i=L.length;i>=p;--i)
       L.data[i+1]=L.data[i];//从后往前逐个将元素往后移动一个位置
    L.data[p]=e;//将e放在插入位置p上
    ++(L.length);//表内元素多了一个，因此表长自增1
    return 1;   //插入成功返回1
    
}