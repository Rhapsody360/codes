

class hallojava extends child{
    public static void main(String[] args){
        System.out.println("filename class, main function executing \nnow calling print function from extended class");
        print();
    }
}

class child{
    public static void print(){
        System.out.println("extended class executing");
    }
}

