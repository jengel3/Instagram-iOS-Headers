
#import <UIKit/UIAlertViewDelegate.h>

@protocol FBSDKGraphErrorRecoveryProcessorDelegate;
@class FBSDKErrorRecoveryAttempter, NSError, UIAlertView, NSString;

@interface FBSDKGraphErrorRecoveryProcessor : NSObject <UIAlertViewDelegate> {

	FBSDKErrorRecoveryAttempter* _recoveryAttempter;
	NSError* _error;
	UIAlertView* _alertView;
	id<FBSDKGraphErrorRecoveryProcessorDelegate> _delegate;

}

@property (nonatomic,retain) id<FBSDKGraphErrorRecoveryProcessorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)displayAlertWithRecoverySuggestion:(id)arg1 recoveryOptionsTitles:(id)arg2 ;
-(void)displayAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 ;
-(void)didPresentErrorWithRecovery:(char)arg1 contextInfo:(void*)arg2 ;
-(char)processError:(id)arg1 request:(id)arg2 delegate:(id)arg3 ;
-(void)setDelegate:(id<FBSDKGraphErrorRecoveryProcessorDelegate>)arg1 ;
-(void)dealloc;
-(id<FBSDKGraphErrorRecoveryProcessorDelegate>)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
@end

