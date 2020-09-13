package com.uj.subclassAndOverrideMethod.v1;


import com.uj.subclassAndOverrideMethod.*;

import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

/**
 * Created by jehan on 12/25/2014.
 */
public class MessageForwarder {
    private static final int LOOP_HEADER = 0;
    private List<InternetAddress> listAddress = new ArrayList<InternetAddress>();

    public void forward() {
        //...
        try {
            createForwardMessage(new Session(), new Message());
        } catch (MessagingException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    private Message createForwardMessage(Session session, Message message) throws MessagingException, IOException {
        MimeMessage forward = new MimeMessage(session);
        forward.setFrom(getFromAddress(message));
        forward.setReplyTo(new Address[] {new InternetAddress(listAddress)});
        forward.addRecipients(Message.RecipientType.TO, listAddress);
        forward.addRecipients(Message.RecipientType.BCC, getMailListAddresses());
        forward.setSubject(transformedSubject(message.getSubject()));
        forward.setSentDate(message.getSentDate());
        forward.addHeader(LOOP_HEADER, listAddress);
        buildForwardContent(message, forward);
        return forward;
    }

    private void buildForwardContent(Message message, MimeMessage forward) {
        //...
        System.out.println("MesssageForwarder buildForwardContent: " + message + " " + forward);
    }

    private Subject transformedSubject(Subject subject) {
        //...
        System.out.println("MesssageForwarder transformedSubject: " + subject);
        return subject;
    }

    private List<InternetAddress> getMailListAddresses() {
        System.out.println("MessageForwarder getMailListAddresses");
        return listAddress;
    }

    private Address getFromAddress(Message message) {
        //...
        System.out.println("MessageForwarder getFromAddress: " + message);
        return null;
    }
//    ...
}
