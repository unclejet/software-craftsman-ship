package com.uj.sensingandseparation.sales.bad;

import com.uj.sensingandseparation.sales.Item;

/**
 * Created by jehan on 11/14/2014.
 */
public class Sales {
    private Item item;

    public void scan(String barCode) {
        //...read item
        String itemLine = item.getName() + " " + item.getPrice().asDisplayText();
        /*
        many driver detailed  method to display itemLine on different machine.
         */
    }
}
