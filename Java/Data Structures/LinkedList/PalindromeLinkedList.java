package LinkedList;

public class PalindromeLinkedList extends LinkedListUse{

//	public static int findLength(Node<Integer> head) {
//		Node<Integer> temp = head;
//		int count=0;
//		while(temp!=null) {
//			temp = temp.next;
//			count++;
//		}
//		
//		return count;
//	}
	
	public static boolean compare(Node<Integer> a,Node<Integer> b) {
		if(a.data.equals(b.data)) {
			return true;
		}
		else {
			return false;
		}
	}
	
	public static boolean isPalindrome(Node<Integer> head,Node<Integer> temp) {
//		if(findLength(head)%2!=0) {
//			return false;
//		}
		
		while(temp!=null) {
	
			if(compare(head, temp)) {
				head = head.next;
				temp = temp.next;
			}
			else {
				return false;
			}
		}
		
		return true;
	}
	
	public static Node<Integer> reverseList(Node<Integer> head){
		Node<Integer> prev = null;
		Node<Integer> current = head;
		Node<Integer> next = null;
		
		while(current!=null) {
			next = current.next;
			current.next = prev;
			prev = current;
			current = next;
		}
		return prev;
	}
	
	public static Node<Integer> findMid(Node<Integer> slow,Node<Integer> fast){
		if(slow==null)
			return slow;
		
		while(fast!=null && fast.next!=null) {
			slow = slow.next;
			fast = fast.next.next;
		}
		
		return slow;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Node<Integer> head = takeInput();
		Node<Integer> slow = head, fast = head;
//		printList(temp);
		Node<Integer> mid = findMid(slow,fast);
		printList(head);
//		printList(mid);
		Node<Integer> rev = reverseList(mid);
		printList(rev);
		boolean ans = isPalindrome(head, rev);
		System.out.println(ans);
		
	}

}
