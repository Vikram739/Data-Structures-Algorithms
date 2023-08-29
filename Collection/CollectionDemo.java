/*
    Created By : Vikram Markali
*/
import java.util.ArrayList;
import java.util.List;
import java.util.LinkedList;
import java.util.Vector;
import java.util.Iterator;

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

        Iterator<String> itr = v.iterator();
        while(itr.hasNext())
            System.out.println(itr.next());
        // v.remove(String.valueOf("Kalpesh"));
        // System.out.println("Vector = "+v);





    }
}