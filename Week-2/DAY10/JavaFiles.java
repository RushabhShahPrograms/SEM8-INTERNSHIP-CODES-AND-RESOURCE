/*
Author: Rushabh Shah
Date of Creation: 16th Feb 2023
Subject: Files in Java
*/

package javaapplication2;
import java.io.*;

public class JavaFiles 
{
    public static void main(String[] args)
    {
        File obj = new File("D:\\royal.txt");
        FileOutputStream objFileOutputStream=null;
        FileInputStream objFileInputStream=null;
        int ch;
        byte cities[]={'a','h','d','m','u','m'};
        try
        {
            objFileOutputStream = new FileOutputStream(obj);
            objFileOutputStream.write(cities);
            objFileOutputStream.close();
            objFileInputStream = new FileInputStream(obj);
            while((ch=objFileInputStream.read())!=-1)
            {
                System.out.print((char)ch);
            }
        }
        catch(FileNotFoundException e)
        {
            e.printStackTrace();
        }
        catch(IOException e)
        {
            e.printStackTrace();
        }
        finally
        {
            try
            {
                objFileOutputStream.close();
            }
            catch(Exception e)
            {
                e.printStackTrace();
            }
        }
    }
}
