    #include <iostream>
    using namespace std;
     
    int main() {
    	int n;
    	cin>>n;
    	if(n>0)
    		cout<<"NUMBER IS POSITIVE";
    	else
    	{
    		if(n<0)
    			cout<<"NUMBER IS NEGATIVE";
    		else
    			cout<<"NUMBER IS ZERO";
    	}
    	return 0;
    }
