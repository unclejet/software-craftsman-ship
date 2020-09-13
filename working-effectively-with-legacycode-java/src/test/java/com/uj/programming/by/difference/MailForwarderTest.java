package com.uj.programming.by.difference;

import org.junit.Test;

import static org.junit.Assert.*;

/**
 * Created by jehan on 2/9/2015.
 */
public class MailForwarderTest {
    @Test
    public void getFromInForwordMessageIsCorrect() throws Exception {
        MailForwarder forwarder = new MailForwarder();
        Message expectedMessage = forwarder.forwardMessage(new FakeMessage(null));
        assertEquals("abc@" + forwarder.getDomain(), expectedMessage.getFrom()[0].toString());
    }

    @Test
    public void testAnonymous () throws Exception  {
        MailForwarder forwarder = new AnonymousMailForwarder();
        Message expectedMessage = forwarder.forwardMessage(new FakeMessage(null));
        assertEquals ("anon-members@" + forwarder.getDomain(), expectedMessage.getFrom ()[0].toString());
    }

    class FakeMessage extends Message {

        public FakeMessage(Session session) {
            super(session);
        }

        @Override
        public Address[] getFrom() {
            return new InternetAddress[] {new InternetAddress("abc@myDomain")};
        }
    }
}
