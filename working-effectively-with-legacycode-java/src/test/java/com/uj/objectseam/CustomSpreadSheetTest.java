package com.uj.objectseam;

import org.junit.Test;

/**
 * Created by jehan on 12/2/2014.
 */
public class CustomSpreadSheetTest {
    @Test
    public void callRealAPI() throws Exception {
        CustomSpreadSheet sheet = new CustomSpreadSheet();
        sheet.recalculate(new FormulaCell());
    }

    @Test
    public void objectSeamForCell() throws Exception {
        CustomSpreadSheet sheet = new CustomSpreadSheet();
        sheet.recalculate(new FakeCell());
    }

    private class FakeCell extends Cell {


        @Override
        void recalculate() {
            System.out.println("Fake Cell recalculate");
        }
    }
}
