void swap_max(int arr[],int l,int pos) {
int max=arr[pos]; int n=pos; int c;
for(int i=pos;i<l;i++) {
   if (max<arr[i]){
       max=arr[i];
       n=i;}
       }
 c=arr[n];
 arr[n]=arr[pos];       
 arr[pos]=c; }
 void ssort(int arr[],int len) {
 for(int i=0;i<len-1;i++) {
   swap_max(arr,len,i); }
   }
