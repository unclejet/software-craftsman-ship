package com.uj.objectseam;

/**
 * Created by jehan on 12/2/2014.
 */
public class CustomSpreadSheet extends SpreadSheet {
    @Override
    protected void recalculate(Cell cell) {
        cell.recalculate();
    }
}
