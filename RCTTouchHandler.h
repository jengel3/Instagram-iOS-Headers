
#import <UIKit/UIGestureRecognizer.h>

@class RCTEventDispatcher, NSMutableOrderedSet, NSMutableArray;

@interface RCTTouchHandler : UIGestureRecognizer {

	RCTEventDispatcher* _eventDispatcher;
	NSMutableOrderedSet* _nativeTouches;
	NSMutableArray* _reactTouches;
	NSMutableArray* _touchViews;
	char _dispatchedInitialTouches;
	char _recordingInteractionTiming;
	double _mostRecentEnqueueJS;
	unsigned short _coalescingKey;

}
-(id)initWithBridge:(id)arg1 ;
-(void)handleGestureUpdate:(id)arg1 ;
-(void)_updateReactTouchAtIndex:(int)arg1 ;
-(void)_updateAndDispatchTouches:(id)arg1 eventName:(id)arg2 originatingTime:(double)arg3 ;
-(void)_recordNewTouches:(id)arg1 ;
-(void)_recordRemovedTouches:(id)arg1 ;
-(void)cancel;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(char)canBePreventedByGestureRecognizer:(id)arg1 ;
-(char)canPreventGestureRecognizer:(id)arg1 ;
@end

