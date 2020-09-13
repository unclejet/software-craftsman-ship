package com.uj.introduceStaticSetter;

import org.junit.Assert;
import org.junit.Test;

import static org.junit.Assert.*;

/**
 * Created by jehan on 1/10/2015.
 */
public class RouterFactoryTest {
    @Test
    public void routeFakeSuccessfully() throws Exception {
        RouterFactory.setServer(new RouterServer() {
            @Override
            public Router makeRouter() {
                return new FakeRouter();
            }
        });
        Router router = RouterFactory.makeRouter();
        assertNotNull(router);

        router.route();
        assertTrue(router.isRouteSuccess());
    }

    private class FakeRouter implements Router {

        @Override
        public void route() {
            System.out.println("Fake router do route");
        }

        @Override
        public boolean isRouteSuccess() {
            return true;
        }
    }
}
