import java.time.Duration;
import java.time.Instant;

public class Main {
    public static void main(String[] args) {
        Instant start_time = Instant.now();

        int threes = 0;
        int fives = 0;

        for (int i = 0; i < 1000; ++i) {
            threes += 3;
            fives += 5;
        }

        System.out.println(threes);
        System.out.println(fives);
        System.out.println(threes + fives);

        Instant end_time = Instant.now();
        Duration duration = Duration.between(start_time, end_time);

        System.out.println("Duration: " + duration.toMillis() + " milliseconds");
    }
}
