void deletfront(){
 if(isempty()){
 return;
 }
 front=(front+1)%cap;
 size--;
}
void insertrear(){
 if(inempty()){
 return;
 }
 int new_rear=(front+size)%cap;
 arr[new_rear]=n;
 size++;
}
void insertfront(int n){
 if(isfull()){
 return;
 }
 front=(front+cap-1)%cap;
 arr[front]=x;
 size++;
}
void deleterear(){
 if(isempty()){
 return;
 }
 size--;
}