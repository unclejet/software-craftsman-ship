package com.uj.objectseam;

/**
 * Created by jehan on 12/2/2014.
 */
public class FormulaCell extends Cell {
    @Override
    void recalculate() {
        System.out.println("FormulaCell recalculate");
    }
}
