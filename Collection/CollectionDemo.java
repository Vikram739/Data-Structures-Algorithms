/*
    Created By : Vikram Markali
*/
import java.util.ArrayList;
import java.util.List;
import java.util.LinkedList;
import java.util.Vector;
import java.util.Stack;
import java.util.Set;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.TreeSet;
import java.util.Queue;

class CollectionDemo
{
    public static void main(String args[])
    {
        
        // List
        List<Integer> list1 = new ArrayList<>();

        list1.add(10);
        list1.add(5);
        list1.add(20);

        System.out.println("List = "+list1);


        // ArrayList
        ArrayList<Integer> alist = new ArrayList<>();

        alist.add(10);
        alist.add(5);
        alist.add(15);
        alist.add(12);
        alist.add(10);

        System.out.println("ArrayList = "+alist);

        // LinkedList
        LinkedList<String> ll = new LinkedList<>();

        ll.add("Vikram");
        ll.add("Suraj");
        ll.add("Kalpesh");

        System.out.println("LinkedList = "+ll);
        // ll.remove(String.valueOf("Kalpesh"));
        // System.out.println("LinkedList = "+ll);


        // Vector
        Vector<String> v = new Vector<>();

        v.add("Vikram");
        v.add("Kalpesh");
        v.add("Suraj");

        System.out.println("Vector = "+v);
        // v.remove(String.valueOf("Kalpesh"));
        // System.out.println("Vector = "+v);


        // Stack    stack is a subclass of Vector class...
        Stack<String> st = new Stack<>();

        st.push("Vikram");
        st.push("Suraj");
        st.push("Kalpesh");

        System.out.println("Stack = "+ st);
        System.out.println("Stack Top = "+ st.peek());
        // st.pop();
        // System.out.println("Stack = "+ st);


        // Set
        Set<Integer> set = new HashSet<>();

        set.add(10);
        set.add(20);
        set.add(30);
        set.add(10);

        System.out.println("Set = "+set);


        // HashSet
        HashSet<Integer> hset = new HashSet<>();

        hset.add(10);
        hset.add(20);
        hset.add(30);
        hset.add(10);

        System.out.println("HashSet = "+hset);
        // hset.remove(Integer.valueOf(10));
        // System.out.println("HashSet = "+hset);


        // LinkedHashSet
        LinkedHashSet<String> lset = new LinkedHashSet<>();

        lset.add("Vikram");
        lset.add("Kalpesh");
        lset.add("Suraj");
        lset.add("");
        lset.add("");
        lset.add("Rahul");
        
        System.out.println("LinkedHashSet = "+lset);


        // TreeSet
        TreeSet<Integer> tset = new TreeSet<>();

        tset.add(50);
        tset.add(10);
        tset.add(5);
        tset.add(35);
        tset.add(10);

        System.out.println("TreeSet = "+tset);


        // Queue
        Queue<Integer> q = new LinkedList<>();

        q.add(20);
        q.add(10);
        q.offer(30);

        System.out.println("Queue = "+q);
        // q.poll();
        // q.remove();
        // System.out.println("Queue = "+q.peek());


        








    }
}