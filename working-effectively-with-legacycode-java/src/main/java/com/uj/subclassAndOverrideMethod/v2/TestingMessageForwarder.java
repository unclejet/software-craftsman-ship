package com.uj.subclassAndOverrideMethod.v2;

import com.uj.subclassAndOverrideMethod.Message;
import com.uj.subclassAndOverrideMethod.MessagingException;
import com.uj.subclassAndOverrideMethod.Session;

import java.io.IOException;

/**
 * Created by jehan on 12/25/2014.
 */
public class TestingMessageForwarder extends MessageForwarder {
    @Override
    protected Message createForwardMessage(Session session, Message message) throws MessagingException, IOException {
        System.out.println("TestingMessageForwarder create fake forward message");
        Message forward = new FakeMessage(message);
        return forward;
    }
}
