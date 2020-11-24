package com.uj.seam.objectseam;

/**
 * Created by jehan on 12/2/2014.
 */
public abstract class SpreadSheet {
    public SpreadSheet buildMartSheet(Cell cell) {
        recalculate(cell);
        return this;
    }

    protected abstract void recalculate(Cell cell);
}
