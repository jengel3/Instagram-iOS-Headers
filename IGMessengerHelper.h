
#import <Instagram/FBSDKSharingDelegate.h>

@protocol IGMessengerHelperDelegate;
@class FBSDKMessageDialog, NSString;

@interface IGMessengerHelper : NSObject <FBSDKSharingDelegate> {

	id<IGMessengerHelperDelegate> _delegate;
	FBSDKMessageDialog* _shareDialog;

}

@property (nonatomic,retain) FBSDKMessageDialog * shareDialog;                           //@synthesize shareDialog=_shareDialog - In the implementation block
@property (assign,nonatomic,__weak) id<IGMessengerHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedHelper;
-(void)sharer:(id)arg1 didFailWithError:(id)arg2 ;
-(void)sharer:(id)arg1 didCompleteWithResults:(id)arg2 ;
-(void)sharerDidCancel:(id)arg1 ;
-(void)shareFeedItem:(id)arg1 ;
-(FBSDKMessageDialog *)shareDialog;
-(char)canShowShareDialog;
-(void)setShareDialog:(FBSDKMessageDialog *)arg1 ;
-(void)setDelegate:(id<IGMessengerHelperDelegate>)arg1 ;
-(id)init;
-(id<IGMessengerHelperDelegate>)delegate;
@end

