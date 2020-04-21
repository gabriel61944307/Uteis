#include <iostream>

using namespace std;

int main(){
  int a = -5, b = 2;
  if(a % b == 0){
		printf("|( |a| % b) - b| = 0\n");
  }
  else{
	  printf("|( |a| % b) - b| = %d\n", (((a * -1) % b) - b) * -1);
  }
  
  return 0;
}
