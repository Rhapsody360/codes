// SIMPLE CALCULATOR

// import java.util.Scanner;
// class labprograms {
//     public static void main(String[] args){
//         Scanner ip= new Scanner(System.in);
//         int a,b;
//         char op;
//         System.out.println("enter the 2 numbers");
//         a = ip.nextInt();
//         b = ip.nextInt();
//         System.out.println("now enter the operation of choice (+,-,*,/)");
//         op=ip.next().charAt(0);
//         float answer;
//         ip.close();
//         switch (op){
//             case '+': answer = a+b; break;
//             case '-': answer = a-b; break;
//             case '*': answer = a*b; break;
//             case '/': answer = a/b; break;
//             default: System.out.println("wrong input"); return;
//         }
//         System.out.println(a+""+op+""+b+"="+answer);
//     }
// }



// CONSONANT VOWEL COUNTER 

// class labprograms{
//     public static void main(String[] args){
//         String str="a very simple af string";
//         int c=0,v=0,i,n=str.length();
//         for (i=0;i<n;i++){
//             if (str.charAt(i)=='a' || str.charAt(i)=='e' || str.charAt(i)=='i' || str.charAt(i)=='o' || str.charAt(i)=='u'){
//                 c=c+1;
//             }
//             else if (str.charAt(i)>='a' && str.charAt(i)<='z'){
//                 v=v+1;
//             }
//         }
//         System.out.println("the given string has "+c+" consonants and "+v+" vowels");
//     }
// }



// //PROGRAM 3a copy array

// class labprograms{
//     public static void main(String[] args){
//         int a[]={1,2,3,4,5,6,7,8,9,10},b[]={0,0,0,0,0,0,0,0,0,0},i;
//         for (i=0;i<10;i++){
//             b[i]=a[i];
//             System.out.print(b[i]+" ");
//         }
//     }
// }




// //PROGRAM 3B REMOVE DUPLICATES

// import java.util.Scanner;
// class labprograms{
// 	public static void main(String[] args) {
// 		int A[]=new int[10];
// 		int B[]=new int [10];
// 		int n, i, j, k = 0;
// 		Scanner s=new Scanner(System.in);
// 		System.out.println("Enter size of array : ");
// 		n=s.nextInt();
// 		System.out.println( "Enter elements of array : ");
// 		for (i = 0; i < n; i++)
// 			A[i]=s.nextInt(); 
// 		for (i = 0; i < n; i++){
// 			for (j = 0; j < k; j++){
// 				if (A[i] == B[j])
// 					break;
// 			}
// 			if (j == k){
// 				B[k] = A[i];
// 				k++;
// 			}
// 		}
// 		System.out.println( " elements after deletion : ");
// 		for (i = 0; i < k; i++){
// 			A[i]=B[i];
// 		System.out.println( A[i] );
// 		}
// 	}
// }



// //PROGRAM 4 Student Database

// class labprograms{
// 	String SRN;
// 	String name;
// 	static String collegeName; //static variable
// 	public static void main(String[] args){
// //create 3 object which will share collegeName value
// 		labprograms s1= new labprograms();
// 		labprograms s2= new labprograms();
// 		labprograms s3= new labprograms();
// //assign value to static variable collegeName
// 		labprograms.collegeName="REVA UNIVERSITY";
// //assign values to instance variables
// 		s1.SRN="R18CS001";
// 		s1.name="stud1";
// 		s2.SRN="R18CS002";
// 		s2.name="stud2";
// 		s3.SRN="R18CS003";
// 		s3.name="stud3";
// //Print the values of the objects
// 		System.out.println("S1 SRN.= "+s1.SRN+" S1 Name= "+s1.name+" S1 College Name="+s1.collegeName );
// 		System.out.println("S2 SRN.= "+s2.SRN+" S2 Name= "+s2.name+" S2 College Name="+s2.collegeName );
// 		System.out.println("S3 SRN.= "+s3.SRN+" S3 Name= "+s3.name+" S3 College Name="+s3.collegeName );
// //if one object change the value of static variable then it will reflect into all objects
// 		s2.collegeName="REVA";
// 		s2.name="JAMES";
// //Print the values of the objects after change
// 		System.out.println("S1 SRN.= "+s1.SRN+" S1 Name= "+s1.name+" S1 College Name="+s1.collegeName );
// 		System.out.println("S2 SRN.= "+s2.SRN+" S2 Name= "+s2.name+" S2 College Name="+s2.collegeName );
// 		System.out.println("S3 SRN.= "+s3.SRN+" S3 Name= "+s3.name+" S3 College Name="+s3.collegeName );
// 	}
// }




// //program5 volume of box

// class Box{
// 	double width;
// 	double height;
// 	double depth;
// 	// This is the constructor for Box.
// 	Box(double w, double h, double d){
// 		width = w;
// 		height = h;
// 		depth = d;
// 	}
// 	// compute and return volume
// 	double volume(){
// 		return width * height * depth;
// 	}
// }
// class labprograms{
// 	public static void main(String args[]){
// 		// declare, allocate, and initialize Box objects
// 		Box mybox1 = new Box(10, 20, 15);
// 		Box mybox2 = new Box(3, 6, 9);
// 		double vol;
// 		// get volume of first box
// 		vol = mybox1.volume();
// 		System.out.println("Volume is " + vol);
// 		// get volume of second box
// 		vol = mybox2.volume();
// 		System.out.println("Volume is " + vol);
// 	}
// }




// //program 6 multilevel inheritance

// class labprograms extends child{
//     public static void main(String[] args){
//         System.out.println("filename class, main function executing \nnow calling print function from extended class");
//         print();
//     }
// }

// class child{
//     public static void print(){
//         System.out.println("extended class executing");
//     }
// }



// //program 7 

// interface Car{
// 	int speed=60;
// 	public void distanceTravelled();
// }
// interface Bus{
// 	int distance=100;
// 	public void speed();
// }
// public class labprograms implements Car,Bus{
// 	int distanceTravelled;
// 	int averageSpeed;
// 	public void distanceTravelled(){
// 		distanceTravelled=speed*distance;
// 		System.out.println("Total Distance Travelled is : "+distanceTravelled);
// 	}
// 	public void speed(){
// 		int averageSpeed=distanceTravelled/speed;
// 		System.out.println("Average Speed maintained is : "+averageSpeed);
// 	}
// 	public static void main(String args[]){
// 		labprograms v1=new labprograms();
// 		v1.distanceTravelled();
// 		v1.speed();
// 	}
// }




// //exception handeling

// class labprograms{ 
// 	public static void main(String args[]){ 
// 	try{ 
// 		try{ 
// 			System.out.println("going to divide"); 
// 			int b =39/0; 
// 		}
// 		catch(ArithmeticException e){
// 			System.out.println(e);
// 		} 
// 		try{ 
// 			int a[]=new int[5]; 
// 			a[5]=4; 
// 		}
// 		catch(ArrayIndexOutOfBoundsException e){
// 			System.out.println(e);
// 		} 
// 		System.out.println("other statement"); 
// 		}
// 		catch(Exception e){System.out.println("handeled");} 
// 		System.out.println("normal flow.."); 
// 	} 
// } 




// //custom exception

// class InvalidAgeException extends Exception{ 
// 	InvalidAgeException(String s){ 
// 		super(s); 
// 	} 
// } 
// class labprograms{ 
// 	static void validate(int age)throws InvalidAgeException{ 
// 		if(age<18) 
// 			throw new InvalidAgeException("not valid"); 
// 		else 
// 			System.out.println("welcome to vote"); 
// 	} 
// 	public static void main(String args[]){ 
// 		try{ 
// 			validate(13); 
// 		}
// 		catch(Exception m)
// 			{System.out.println("Exception occured: "+m);
// 		} 
// 		System.out.println("rest of the code..."); 
// 	} 
// }





// //generic class

// class Gen<T> {
// 	T ob;
// 	Gen(T o) {
// 		ob = o;
// 	}
// 	T getob() {
// 		return ob;
// 	}
// 	void showType() {
// 		System.out.println("Type of T is " +ob.getClass().getName());
// 	}
// }
// class labprograms {
// 	public static void main(String args[]) {
// 		Gen<Integer> iOb;
// 		iOb = new Gen<Integer>(88);
// 		iOb.showType();
// 		int v = iOb.getob();
// 		System.out.println("value: " + v);
// 		System.out.println();
// 		Gen<String> strOb = new Gen<String>("Generics Test");
// 		strOb.showType();
// 		String str = strOb.getob();
// 		System.out.println("value: " + str);
// 	}
// }
