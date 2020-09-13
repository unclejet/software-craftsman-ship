package com.uj.sensingandseparation.sales;

/**
 * Created by jehan on 11/14/2014.
 */
public class Price {
    private double value;

    public Price(double value) {
        this.value = value;
    }

    public String asDisplayText() {
        return "$" + value;
    }
}
