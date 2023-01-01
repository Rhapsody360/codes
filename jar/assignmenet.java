// // question 1 answer:

// import java.util.Scanner;
// public class assignmenet{
//     public static void main(String[] args){
//         Scanner ip = new Scanner(System.in);
//         int n,m;
//         System.out.println("enter n");
//         n=ip.nextInt();
//         System.out.println("enter m");
//         m=ip.nextInt();
//         int matrix[][]=new int[m][n];
//         int smallest=matrix[0][0],average,sum=0;
//         int i,j;
//         System.out.println("now enter the matrix\n");
//         for (i=0;i<n;i++){            
//             for (j=0;j<n;j++){
//                 smallest=matrix[i][0];
//                 matrix[i][j]=ip.nextInt();
//                 sum+=matrix[i][j];
//                 if (matrix[i][j]<smallest){
//                     smallest=matrix[i][j];
//                 }
//             }
//             System.out.println("the smallest of this row is "+smallest);
//         }
//         sum=0;
//         for (i=0;i<n;i++){
//             for (j=0;j<n;j++){
//                 sum+=matrix[j][i];
//             }
//             average=sum/n;
//             System.out.println("the average of column is "+average);
//             sum=0;
//         }        
//     }
// }

// // question 2 answer:

// import java.util.Scanner;
// class assignmenet{
//     public static void main(String args[]){
//         int row, col,i,j,temp,n;
//         Scanner in = new Scanner(System.in);
//         System.out.println("Enter the number of rows");
//         row = in.nextInt();
//         System.out.println("Enter the number  columns");
//         col  = in.nextInt();
//         if(row >col)
//         n=row;
//         else
//         n= col;
//         int mat1[][] = new int[n][n];
//         System.out.println("Enter the elements of matrix");
//         for (  i= 0 ; i < row ; i++ ){
//             for ( j= 0 ; j < col ;j++ )
//                 mat1[i][j] = in.nextInt();
//         }
//         System.out.println("Transpose  of   matrix:-");
//         for (  i= 0 ; i < col ; i++ ){  
//             for ( j= 0 ; j < row;j++ )
//             System.out.print(mat1[i][j]+" ");
//             System.out.println();
//         }    
//     } 
// }

// // question 3 answer:

// import java.util.Scanner;
// public class assignmenet{
//     public static void main(String[] args){
//         Scanner ip = new Scanner(System.in);
//         int n,i;
//         System.out.println("enter array length: ");
//         n=ip.nextInt();
//         int numbers[]=new int[n];
//         System.out.println("enter array elements :");
//         for (i=0;i<n;i++){
//             numbers[i]=ip.nextInt();
//         }
//         for (i=0;i<n;i++){
//             if (isprime(numbers[i])==true){
//                 System.out.println(numbers[i]+" a prime number!");
//             }
//         }
//     }
//     public static boolean isprime(int integer){
//         int i;
//         for (i=2;i<integer;i++){
//             if ((integer%i)==0){//its divisible by a number out of 1 and itself
//                 //its not a prime
//                 return false;
//             }
//         }
//         return true;
//     }
// }


// // question 4 answer

// public class assignmenet{
//     public static void main(String[] args){     
//         String string = "Hardships often prepare ordinary people for an extraordinary destiny";    
//         String word = "", small = "", large="";    
//         String[] words = new String[100];    
//         int length = 0;   
//         string = string + " ";
//         for(int i = 0; i < string.length(); i++){   
//             if(string.charAt(i) != ' '){    
//                 word = word + string.charAt(i);    
//             }    
//             else{   
//                 words[length] = word;  
//                 length++;    
//                 word = "";    
//             }    
//         } 
//         small = large = words[0];  
//         for(int k = 0; k < length; k++){
//             if(small.length() > words[k].length())    
//                 small = words[k];    
//             if(large.length() < words[k].length())    
//                 large = words[k];    
//         }    
//         System.out.println("Smallest word: " + small);    
//         System.out.println("Largest word: " + large);    
//     }  
// } 


// //question 5 answer

// import java.util.Scanner;
// public class assignmenet{
//     public static void main(String[] args){
//         Scanner ip = new Scanner(System.in);
//         System.out.println("how many lines ?: ");
//         int n=ip.nextInt();
//         int p=1,i,j;
//         for (i=0;i<n;i++){
//             for (j=0;j<i;j++,p++){
//                 System.out.print(p + " ");
//             }
//             System.out.print("\n");
//         }
//     }
// }