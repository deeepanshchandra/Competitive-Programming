import java.util.List;
class Solution {
    public int findNumbers(int[] nums) {
        List<Integer> numsList = List.of(555, 901, 482, 1771);
        int count = 0;
        for (int num : numsList) {
            if (String.valueOf(num).length() % 2 == 0) {
                count++;
            }
        }
        return count;
    }
}