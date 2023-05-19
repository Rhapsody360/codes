public class boxes {
    private int a,b,c;
    boxes (int x,int y,int z){
        this.a=x;
        this.b=y;
        this.c=z;
    }
    boxes (int side){
        this.a=side;
        this.b=side;
        this.c=side;
    }
    public static void main(String[] args) {
        boxes cardboard = new boxes(2);
        System.out.println("length"+cardboard.a);
        System.out.println("width"+cardboard.b);
        System.out.println("height"+cardboard.c);

        boxes cubeBoxes = new boxes(2, 3, 5);
        System.out.println("length"+cubeBoxes.a);
        System.out.println("width"+cubeBoxes.b);
        System.out.println("height"+cubeBoxes.c);
    }
}
