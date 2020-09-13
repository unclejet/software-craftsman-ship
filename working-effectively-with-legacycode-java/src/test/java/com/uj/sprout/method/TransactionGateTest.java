package com.uj.sprout.method;

import junit.framework.Assert;
import org.junit.Test;

import java.util.ArrayList;
import java.util.List;

/**
 * Created by jehan on 2/13/2015.
 */
public class TransactionGateTest {
    @Test
    public void uniqueEntries() throws Exception {
        TransactionGate gate = new TransactionGate();
        ListManager manager = gate.getListManager();
        Entry e1 = new Entry();
        Entry e2 = new Entry();
        Entry e3 = new Entry();
        manager.add(e2);

        List<Entry> entries = new ArrayList<Entry>();
        entries.add(e1);
        entries.add(e2);
        entries.add(e3);

        List<Entry> uniqueEntries = gate.uniqueEntries(entries);
        Assert.assertEquals(2, uniqueEntries.size());
    }
}
