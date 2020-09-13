package com.uj.noPublicConstructor;

import org.junit.Assert;
import org.junit.Test;

import java.util.List;

/**
 * Created by jehan on 1/21/2015.
 */
public class KSRStreamerTest {
    @Test
    public void testOnlyKSRSuffixFileByDefault() throws Exception {
        KSRStreamer streamer = new KSRStreamer();
        List<String> ksrFilelist = streamer.getKSRStreams(new HttpFileCollection());
        Assert.assertEquals(2, ksrFilelist.size());
    }

    @Test
    public void testKSRAndTxtFile() throws Exception {
        KSRStreamer streamer = new KSRStreamer();
        FakeHttpFileCollection fakeHttpFileCollection = new FakeHttpFileCollection();
        fakeHttpFileCollection.addHttpPostedFile("a.ksr");
        fakeHttpFileCollection.addHttpPostedFile("b.txt");
        List<String> ksrFilelist = streamer.getKSRStreams(fakeHttpFileCollection);
        Assert.assertEquals(2, ksrFilelist.size());
    }

    @Test
    public void testTxtFileLengthNotValid() throws Exception {
        KSRStreamer streamer = new KSRStreamer();
        FakeHttpFileCollection fakeHttpFileCollection = new FakeHttpFileCollection();
        fakeHttpFileCollection.addHttpPostedFile("b.txt", 100);

        List<String> ksrFilelist = streamer.getKSRStreams(fakeHttpFileCollection);
        Assert.assertEquals(0, ksrFilelist.size());
    }


    class FakeHttpFileCollection extends NameObjectCollectionBase {

        public void addHttpPostedFile(String name) {
            fileNames.add(name);
            httpPostedFileMap.put(name, new FakeHttpPostedFile(name));
        }

        public void addHttpPostedFile(String name, int length) {
            fileNames.add(name);
            httpPostedFileMap.put(name, new FakeHttpPostedFile(name, length));
        }
    }

    class FakeHttpPostedFile implements IHttpPostedFile {
        private String name;

        public FakeHttpPostedFile(String name, int length) {
            this.name = name;
            this.length = length;
        }

        private int length = HttpFileCollection.HttpPostedFile.MIN_LEN + 1;

        public FakeHttpPostedFile(String name) {
            this.name = name;
        }

        @Override
        public String getName() {
            return name;
        }

        @Override
        public int getLength() {
            return length;
        }

        @Override
        public String getContent() {
            return null;
        }
    }
}
