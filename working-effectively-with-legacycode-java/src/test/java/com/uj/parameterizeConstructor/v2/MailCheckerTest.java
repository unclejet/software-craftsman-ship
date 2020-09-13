package com.uj.parameterizeConstructor.v2;

import org.junit.Test;

/**
 * Created by jehan on 12/26/2014.
 */
public class MailCheckerTest {
    @Test
    public void create() {
        FakeMailReceiver fmr = new FakeMailReceiver();
        MailChecker mc = new MailChecker(fmr, 10);
    }

    private class FakeMailReceiver implements Receiver {
        private FakeMailReceiver() {
            System.out.println("FakeMailReceiver called");
        }
    }
}
