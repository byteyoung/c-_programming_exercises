// 这个例子有bug

int main(){
    int array[10];
    int *search(int *a,int num);
    for (int i=0;i<10;i++)
        cin>>array[i];
    int *zeroptr = search(array,10);
    return 0;
}

int *search(int *a,int num){
    for(int i=0;i<num;i++)
        if(a[i]==0)
            return &a[i];
    
}