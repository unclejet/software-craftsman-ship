package com.uj.sprout.method;

import java.util.ArrayList;
import java.util.List;

/**
 * Created by jehan on 2/13/2015.
 */
public class ListManager {
    private List<Entry> entries = new ArrayList<Entry>();

    public void add(List<Entry> entries) {
        entries.addAll(entries);
    }

    public void add(Entry entry) {
        entries.add(entry);
    }

    public boolean hasEntry(Entry entry) {
        return entries.contains(entry);
    }
}
