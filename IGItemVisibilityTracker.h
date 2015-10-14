/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:19:58 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IGItemVisibilityTrackerDelegate;
@class NSSet, NSMutableSet;

@interface IGItemVisibilityTracker : NSObject {

	NSSet* _lastVisibleItems;
	NSMutableSet* _viewedItems;
	char _trackingDisabled;
	id<IGItemVisibilityTrackerDelegate> _delegate;

}

@property (assign,nonatomic) char trackingDisabled;                                            //@synthesize trackingDisabled=_trackingDisabled - In the implementation block
@property (assign,nonatomic,__weak) id<IGItemVisibilityTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setTrackingDisabled:(char)arg1 ;
-(void)updateItemVisibilitiesWithSet:(id)arg1 ;
-(void)updateItemViewedWithItem:(id)arg1 ;
-(char)trackingDisabled;
-(void)setDelegate:(id<IGItemVisibilityTrackerDelegate>)arg1 ;
-(id)init;
-(id<IGItemVisibilityTrackerDelegate>)delegate;
@end

