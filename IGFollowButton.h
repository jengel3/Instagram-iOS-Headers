/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:46 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGSpringButton.h>

@protocol IGFollowButtonDelegate, IGRaindropAnalyticsDelegate;
@class IGUser, NSString, IGUnfollowHeaderView, IGPendingRequestView;

@interface IGFollowButton : IGSpringButton {

	char _canShowFollowRequest;
	IGUser* _user;
	id<IGFollowButtonDelegate> _delegate;
	NSString* _contextString;
	IGUnfollowHeaderView* _unfollowHeaderView;
	IGPendingRequestView* _pendingRequestView;
	int _currentState;
	id<IGRaindropAnalyticsDelegate> _analyticsDelegate;

}

@property (nonatomic,retain) IGUser * user;                                                         //@synthesize user=_user - In the implementation block
@property (assign,nonatomic) char canShowFollowRequest;                                             //@synthesize canShowFollowRequest=_canShowFollowRequest - In the implementation block
@property (assign,nonatomic,__weak) id<IGFollowButtonDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * contextString;                                                //@synthesize contextString=_contextString - In the implementation block
@property (nonatomic,retain) IGUnfollowHeaderView * unfollowHeaderView;                             //@synthesize unfollowHeaderView=_unfollowHeaderView - In the implementation block
@property (nonatomic,retain) IGPendingRequestView * pendingRequestView;                             //@synthesize pendingRequestView=_pendingRequestView - In the implementation block
@property (assign,nonatomic) int currentState;                                                      //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic,__weak) id<IGRaindropAnalyticsDelegate> analyticsDelegate;              //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 analyticsDelegate:(id)arg2 ;
-(void)onFriendStatusReceived;
-(void)acceptFollowRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)ignoreFollowRequestWithCompletion:(/*^block*/id)arg1 ;
-(char)shouldShowPendingRequest;
-(IGPendingRequestView *)pendingRequestView;
-(void)toggleFollowStatus;
-(char)canShowFollowRequest;
-(int)getButtonState;
-(id)backgroundImageForButtonState:(int)arg1 ;
-(id)accessoryImageForButtonState:(int)arg1 ;
-(id)iconImageForButtonState:(int)arg1 ;
-(id)titleForButtonState:(int)arg1 ;
-(char)shouldShowTitle;
-(id)titleColorForButtonState:(int)arg1 ;
-(int)buttonStateForFollowStatus:(int)arg1 ;
-(id<IGRaindropAnalyticsDelegate>)analyticsDelegate;
-(IGUnfollowHeaderView *)unfollowHeaderView;
-(float)findWidthOfFollowAndUnfollowButtons;
-(void)setCanShowFollowRequest:(char)arg1 ;
-(void)setContextString:(NSString *)arg1 ;
-(void)setUnfollowHeaderView:(IGUnfollowHeaderView *)arg1 ;
-(void)setPendingRequestView:(IGPendingRequestView *)arg1 ;
-(void)setAnalyticsDelegate:(id<IGRaindropAnalyticsDelegate>)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<IGFollowButtonDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGFollowButtonDelegate>)delegate;
-(void)setDisplayType:(int)arg1 ;
-(int)currentState;
-(void)setHighlighted:(char)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setCurrentState:(int)arg1 ;
-(void)updateState;
-(NSString *)contextString;
@end

