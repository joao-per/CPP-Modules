#include<bits/stdc++.h> 
using namespace std; 
  
int main () 
{ 
    float a; 
    clock_t time_req; 
  
    // Without using pow function 
	std::cout << "Without using pow function" << std::endl;
    time_req = clock(); 
	std::cout << "time_req: " << time_req << std::endl;
    for(int i=0; i<200000; i++) 
    { 
        a = log(i*i*i*i); 
    } 
    time_req = clock()- time_req; 
    cout << "Processor time taken for multiplication: "
        << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl; 
  
    // Using pow function 
    time_req = clock(); 
    for(int i=0; i<200000; i++) 
    { 
        a = log(pow(i, 4)); 
    } 
    time_req = clock() - time_req; 
    cout << "Processor time taken in pow function: "
        << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl; 
  
    return 0; 
} 