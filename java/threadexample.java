public class threadexample extends Thread {
    public void run() {
        System.out.println("Thread is running");
    }

    public static void main(String[] args) throws InterruptedException {
        threadexample te = new threadexample();
        te.start();
        Thread.sleep(2000);

    }

}
