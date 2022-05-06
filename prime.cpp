//Create a method which tests if the number passed in is prime, it has to be efficient ... using i <= num/2 in the for loop will not count 

bool isPrime(int num) {
  // your code here..
  
  //Make sure it is greater than 1
  if(num <=1 ){
    return false;
  }
  
  //use a for loop to iterate over the possible numbers
  for(int i = 2; i * i<= num; i++){
    
    //If the remainder is 0, the number would not be prime  
    if(num%i == 0){
      return false;
    }
    
  }
    
  //return true if we exit the for loop as this means it is prime
  return true;
    
}
