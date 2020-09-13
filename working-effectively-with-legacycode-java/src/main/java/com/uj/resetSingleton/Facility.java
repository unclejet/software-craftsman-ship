package com.uj.resetSingleton;

/**
 * Created by jehan on 1/12/2015.
 */
public class Facility {
    public static final int RESIDENCE = 0;
    private final Permit basePermit;

    public Facility(int facilityCode, String owner, PermitNotice notice) throws PermitViolation {
        Permit associatedPermit = PermitRepository.getInstance().findAssociatedPermit(notice);

        if (associatedPermit.isValid(owner) && !notice.isValid()) {
            basePermit = associatedPermit;
        }
        else if (!notice.isValid()) {
            Permit permit = new Permit(notice);
            permit.validate();
            basePermit = permit;
        }
        else
            throw new PermitViolation();
    }

    public Permit getBasePermit() {
        return basePermit;
    }

    //...
}
