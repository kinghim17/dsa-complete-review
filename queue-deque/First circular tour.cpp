int firstpetrol(int petrol[],int dist[],int n){
 int start=0,curr_pet=0,prev_pet=0;
 for(ll i=0;i<n;i++){
 curr_pet+=(petrol[i]-dist[i]);
 if(curr_pet<0){
 start=i+1;
 prev_pet+=curr_pet;
 curr_pet=0;
 }
 }
 return ((curr_pet+prev_pet>=0))?(start+1);
}