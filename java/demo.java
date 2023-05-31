public class demo {
    public static void main(String[] args){
       System.out.print("enter length:");
        String length=System.console().readLine();
        System.out.print("enter breadth:");
        String breadth=System.console().readLine();
        System.out.print("enter color:");
        String color=System.console().readLine();
        int l=Integer.parseInt(length);
        int b=Integer.parseInt(breadth);
        duster duster=new duster(l,b,color);
        System.out.println("duster length:"+duster.getlength());
        System.out.println("duster breadth:"+duster.getbreadth());
        System.out.println("duster color:"+duster.getcolor());
    }
    
}
