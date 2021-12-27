
int ede(int x){
if ( x<=0)return 0;
if(x%2==0)return ede(x/10)*10 + x%10 +1;
return ede(x/10)*10 +x%10;
}
