

@class NSData;

@interface GCDAsyncWritePacket : NSObject {

	NSData* buffer;
	unsigned bytesDone;
	long tag;
	double timeout;

}
-(id)initWithData:(id)arg1 timeout:(double)arg2 tag:(long)arg3 ;
@end

