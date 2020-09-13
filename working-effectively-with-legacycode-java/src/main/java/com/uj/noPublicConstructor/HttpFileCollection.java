package com.uj.noPublicConstructor;


/**
 * Created by jehan on 1/21/2015.
 */
public final class HttpFileCollection extends NameObjectCollectionBase {
    //...

    public HttpFileCollection() {
        initDefaultKSRFiles();
    }

    private void initDefaultKSRFiles() {
        String name1 = "default1.ksr";
        fileNames.add(name1);
        httpPostedFileMap.put(name1, new HttpPostedFileWrapper(new HttpPostedFile(name1)));
        String name2 = "default2.ksr";
        fileNames.add(name2);
        httpPostedFileMap.put(name2, new HttpPostedFileWrapper(new HttpPostedFile(name2)));
    }

    //Suppose this class is low-level or 3rd party so can't modify.
    static class HttpPostedFile  {
        public static final int MIN_LEN = 100;

        private final String name;
        private int length;
        private String content;

        private HttpPostedFile(String name) {
            this.name = name;
            length = MIN_LEN + 1;
            content = name + " encrypted";
        }

        public String getName() {
            return name;
        }

        public int getLength() {
            return length;
        }

        public String getContent() {
            return content;
        }
    }
}
