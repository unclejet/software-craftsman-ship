package com.uj.sensingandseparation.sales;

/**
 * Created by jehan on 11/14/2014.
 */
public class Item {
    private String name;
    private Price price;

    public Item(String name, Price price) {
        this.name = name;
        this.price = price;
    }

    public String getName() {
        return name;
    }

    public Price getPrice() {
        return price;
    }
}
