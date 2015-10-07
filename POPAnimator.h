/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:17 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol POPAnimatorDelegate;
#import <Instagram/Instagram-Structs.h>
@class CADisplayLink, NSMutableArray;

@interface POPAnimator : NSObject {

	CADisplayLink* _displayLink;
	list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem> > >* _list;
	CFDictionaryRef _dict;
	NSMutableArray* _observers;
	list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem> > >* _pendingList;
	CFRunLoopObserverRef _pendingListObserver;
	double _slowMotionStartTime;
	double _slowMotionLastTime;
	double _slowMotionAccumulator;
	double _beginTime;
	int _lock;
	char _disableDisplayLink;
	id<POPAnimatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<POPAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char disableDisplayLink;                              //@synthesize disableDisplayLink=_disableDisplayLink - In the implementation block
@property (assign,nonatomic) double beginTime;                                     //@synthesize beginTime=_beginTime - In the implementation block
+(char)disableBackgroundThread;
+(void)setDisableBackgroundThread:(char)arg1 ;
+(id)sharedAnimator;
-(void)addAnimation:(id)arg1 forObject:(id)arg2 key:(id)arg3 ;
-(void)removeAllAnimationsForObject:(id)arg1 ;
-(void)removeAnimationForObject:(id)arg1 key:(id)arg2 ;
-(id)animationKeysForObject:(id)arg1 ;
-(id)animationForObject:(id)arg1 key:(id)arg2 ;
-(void)_clearPendingListObserver;
-(double)_currentRenderTime;
-(void)_renderTime:(double)arg1 items:(list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem> > >*)arg2 ;
-(void)_processPendingList;
-(void)_renderTime:(double)arg1 item:(shared_ptr<POPAnimatorItem>*)arg2 ;
-(void)removeAnimationForObject:(id)arg1 key:(id)arg2 cleanupDict:(char)arg3 ;
-(void)_scheduleProcessPendingList;
-(void)renderTime:(double)arg1 ;
-(char)disableDisplayLink;
-(void)setDisableDisplayLink:(char)arg1 ;
-(void)render;
-(void)dealloc;
-(void)setDelegate:(id<POPAnimatorDelegate>)arg1 ;
-(id)init;
-(id<POPAnimatorDelegate>)delegate;
-(void)removeObserver:(id)arg1 ;
-(void)setBeginTime:(double)arg1 ;
-(double)beginTime;
-(id)observers;
-(void)addObserver:(id)arg1 ;
@end

