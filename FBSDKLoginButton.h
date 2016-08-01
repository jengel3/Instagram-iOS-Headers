
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBSDKButton.h>
#import <Instagram/FBSDKButtonImpressionTracking.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol FBSDKLoginButtonDelegate;
@class FBSDKLoginManager, NSString, NSArray;

@interface FBSDKLoginButton : FBSDKButton <FBSDKButtonImpressionTracking, UIActionSheetDelegate> {

	char _hasShownTooltipBubble;
	FBSDKLoginManager* _loginManager;
	NSString* _userID;
	NSString* _userName;
	id<FBSDKLoginButtonDelegate> _delegate;
	NSArray* _publishPermissions;
	NSArray* _readPermissions;
	unsigned _tooltipBehavior;
	unsigned _tooltipColorStyle;

}

@property (assign,nonatomic) unsigned defaultAudience; 
@property (assign,nonatomic,__weak) id<FBSDKLoginButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned loginBehavior; 
@property (nonatomic,copy) NSArray * publishPermissions;                                //@synthesize publishPermissions=_publishPermissions - In the implementation block
@property (nonatomic,copy) NSArray * readPermissions;                                   //@synthesize readPermissions=_readPermissions - In the implementation block
@property (assign,nonatomic) unsigned tooltipBehavior;                                  //@synthesize tooltipBehavior=_tooltipBehavior - In the implementation block
@property (assign,nonatomic) unsigned tooltipColorStyle;                                //@synthesize tooltipColorStyle=_tooltipColorStyle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureButton;
-(id)analyticsParameters;
-(id)impressionTrackingEventName;
-(id)impressionTrackingIdentifier;
-(void)_accessTokenDidChangeNotification:(id)arg1 ;
-(unsigned)defaultAudience;
-(void)setDefaultAudience:(unsigned)arg1 ;
-(unsigned)loginBehavior;
-(void)setLoginBehavior:(unsigned)arg1 ;
-(unsigned)tooltipBehavior;
-(void)_showTooltipIfNeeded;
-(id)_longLogInTitle;
-(id)_shortLogInTitle;
-(id)_logOutTitle;
-(NSArray *)publishPermissions;
-(NSArray *)readPermissions;
-(unsigned)tooltipColorStyle;
-(void)setPublishPermissions:(NSArray *)arg1 ;
-(void)setReadPermissions:(NSArray *)arg1 ;
-(void)setTooltipBehavior:(unsigned)arg1 ;
-(void)setTooltipColorStyle:(unsigned)arg1 ;
-(void)setDelegate:(id<FBSDKLoginButtonDelegate>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBSDKLoginButtonDelegate>)delegate;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)_buttonPressed:(id)arg1 ;
-(void)_updateContent;
@end

