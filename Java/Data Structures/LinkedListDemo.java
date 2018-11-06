public class LinkedListDemo{
    static class Node{
        int data;
        Node next;
        Node(int d){
            data = d;
            next = null;
        }
    }
    Node head;
    public void printList(){
        Node n = head;
        while(n!=null){
            System.out.print(n.data + " ");
            n = n.next;
        }
        System.out.println();

    }
    public static void main(String[] args) {
        LinkedListDemo lld = new LinkedListDemo();
        lld.head = new Node(1);
        Node second = new Node(2);
        Node third = new Node(3);
        
        lld.head.next = second;
        second.next = third;

        lld.printList();
    }
}