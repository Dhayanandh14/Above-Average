import java.util.*;
class AboveAverage{
  public static void main(String[] args) {
    Scanner kbd = new Scanner(System.in);
    int c=kbd.nextInt();
    int s,tot=0,avg;
    double count=0;
   
    for(int i=0;i<c;i++){
      int n=kbd.nextInt();
       int arr[]=new int[n];
      for(int j=0;j<n;j++){
          arr[j]=kbd.nextInt();  
      }
      tot=0;
      for(int k=0;k<arr.length;k++){
          tot = tot+arr[k];
      }
      avg = tot/n;
      count=0;
      for(int m=0;m<arr.length;m++){
        if(arr[m]>avg){
            count = count+1;
          }
      }
      double per = (100*count)/n;  
      System.out.format("%.3f%%", per);
      System.out.println();
    }
  }
}