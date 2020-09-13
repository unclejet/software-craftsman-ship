package com.uj.introduceStaticSetter;

/**
 * Created by jehan on 1/10/2015.
 */
public class EWNRouter implements Router {
    @Override
    public void route() {
        //...
        System.out.println("Real EWNRouter do route");
    }

    @Override
    public boolean isRouteSuccess() {
        return true;
    }
}
