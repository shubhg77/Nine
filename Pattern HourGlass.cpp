#include<iostream>

using namespace std;

int main() {

    int tr;

    cin>>tr;


    if(tr<=20){

    int rowno=1;


    while(rowno<=tr){
	

        //space

        int i=1;

        while(i<=rowno-1){

            cout<<" "<<" ";

            i++;

        }

 

        //number
int k=1;
int temp =(tr-rowno+1);
	while(k<=tr-(rowno)+1){
		cout<<temp<<" ";
		k=k+1;
		temp=temp-1;
	}
        // int j=1;
		//  int temp=tr;
    
        // while(j<=(tr-rowno)+1){

        //     cout<<temp<<" ";

        //     j++;

        //     temp--;

        
		

		 

        //zero

        cout<<"0"<<" ";

        //number

        int t=1;

        while(t<=(tr-rowno)+1){

            cout<<t<<" ";

            t++;

        }

 

        cout<<endl;

        rowno=rowno+1;
		

 

    }

    //space for 0

    int m=1;

    while(m<=tr){

        cout<<" "<<" ";

        m++;

    }

    //zero

    cout<<"0"<<" ";

    cout<<endl;

 

    //second half

    int rowno1=1;

    while(rowno1<=tr){

        //spcace

        int o=1;

        while(o<=tr-rowno1){

            cout<<" "<<" ";

            o++;

        }

 

        //number

        int w=1;

        int tmep1=rowno1;

        while(w<=rowno1){

            cout<<tmep1<<" ";

            w++;

            tmep1--;

        }

        //zero

        cout<<"0"<<" ";

        //cout<<endl;

 

        //number

        int g=1;

        while(g<=rowno1){

            cout<<g<<" ";

            g++;

        }

        cout<<endl;

        rowno1=rowno1+1;

    }

    }

    else{

        return 0;

    }

    return 0;

}
