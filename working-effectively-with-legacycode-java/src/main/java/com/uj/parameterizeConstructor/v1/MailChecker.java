package com.uj.parameterizeConstructor.v1;

/**
 * Created by jehan on 12/26/2014.
 */
public class MailChecker {
    private final MailReceiver receiver;
    private int checkPeriodSeconds;

    public MailChecker (int checkPeriodSeconds) {
        this.receiver = new MailReceiver(); //hidden dependency
        this.checkPeriodSeconds = checkPeriodSeconds;
    }

    //...
}
