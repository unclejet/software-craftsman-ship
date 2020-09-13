package com.uj.resetSingleton;

/**
 * Created by jehan on 1/12/2015.
 */
public class Permit {
    private PermitNotice notice;
    private int permitNumber;

    public Permit(PermitNotice notice) {
        this.notice = notice;
        permitNumber = notice.getId();
    }

    boolean isValid(String owner) {
        return owner.equals(notice.getOwner());
    }

    public void validate() {

    }

    public int getPermitNumber() {
        return permitNumber;
    }
}
