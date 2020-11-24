package com.uj.seam.objectseam;

/**
 * Created by jehan on 12/2/2014.
 */
public class ValueCell extends Cell {
    @Override
    void recalculate() {
        System.out.println("ValueCell recalculate");
    }
}
