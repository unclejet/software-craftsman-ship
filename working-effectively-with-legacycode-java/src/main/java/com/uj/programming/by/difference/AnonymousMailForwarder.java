package com.uj.programming.by.difference;

/**
 * Created by jehan on 2/10/2015.
 */
public class AnonymousMailForwarder extends MailForwarder {
    @Override
    protected InternetAddress getFromAddress(Message message) throws MessagingException {
        String anonymousAddress = "anon-" + "members@" + getDomain();
        return new InternetAddress(anonymousAddress);
    }
}
