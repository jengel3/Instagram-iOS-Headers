
#import <Instagram/TTransport.h>

@class NSFileHandle, NSString;

@interface TNSFileHandleTransport : NSObject <TTransport> {

	NSFileHandle* mInputFileHandle;
	NSFileHandle* mOutputFileHandle;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)readAll:(char*)arg1 offset:(int)arg2 length:(int)arg3 ;
-(void)write:(const char*)arg1 offset:(unsigned)arg2 length:(unsigned)arg3 ;
-(id)initWithInputFileHandle:(id)arg1 outputFileHandle:(id)arg2 ;
-(void)dealloc;
-(void)flush;
-(id)initWithFileHandle:(id)arg1 ;
@end

