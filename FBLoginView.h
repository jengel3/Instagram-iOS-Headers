/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:17 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol FBLoginViewDelegate, FBGraphUser;
@class NSArray, UILabel, UIButton, FBSession, FBRequestConnection, NSNumber, NSString;

@interface FBLoginView : UIView <UIActionSheetDelegate> {

	char _hasShownTooltipBubble;
	NSArray* _permissions;
	NSArray* _readPermissions;
	NSArray* _publishPermissions;
	int _defaultAudience;
	int _loginBehavior;
	unsigned _tooltipBehavior;
	unsigned _tooltipColorStyle;
	id<FBLoginViewDelegate> _delegate;
	UILabel* _label;
	UIButton* _button;
	FBSession* _session;
	FBRequestConnection* _request;
	id<FBGraphUser> _user;
	/*^block*/id _sessionStateHandler;
	/*^block*/id _requestHandler;
	NSNumber* _lastObservedStateWasOpen;

}

@property (copy) NSArray * permissions;                                     //@synthesize permissions=_permissions - In the implementation block
@property (nonatomic,copy) NSArray * readPermissions;                       //@synthesize readPermissions=_readPermissions - In the implementation block
@property (nonatomic,copy) NSArray * publishPermissions;                    //@synthesize publishPermissions=_publishPermissions - In the implementation block
@property (assign,nonatomic) int defaultAudience;                           //@synthesize defaultAudience=_defaultAudience - In the implementation block
@property (assign,nonatomic) int loginBehavior;                             //@synthesize loginBehavior=_loginBehavior - In the implementation block
@property (assign,nonatomic) unsigned tooltipBehavior;                      //@synthesize tooltipBehavior=_tooltipBehavior - In the implementation block
@property (assign,nonatomic) unsigned tooltipColorStyle;                    //@synthesize tooltipColorStyle=_tooltipColorStyle - In the implementation block
@property (assign,nonatomic) id<FBLoginViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * label;                               //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIButton * button;                             //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) FBSession * session;                           //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBRequestConnection * request;                 //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) id<FBGraphUser> user;                          //@synthesize user=_user - In the implementation block
@property (nonatomic,copy) id sessionStateHandler;                          //@synthesize sessionStateHandler=_sessionStateHandler - In the implementation block
@property (nonatomic,copy) id requestHandler;                               //@synthesize requestHandler=_requestHandler - In the implementation block
@property (copy) NSNumber * lastObservedStateWasOpen;                       //@synthesize lastObservedStateWasOpen=_lastObservedStateWasOpen - In the implementation block
@property (assign,nonatomic) char hasShownTooltipBubble;                    //@synthesize hasShownTooltipBubble=_hasShownTooltipBubble - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDefaultAudience:(int)arg1 ;
-(id)initWithPermissions:(id)arg1 ;
-(void)unwireViewForSession;
-(void)informDelegate:(char)arg1 ;
-(void)informDelegateOfError:(id)arg1 ;
-(void)wireViewForSession:(id)arg1 userInfo:(id)arg2 ;
-(void)handleActiveSessionSetNotifications:(id)arg1 ;
-(void)handleActiveSessionUnsetNotifications:(id)arg1 ;
-(id)logInText;
-(id)logOutText;
-(void)fetchMeInfo;
-(void)configureViewForStateLoggedIn:(char)arg1 ;
-(void)setLoginBehavior:(int)arg1 ;
-(unsigned)tooltipBehavior;
-(unsigned)tooltipColorStyle;
-(char)hasShownTooltipBubble;
-(void)showTooltipIfNeeded;
-(void)setHasShownTooltipBubble:(char)arg1 ;
-(NSNumber *)lastObservedStateWasOpen;
-(void)setLastObservedStateWasOpen:(NSNumber *)arg1 ;
-(void)wireViewForSessionWithoutOpening:(id)arg1 ;
-(int)loginBehavior;
-(id)initWithReadPermissions:(id)arg1 ;
-(id)initWithPublishPermissions:(id)arg1 defaultAudience:(int)arg2 ;
-(void)setTooltipBehavior:(unsigned)arg1 ;
-(void)setTooltipColorStyle:(unsigned)arg1 ;
-(void)setSessionStateHandler:(id)arg1 ;
-(void)initializeBlocks;
-(id)sessionStateHandler;
-(NSArray *)publishPermissions;
-(NSArray *)readPermissions;
-(void)setReadPermissions:(NSArray *)arg1 ;
-(void)setPublishPermissions:(NSArray *)arg1 ;
-(int)defaultAudience;
-(UIButton *)button;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<FBLoginViewDelegate>)arg1 ;
-(void)didMoveToWindow;
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBLoginViewDelegate>)delegate;
-(FBRequestConnection *)request;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)initialize;
-(CGSize)intrinsicContentSize;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)buttonPressed:(id)arg1 ;
-(void)setButton:(UIButton *)arg1 ;
-(FBSession *)session;
-(void)setSession:(FBSession *)arg1 ;
-(id<FBGraphUser>)user;
-(void)setUser:(id<FBGraphUser>)arg1 ;
-(id)requestHandler;
-(void)setRequestHandler:(id)arg1 ;
-(NSArray *)permissions;
-(void)setPermissions:(NSArray *)arg1 ;
-(void)setRequest:(FBRequestConnection *)arg1 ;
@end

