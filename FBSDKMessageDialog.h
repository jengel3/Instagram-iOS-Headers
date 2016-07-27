
#import <Instagram/FBSDKSharingDialog.h>

@protocol FBSDKSharingDelegate, FBSDKSharingContent;
@class NSString;

@interface FBSDKMessageDialog : NSObject <FBSDKSharingDialog> {

	char _shouldFailOnDataError;
	id<FBSDKSharingDelegate> _delegate;
	id<FBSDKSharingContent> _shareContent;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBSDKSharingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id<FBSDKSharingContent> shareContent;                    //@synthesize shareContent=_shareContent - In the implementation block
@property (assign,nonatomic) char shouldFailOnDataError;                            //@synthesize shouldFailOnDataError=_shouldFailOnDataError - In the implementation block
+(id)showWithContent:(id)arg1 delegate:(id)arg2 ;
+(void)initialize;
-(char)canShow;
-(id<FBSDKSharingContent>)shareContent;
-(void)setShareContent:(id<FBSDKSharingContent>)arg1 ;
-(void)_invokeDelegateDidFailWithError:(id)arg1 ;
-(void)_logDialogShow;
-(char)_canShowNative;
-(void)_invokeDelegateDidCompleteWithResults:(id)arg1 ;
-(void)_handleCompletionWithDialogResults:(id)arg1 response:(id)arg2 ;
-(void)_invokeDelegateDidCancel;
-(char)shouldFailOnDataError;
-(void)setShouldFailOnDataError:(char)arg1 ;
-(char)validateWithError:(id*)arg1 ;
-(char)show;
-(void)setDelegate:(id<FBSDKSharingDelegate>)arg1 ;
-(id<FBSDKSharingDelegate>)delegate;
@end

