package com.uj.resetSingleton;

/**
 * Created by jehan on 1/12/2015.
 */
public class PermitRepository {
    private static PermitRepository instance;
    private Permit permit;


    private PermitRepository() {}

    public static PermitRepository getInstance() {
        if (instance == null)
            instance = new PermitRepository();
        return instance;
    }

    public static void resetForTesting() {
        instance = null;
    }

    public Permit findAssociatedPermit(PermitNotice notice) {
        if (permit == null) {
            permit = new Permit(notice);
        }
        return permit;
    }
}
