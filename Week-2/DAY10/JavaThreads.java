/*
Author: Rushabh Shah
Date of Creation: 16th Feb 2023
Subject: Explaining Threads in Java
*/

package javaapplication2;

class A extends Thread
{
    public void run()
    {
        for(int i=0;i<5;i++)
        {
            System.out.println("This is from "+Thread.currentThread().getClass().getName());
        }
    }
}

class B extends Thread
{
    public void run()
    {
        for(int i=0;i<5;i++)
        {
            System.out.println("This is form "+Thread.currentThread().getClass().getName());
        }
    }
}

class C extends Thread
{
    public void run()
    {
        for(int i=0;i<5;i++)
        {
            System.out.println("This is form: "+Thread.currentThread().getClass().getName());
        }
    }
}


public class JavaThreads 
{
    public static void main(String[] args)
    {
        A obj1=new A();
        B obj2=new B();
        C obj3=new C();
        obj1.start();
        obj2.start();
        obj3.start();
      
      //Fetching value of priority
        System.out.println(obj1.getPriority());
        System.out.println(obj2.getPriority());
        System.out.println(obj3.getPriority());
      
        //Setting custom priority
        obj1.setPriority(10);
        obj2.setPriority(Thread.MAX_PRIORITY);
        obj3.setPriority(Thread.MIN_PRIORITY);
        System.out.println(obj1.getPriority());
        System.out.println(obj2.getPriority());
        System.out.println(obj3.getPriority());
    }
}
