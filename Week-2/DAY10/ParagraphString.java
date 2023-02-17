package javaapplication2;

/*
Author: Rushabh Shah
Date of Creation: 15th Feb 2023
Description: Store One paragraph In String and than split 
every word and count number of words Then After Count Charater in 
every word And also find number of palindrom in para
 */
import java.util.Scanner;
import java.util.Arrays;


public class ParagraphString {

    public static void main(String[] args) {
        String paragraph = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean tincidunt, felis eget pharetra consequat, augue enim viverra massa, eu laoreet est massa sit amet justo. Nullam quis feugiat augue. Cras bibendum magna vel libero semper, vitae venenatis enim dapibus. Sed euismod ligula a enim volutpat vestibulum. Suspendisse suscipit augue non enim rutrum, at tristique ex euismod. Sed sodales euismod lacinia. Sed aliquet justo eget vestibulum pharetra.";

        // Split paragraph into words
        String[] words = paragraph.split("\\s+");

        // Count number of words
        int wordCount = words.length;

        // Count number of characters in each word
        int[] charCount = new int[wordCount];
        for (int i = 0; i < wordCount; i++) {
            charCount[i] = words[i].length();
        }

        // Find number of palindromes in paragraph
        int palindromeCount = 0;
        for (String word : words) {
            if (isPalindrome(word)) {
                palindromeCount++;
            }
        }

        System.out.println("Number of words: " + wordCount);
        System.out.println("Number of characters in each word: " + Arrays.toString(charCount));
        System.out.println("Number of palindromes: " + palindromeCount);
    }

    private static boolean isPalindrome(String word) {
        int length = word.length();
        for (int i = 0; i < length / 2; i++) {
            if (word.charAt(i) != word.charAt(length - 1 - i)) {
                return false;
            }
        }
        return true;
    }
}
