package com.uj.ch11.effect;

/**
 * Created by jehan on 12/10/2014.
 */
public class Token {
    public static final int CLASS = 0;
    public static final int IDENT = 1;
    public static final int LBRACE = 2;
    public static final int RBRACE = 3;
    public static final int SEMIC = 4;
    public static final int VIRTUAL = 5;

    public int getType() {
        return -1;
    }

    public String getText() {
        return null;
    }
}
