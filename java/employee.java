public class employee extends Person {
    private String department;

    public String getdepartmentname() {
        return department;
    }

    public employee(String name,String address, String dname) 
    {
        super(name,address);
        this.department = dname;

    }
    public static void main(String[] args) {
        System.out.println("enter your name:");
        String name = System.console().readLine();
        System.out.println("enter your address:");
        String address = System.console().readLine();
        System.out.println("enter your department:");
        String dname = System.console().readLine();
        employee e = new employee(name,address,dname);
        String empInfo = "Name:"+e.getname()+"\naddress:"+e.getaddress()+"\ndep:"+e.getdepartmentname();
        System.out.println(empInfo);
    }

}
