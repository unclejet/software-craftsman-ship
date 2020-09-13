package com.uj.introduceStaticSetter;

/**
 * Created by jehan on 1/10/2015.
 */
public class RouterFactory {
    static RouterServer server = new RouterServer() {
        @Override
        public Router makeRouter() {
            return new EWNRouter();
        }
    };

    static void setServer(RouterServer routerServerserver) {
        server = routerServerserver;
    }

    public static Router makeRouter() {
        return server.makeRouter();
    }
}
