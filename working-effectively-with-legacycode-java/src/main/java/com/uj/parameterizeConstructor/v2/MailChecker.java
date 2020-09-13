package com.uj.parameterizeConstructor.v2;

/**
 * Created by jehan on 12/26/2014.
 */
public class MailChecker {
    private final Receiver receiver;
    private int checkPeriodSeconds;

    public MailChecker (int checkPeriodSeconds) {
        this(new MailReceiver(), checkPeriodSeconds);
    }

    public MailChecker (Receiver receiver, int checkPeriodSeconds) {
        this.receiver = receiver;
        this.checkPeriodSeconds = checkPeriodSeconds;
    }

    //...
}
