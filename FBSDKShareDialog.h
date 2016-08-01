
#import <Instagram/FBSDKWebDialogDelegate.h>
#import <Instagram/FBSDKSharingDialog.h>

@protocol FBSDKSharingDelegate, FBSDKSharingContent;
@class FBSDKWebDialog, UIViewController, NSString;

@interface FBSDKShareDialog : NSObject <FBSDKWebDialogDelegate, FBSDKSharingDialog> {

	FBSDKWebDialog* _webDialog;
	char _shouldFailOnDataError;
	id<FBSDKSharingDelegate> _delegate;
	id<FBSDKSharingContent> _shareContent;
	UIViewController* _fromViewController;
	unsigned _mode;

}

@property (assign,nonatomic,__weak) UIViewController * fromViewController;              //@synthesize fromViewController=_fromViewController - In the implementation block
@property (assign,nonatomic) unsigned mode;                                             //@synthesize mode=_mode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBSDKSharingDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id<FBSDKSharingContent> shareContent;                        //@synthesize shareContent=_shareContent - In the implementation block
@property (assign,nonatomic) char shouldFailOnDataError;                                //@synthesize shouldFailOnDataError=_shouldFailOnDataError - In the implementation block
+(id)showFromViewController:(id)arg1 withContent:(id)arg2 delegate:(id)arg3 ;
+(void)initialize;
-(char)canShow;
-(id<FBSDKSharingContent>)shareContent;
-(void)setShareContent:(id<FBSDKSharingContent>)arg1 ;
-(void)webDialog:(id)arg1 didCompleteWithResults:(id)arg2 ;
-(void)webDialog:(id)arg1 didFailWithError:(id)arg2 ;
-(void)webDialogDidCancel:(id)arg1 ;
-(void)_invokeDelegateDidFailWithError:(id)arg1 ;
-(void)_logDialogShow;
-(char)_canShowNative;
-(void)_invokeDelegateDidCompleteWithResults:(id)arg1 ;
-(void)_invokeDelegateDidCancel;
-(char)_canShowShareSheet;
-(char)_validateWithError:(id*)arg1 ;
-(char)_showAutomatic:(id*)arg1 ;
-(char)_showBrowser:(id*)arg1 ;
-(char)_showFeedBrowser:(id*)arg1 ;
-(char)_showFeedWeb:(id*)arg1 ;
-(char)_showNativeWithCanShowError:(id*)arg1 validationError:(id*)arg2 ;
-(char)_showShareSheetWithCanShowError:(id*)arg1 validationError:(id*)arg2 ;
-(char)_showWeb:(id*)arg1 ;
-(char)_validateFullyCompatibleWithError:(id*)arg1 ;
-(void)_cleanUpWebDialog;
-(void)_handleWebResponseParameters:(id)arg1 error:(id)arg2 ;
-(char)_isDefaultToShareSheet;
-(char)_useNativeDialog;
-(char)_canUseFBShareSheet;
-(char)_supportsShareSheetMinimumVersion:(id)arg1 ;
-(char)_validateShareContentForBrowser:(id*)arg1 ;
-(char)_useSafariViewController;
-(char)_validateShareContentForFeed:(id*)arg1 ;
-(char)_validateShareContentForNative:(id*)arg1 ;
-(void)_loadNativeMethodName:(id*)arg1 methodVersion:(id*)arg2 ;
-(char)_validateShareContentForShareSheet:(id*)arg1 ;
-(id)_contentImages;
-(id)_contentURLs;
-(id)_contentVideoURLs;
-(id)_calculateInitialText;
-(char)_canUseQuoteInShareSheet;
-(char)_canUseMMPInShareSheet;
-(char)_validateVideoURL:(id)arg1 error:(id*)arg2 ;
-(char)_isOpenGraphURLShare:(id)arg1 ;
-(char)_canAttributeThroughShareSheet;
-(id)_calculatePreJSONInitialTextWithHashtag:(id)arg1 ;
-(char)shouldFailOnDataError;
-(void)setShouldFailOnDataError:(char)arg1 ;
-(char)validateWithError:(id*)arg1 ;
-(void)setFromViewController:(UIViewController *)arg1 ;
-(char)show;
-(void)setDelegate:(id<FBSDKSharingDelegate>)arg1 ;
-(void)dealloc;
-(id<FBSDKSharingDelegate>)delegate;
-(UIViewController *)fromViewController;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
@end

