class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ArrayList<Integer> arr = new ArrayList<>();

        while(list1 != null){
            arr.add(list1.val);
            list1 = list1.next;
        }
        while(list2 != null){
            arr.add(list2.val);
            list2 = list2.next;
        }
        Collections.sort(arr);

        ListNode dummy = new ListNode(0);
        ListNode temp = dummy;
        for(int x : arr){
            temp.next = new ListNode(x);
            temp = temp.next;
        }
        return dummy.next;
    }
}