import java.util.*;

public class  AnotherPuzzleFromPapyrus {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int c = sc.nextInt();

            List<Integer> a = new ArrayList<>();
            List<Integer> b = new ArrayList<>();

            for (int i = 0; i < n; i++) {
                a.add(sc.nextInt());
            }

            for (int i = 0; i < n; i++) {
                b.add(sc.nextInt());
            }

            int noShufflec = 0;
            boolean flag = true;
            for (int i = 0; i < n; i++) {
                if (a.get(i) < b.get(i)) {
                    flag = false;
                    break;
                } else {
                    noShufflec += (a.get(i) - b.get(i));
                }
            }

            List<Integer> sortA = new ArrayList<>(a);
            List<Integer> sortB = new ArrayList<>(b);

            Collections.sort(sortA);
            Collections.sort(sortB);

            int shufflec = c;
            boolean possible = true;

            for (int i = 0; i < n; i++) {
                if (sortA.get(i) < sortB.get(i)) {
                    possible = false;
                } else {
                    shufflec += (sortA.get(i) - sortB.get(i));
                }
            }

            if (!flag && !possible) {
                System.out.println(-1);
            } else if (flag && !possible) {
                System.out.println(noShufflec);
            } else if (!flag && possible) {
                System.out.println(shufflec);
            } else {
                System.out.println(Math.min(noShufflec, shufflec));
            }
        }
        sc.close();
    }
}