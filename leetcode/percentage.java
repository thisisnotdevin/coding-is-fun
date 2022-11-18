// Your First Program

class percentage {
    public static void main(String[] args) {
        int Timelength = 60;
        int startAmount = 100;
        for(int i=0; i <= Timelength; i++){
            System.out.print(i + ". "+startAmount+" ");
            startAmount=startAmount+(startAmount/20);

        }
    }
}