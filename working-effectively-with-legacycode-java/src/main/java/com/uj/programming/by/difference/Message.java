package com.uj.programming.by.difference;

/**
 * Created by jehan on 2/9/2015.
 */
public class Message {
    private Session session;
    private Address[] addresses = new InternetAddress[1];
    public Message(Session session) {
        this.session = session;
    }

    public Address[] getFrom() {
        return addresses;
    }

    public void setFrom(InternetAddress fromAddress) {
        addresses[0] = fromAddress;
    }
}
