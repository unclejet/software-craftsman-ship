package com.uj.subclassAndOverrideMethod;

import java.util.Date;

/**
 * Created by jehan on 12/25/2014.
 */
public class Message {
    protected Subject subject;
    protected Date sentDate;

    public Subject getSubject() {
        return subject;
    }

    public Date getSentDate() {
        return sentDate;
    }

    public enum RecipientType {BCC, TO}
}
