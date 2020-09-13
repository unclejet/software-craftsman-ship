package com.uj.commandQuerySeparation;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowEvent;
import java.awt.event.WindowListener;

/**
 * Created by jehan on 1/26/2015.
 */
public class AccountDetailFrame extends Frame implements ActionListener, WindowListener {
    private AccountDetailDisplay display;
    private SymbolSource symbolSource;
    //...

    public AccountDetailFrame() {
        display = new AccountDetailDisplay();
        symbolSource = new SymbolSource();
    }

    public AccountDetailFrame(AccountDetailDisplay display, SymbolSource symbolSource) {
        this.display = display;
        this.symbolSource = symbolSource;
    }

    @Override
    public void actionPerformed(ActionEvent event) {
        String source = event.getActionCommand();
        performCommand(source);
    }

    void performCommand(String source) {
        if (source.equals("project activity")) {
            symbolSource.setDescription(getDetailText() + " " + getProjectionText());
            String accountDescription = symbolSource.getAccountSymbol();
            accountDescription += ": ";
            //...
            display.setDisplayText(accountDescription);
            //...
        }
    }

    private String getDetailText() {
        return null;
    }

    private String getProjectionText() {
        return null;
    }

    @Override
    public void windowOpened(WindowEvent e) {

    }

    @Override
    public void windowClosing(WindowEvent e) {

    }

    @Override
    public void windowClosed(WindowEvent e) {

    }

    @Override
    public void windowIconified(WindowEvent e) {

    }

    @Override
    public void windowDeiconified(WindowEvent e) {

    }

    @Override
    public void windowActivated(WindowEvent e) {

    }

    @Override
    public void windowDeactivated(WindowEvent e) {

    }
}
