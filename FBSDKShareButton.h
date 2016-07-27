
#import <Instagram/FBSDKButton.h>
#import <Instagram/FBSDKSharingButton.h>

@class FBSDKShareDialog, NSString;

@interface FBSDKShareButton : FBSDKButton <FBSDKSharingButton> {

	FBSDKShareDialog* _dialog;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id<FBSDKSharingContent> shareContent; 
-(void)configureButton;
-(id<FBSDKSharingContent>)shareContent;
-(void)setShareContent:(id<FBSDKSharingContent>)arg1 ;
-(id)analyticsParameters;
-(id)impressionTrackingEventName;
-(id)impressionTrackingIdentifier;
-(char)isImplicitlyDisabled;
-(void)_share:(id)arg1 ;
@end

