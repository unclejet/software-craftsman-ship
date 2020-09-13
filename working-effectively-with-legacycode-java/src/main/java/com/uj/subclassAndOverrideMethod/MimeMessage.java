package com.uj.subclassAndOverrideMethod;


import java.util.Date;
import java.util.List;

/**
 * Created by jehan on 12/25/2014.
 */
public class MimeMessage extends Message {
    public MimeMessage(Session session) {

    }

    public void setFrom(Address fromAddress) {
        //...
        System.out.println("MimeMessage setFrom" + fromAddress);
    }

    public void setReplyTo(Address[] addresses) {
        System.out.println("MimeMessage setReplyTo" + addresses);
    }

    public void addRecipients(RecipientType to, List<InternetAddress> listAddress) {
        System.out.println("MimeMessage addRecipients: " + to  + " " + listAddress);
    }

    public void setSubject(Subject subject) {
        this.subject = subject;
        System.out.println("MimeMessage setSubject: " + subject);
    }

    public void setSentDate(Date sentDate) {
        this.sentDate = sentDate;
        System.out.println("MimeMessage setSentDate: " + sentDate);
    }

    public void addHeader(int loopHeader, List<InternetAddress> listAddress) {
        //...
        System.out.println("MimeMessage addHeader: " + loopHeader + " " + listAddress);
    }
}
