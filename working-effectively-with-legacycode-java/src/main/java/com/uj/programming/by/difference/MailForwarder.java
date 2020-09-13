package com.uj.programming.by.difference;



/**
 * Created by jehan on 2/9/2015.
 */
public class MailForwarder {

    private Session session = new Session();

    protected InternetAddress getFromAddress(Message message) throws MessagingException {
        Address[] from = message.getFrom ();
        if (from != null && from.length > 0)
            return new InternetAddress (from[0].toString ());
        return new InternetAddress (getDefaultFrom());
    }

    private String getDefaultFrom() {
        return "defaultFrom";
    }

    public MimeMessage forwardMessage(Message message) throws MessagingException {
        MimeMessage forward = new MimeMessage (session);
        forward.setFrom (getFromAddress (message));
        return forward;
    }

    public String getDomain() {
        return "myDomain";
    }
}
