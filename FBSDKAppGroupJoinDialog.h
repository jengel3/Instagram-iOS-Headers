
#import <Instagram/FBSDKWebDialogDelegate.h>

@protocol FBSDKAppGroupJoinDialogDelegate;
@class FBSDKWebDialog, NSString;

@interface FBSDKAppGroupJoinDialog : NSObject <FBSDKWebDialogDelegate> {

	FBSDKWebDialog* _webDialog;
	id<FBSDKAppGroupJoinDialogDelegate> _delegate;
	NSString* _groupID;

}

@property (assign,nonatomic,__weak) id<FBSDKAppGroupJoinDialogDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * groupID;                                                 //@synthesize groupID=_groupID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)showWithGroupID:(id)arg1 delegate:(id)arg2 ;
-(char)canShow;
-(void)webDialogDidCancel:(id)arg1 ;
-(void)webDialog:(id)arg1 didCompleteWithResults:(id)arg2 ;
-(void)webDialog:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_handleCompletionWithDialogResults:(id)arg1 error:(id)arg2 ;
-(char)validateWithError:(id*)arg1 ;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
-(char)show;
-(void)setDelegate:(id<FBSDKAppGroupJoinDialogDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBSDKAppGroupJoinDialogDelegate>)delegate;
@end

