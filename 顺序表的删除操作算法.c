int listDelete(Sqlist &L,int p,int &e)//需要改变的变量用引用型
{
    int i;
    if(p>1||p>L.length)return 0;//位置不对返回0，代表删除不成功
    e=L.data[p];//将被删除元素赋值给e
    for(i=p;i<L.length;++i)//从p位置开始将其后边的元素逐个前移一个位置
    L.data[i]=L.data[i+1];
    --(L.length);      //表长减1
    return 1;//删除成功返回1
}