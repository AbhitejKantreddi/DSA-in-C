public class minimum {
public static void main(String[] args){
  Scanner in = new Scanner (System.in);
int a = in.nextInt();
int b = in.nextInt();
int c = in.nextInt();
int d = in.nextInt();

int min = a;
if (b<min){
b=min;
}
else if(c<min){
c=min;}
else{
d=min;}

System.out.println("Amoung the 4 numbers "+ min +"is minimum");
}}
