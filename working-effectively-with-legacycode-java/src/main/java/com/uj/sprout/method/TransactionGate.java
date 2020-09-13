package com.uj.sprout.method;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;

/**
 * Created by jehan on 2/13/2015.
 */
public class TransactionGate {
    private TransactionBundle transactionBundle = new TransactionBundle();

    public void postEntries(List<Entry> entries) {
        List<Entry> entriesToAdd = uniqueEntries(entries);
        for (Entry entry : entriesToAdd) {
            entry.postDate();
        }
        getListManager().add(entriesToAdd);
    }

    public List<Entry> uniqueEntries(List<Entry> entries) {
        List<Entry> result = new ArrayList<Entry>();
        for (Entry entry : entries) {
            if (!getListManager().hasEntry(entry)) {
                result.add(entry);
            }
        }
        return result;
    }

    public ListManager getListManager() {
        return transactionBundle.getListManager();
    }
}
