package com.uj.commandQuerySeparation;

import java.awt.*;

/**
 * Created by jehan on 1/26/2015.
 */
public class AccountDetailDisplay {
    private TextField display = new TextField(10);

    void setDisplayText(String accountDescription) {
        display.setText(accountDescription);
    }
}
