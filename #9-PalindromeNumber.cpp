class Solution {
public:
    bool isPalindrome(int x) {
         int a,temp;long res=0;
        temp=x;
       while(x>0){
         a=x%10;
        res=(res*10)+a;
         x=x/10;
            }
          if(temp==res){
          return true;
        }
        else{
              return false;}
       
        
    }
   
};
