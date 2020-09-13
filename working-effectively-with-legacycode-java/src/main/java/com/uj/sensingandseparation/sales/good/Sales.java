package com.uj.sensingandseparation.sales.good;

import com.uj.sensingandseparation.sales.Item;
import com.uj.sensingandseparation.sales.Price;

import java.util.HashMap;
import java.util.Map;

/**
 * Created by jehan on 11/14/2014.
 */
public class Sales {
    private Map<String, Item> itemMap = new HashMap<String, Item>(1);
    private Display display;

    public Sales(Display display) {
        this.display = display;
        registerItems();
    }

    private void registerItems() {
        itemMap.put("1", new Item("Milk", new Price(3.99)));
    }

    public void scan(String barCode) {
        Item item = readItemFromRepository(barCode);
        String itemLine = item.getName() + " " + item.getPrice().asDisplayText();
        display.showLine(itemLine);
    }

    private Item readItemFromRepository(String barCode) {
        return itemMap.get(barCode);
    }
}
