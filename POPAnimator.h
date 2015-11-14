/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:13 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
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
-(void)setDelegate:(id<POPAnimatorDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<POPAnimatorDelegate>)delegate;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setBeginTime:(double)arg1 ;
-(double)beginTime;
-(id)observers;
-(void)render;
@end

