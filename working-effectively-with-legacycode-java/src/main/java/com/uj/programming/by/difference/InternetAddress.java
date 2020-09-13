package com.uj.programming.by.difference;

/**
 * Created by jehan on 2/9/2015.
 */
public class InternetAddress extends Address {
    private String from;

    public InternetAddress(String s) {
        from = s;
    }

    @Override
    public String toString() {
        return from;
    }
}
