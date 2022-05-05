class Solution {
    public void sortColors(int[] nums) {
        List<Integer> red = new ArrayList<Integer>();
        List<Integer> white = new ArrayList<Integer>();
        List<Integer> blue = new ArrayList<Integer>();

        for (int num : nums) {
            switch (num) {
                case 0:
                    red.add(num);
                    break;
                case 1:
                    white.add(num);
                    break;
                case 2:
                    blue.add(num);
                    break;
            }
        }
        red.addAll(white);
        red.addAll(blue);
        for (int i = 0; i < red.size(); i++) {
            nums[i] = red.get(i);
        }
    }
}