package com.uj.commandQuerySeparation;

/**
 * Created by jehan on 1/26/2015.
 */
public class SymbolSource {
    private DetailFrame detailDisplay = new DetailFrame();;

    void setDescription(String description) {
        detailDisplay.setDescription(description);
        detailDisplay.show();
    }

    String getAccountSymbol() {
        return detailDisplay.getAccountSymbol();
    }
}
