package com.uj.resetSingleton;

/**
 * Created by jehan on 1/12/2015.
 */
public class PermitNotice {
    private int id = -1;
    private String owner;

    public PermitNotice(int id, String owner) {
        this.id = id;
        this.owner = owner;
    }

    public boolean isValid() {
        return id > 1;
    }

    public int getId() {
        return id;
    }

    public String getOwner() {
        return owner;
    }
}
