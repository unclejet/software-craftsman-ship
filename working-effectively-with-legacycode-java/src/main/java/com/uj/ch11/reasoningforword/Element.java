package com.uj.ch11.reasoningforword;

/**
 * Created by jehan on 12/11/2014.
 */
public class Element {
    private String name;
    private String text = "";

    public Element(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void addText(String newText) {
        text += newText;
    }

    public String getText() {
        return text;
    }
}
