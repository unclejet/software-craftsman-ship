package com.uj.noPublicConstructor;

import static com.uj.noPublicConstructor.HttpFileCollection.*;

/**
 * Created by jehan on 1/23/2015.
 */
public class HttpPostedFileWrapper implements IHttpPostedFile {
    private HttpPostedFile file;

    public HttpPostedFileWrapper(HttpPostedFile file) {
        this.file = file;
    }

    @Override
    public String getName() {
        return file.getName();
    }

    @Override
    public int getLength() {
        return file.getLength();
    }

    @Override
    public String getContent() {
        return file.getContent();
    }
}
