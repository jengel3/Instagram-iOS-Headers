
#import <Instagram/FBSDKButton.h>
#import <Instagram/FBSDKButtonImpressionTracking.h>
#import <Instagram/FBSDKLiking.h>

@class NSString, FBSDKLikeActionController;

@interface FBSDKLikeButton : FBSDKButton <FBSDKButtonImpressionTracking, FBSDKLiking> {

	char _isExplicitlyDisabled;
	FBSDKLikeActionController* _likeActionController;
	NSString* _objectID;
	unsigned _objectType;
	char _soundEnabled;

}

@property (nonatomic,retain) FBSDKLikeActionController * likeActionController; 
@property (assign,getter=isSoundEnabled,nonatomic) char soundEnabled;                       //@synthesize soundEnabled=_soundEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * objectID; 
@property (assign,nonatomic) unsigned objectType; 
+(void)initialize;
-(void)configureButton;
-(id)analyticsParameters;
-(id)impressionTrackingEventName;
-(id)impressionTrackingIdentifier;
-(char)isImplicitlyDisabled;
-(void)_ensureLikeActionController:(char)arg1 ;
-(void)_setLikeActionController:(id)arg1 ;
-(void)_resetLikeActionController;
-(char)isSoundEnabled;
-(void)setSoundEnabled:(char)arg1 ;
-(void)_likeActionControllerDidDisableNotification:(id)arg1 ;
-(void)_likeActionControllerDidResetNotification:(id)arg1 ;
-(void)_likeActionControllerDidUpdateNotification:(id)arg1 ;
-(void)setLikeActionController:(FBSDKLikeActionController *)arg1 ;
-(FBSDKLikeActionController *)likeActionController;
-(void)_like:(id)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(NSString *)objectID;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_setSelected:(char)arg1 animated:(char)arg2 ;
-(void)setObjectType:(unsigned)arg1 ;
-(unsigned)objectType;
-(void)setObjectID:(NSString *)arg1 ;
@end

