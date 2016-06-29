
#import <Instagram/TNSStreamTransport.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@class NSInputStream, NSOutputStream, NSString;

@interface TSocketClient : TNSStreamTransport <NSStreamDelegate> {

	NSInputStream* inputStream;
	NSOutputStream* outputStream;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithHostname:(id)arg1 port:(int)arg2 ;
-(void)dealloc;
@end

