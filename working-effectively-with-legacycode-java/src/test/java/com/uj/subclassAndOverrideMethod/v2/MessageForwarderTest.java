package com.uj.subclassAndOverrideMethod.v2;

import org.junit.Test;

/**
 * Created by jehan on 12/25/2014.
 */
public class MessageForwarderTest {
    @Test
    public void forwardByReal() {
        MessageTranslate mt = new MessageTranslate();
        MessageForwarder mf = new TestingMessageForwarder();
        mt.transLate(mf);
    }
}
