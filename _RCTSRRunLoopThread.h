
#import <Foundation/NSThread.h>

@protocol OS_dispatch_group;
@class NSObject, NSRunLoop;

@interface _RCTSRRunLoopThread : NSThread {

	NSObject*<OS_dispatch_group> _waitGroup;
	NSRunLoop* _runLoop;

}

@property (nonatomic,readonly) NSRunLoop * runLoop;              //@synthesize runLoop=_runLoop - In the implementation block
-(NSRunLoop *)runLoop;
-(id)init;
-(void)main;
-(void)step;
@end

