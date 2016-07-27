
#import <CoreFoundation/NSOutputStream.h>

@class NSString, NSOutputStream;

@interface IGDiskCacheOutputStream : NSOutputStream {

	NSString* _filePath;
	NSOutputStream* _fileOutputStream;
	char _open;

}
-(void)dealloc;
-(void)close;
-(id)initWithFilePath:(id)arg1 ;
-(void)open;
-(char)hasSpaceAvailable;
-(int)write:(const char*)arg1 maxLength:(unsigned)arg2 ;
-(void)abort;
@end

