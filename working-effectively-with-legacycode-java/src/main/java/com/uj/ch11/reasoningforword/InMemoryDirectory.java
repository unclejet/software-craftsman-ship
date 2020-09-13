package com.uj.ch11.reasoningforword;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/**
 * Created by jehan on 12/11/2014.
 */
public class InMemoryDirectory {
    private List<Element> elements = new ArrayList<Element>();

    public void addElement(Element newElement) {
        elements.add(newElement);
    }

    public void generateIndex() {
        Element index = new Element("index");
        for (Iterator it = elements.iterator(); it.hasNext(); ) {
            Element current = (Element)it.next();
            index.addText(current.getName() + "\n");
        }
        addElement(index);
    }

    public int getElementCount() {
        return elements.size();
    }

    public Element getElement(String name) {
        for (Iterator it = elements.iterator(); it.hasNext(); ) {
            Element current = (Element)it.next();
            if (current.getName().equals(name)) {
                return current;
            }
        }
        return null;
    }
}
