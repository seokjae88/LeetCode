class Solution {
    public int minMutation(String start, String end, String[] bank) {
        if (bank.length == 0 || !Arrays.asList(bank).contains(end)) {
            return -1;
        }

        Character[] mut = {'A', 'C', 'G', 'T'};
        Set<String> dict = new HashSet<String>(Arrays.asList(bank));
        Deque<String> q = new ArrayDeque<String>();
        q.addLast(start);

        int ans = 0;
        while(!q.isEmpty()) {
            int n = q.size();
            for (int i = 0; i < n; i++) {
                StringBuilder cur = new StringBuilder(q.getFirst());
                q.pollFirst();

                if (end.equals(cur.toString())) {
                    return ans;
                }
                dict.remove(cur.toString());
                for (int j = 0; j < 8; j++) {
                    Character c = cur.charAt(j);
                    for (int k = 0; k < 4; k++) {
                        cur.setCharAt(j, mut[k]);
                        if (dict.contains(cur.toString())) {
                            q.addLast(cur.toString());
                        }
                    }
                    cur.setCharAt(j, c);
                }
            }
            ans++;
        }
        return -1;
    }
}