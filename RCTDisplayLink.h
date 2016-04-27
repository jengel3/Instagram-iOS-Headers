

@class CADisplayLink, NSMutableSet, NSRunLoop;

@interface RCTDisplayLink : NSObject {

	CADisplayLink* _jsDisplayLink;
	NSMutableSet* _frameUpdateObservers;
	NSRunLoop* _runLoop;

}
-(void)_jsThreadUpdate:(id)arg1 ;
-(void)updateJSDisplayLinkState;
-(void)assertOnRunLoop;
-(void)registerModuleForFrameUpdates:(id)arg1 withModuleData:(id)arg2 ;
-(void)addToRunLoop:(id)arg1 ;
-(void)dispatchBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)init;
-(void)invalidate;
@end

