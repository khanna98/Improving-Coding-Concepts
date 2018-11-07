public class LinkedListInsertFront {

    Node head;
    static class Node {
        int data;
        Node next;

        Node(int d) {
            data = d;
            next = null;
        }
    }

    public void push(int val) {
        Node newNode =  new Node(val);
        newNode.next = head;
        head = newNode;
    }

    public void printList(){
        Node n = head;
        while(n!=null){
            System.out.print(n.data + " ");
            n = n.next;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        LinkedListInsertFront lld = new LinkedListInsertFront();
        lld.push(1);
        lld.push(2);
        lld.push(3);
        lld.push(4);
        lld.push(5);
        lld.push(6);
        System.out.println("The new list is : ");
        lld.printList();
    }
}