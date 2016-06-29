
#import <Foundation/NSThread.h>

@protocol OS_dispatch_group;
@class NSObject, NSRunLoop;

@interface _SRRunLoopThread : NSThread {

	NSObject*<OS_dispatch_group> _waitGroup;
	NSRunLoop* _runLoop;

}

@property (nonatomic,readonly) NSRunLoop * runLoop;              //@synthesize runLoop=_runLoop - In the implementation block
-(void)timerDone;
-(NSRunLoop *)runLoop;
-(void)dealloc;
-(id)init;
-(void)main;
@end

