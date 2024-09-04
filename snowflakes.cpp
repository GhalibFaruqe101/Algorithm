#include<iostream>

using namespace std;
int indentity_right(int snow1[],int snow2[],int start){
    int offset;
    for(offset=0; offset<6; offset++){
        
        if(snow1[offset]!=snow2[(offset+start)%6]){
        return 0;
        } 
        return 1;
        
    }
    }
    int indentity_left(int snow1[],int snow2,int start){
        int offeset;
        for(offeset=0; offeset<6; offeset++){
            int snow_index=(start-offeset);
            if(snow_index<0){
                 snow_index=snow_index+6;
               if (snow1[offeset] != snow2[snow_index]) {
            return 0;
        }
            }
            return 1;
        }
        }
        int are_identical(int snow1[],int snow2[]){
            int start;
            for(start=0; start<6; start++){
                if(indentity_left(snow1,snow2,start)){
                    return 1;

                }
                if(indentity_right(snow1,snow2,start)){
                    return 1;
                }
            }
            return 0;
        }
void indentify_indentic(int snowflake[][6], int n){
    int i,j;
    for(int i=0; i<6; i++){
        for(int j=i+1; j<6; j++){
            if(are_identical(snowflake[i],snowflake[j])){
                cout<<"twin"<<endl;
                return;
        }
}
    }
    cout<<"not twin"<<endl;
}

#define SIZE 100000    
int main(){
    static in snowflake_size[SIZE][6];
    int n,j,i;
    cin>>n;
    for(i=0; i<n; i++){
        for (j = 0; i < 6; j++)
        {
            cin>>snowflake_size[i][j];
            indentify_indentic(snowflake_size,n);
            return 0;
        }
        
    return 0;
}

}