
#import <Instagram/FBDialog.h>

@protocol FBLoginDialogDelegate;
@interface FBLoginDialog : FBDialog {

	id<FBLoginDialogDelegate> _loginDelegate;

}

@property (assign,nonatomic) id<FBLoginDialogDelegate> loginDelegate;              //@synthesize loginDelegate=_loginDelegate - In the implementation block
-(id)initWithURL:(id)arg1 loginParams:(id)arg2 delegate:(id)arg3 ;
-(void)dialogDidSucceed:(id)arg1 ;
-(id<FBLoginDialogDelegate>)loginDelegate;
-(void)setLoginDelegate:(id<FBLoginDialogDelegate>)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)dialogDidCancel:(id)arg1 ;
@end

