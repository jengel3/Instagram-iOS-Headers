

@protocol IGFacebookAuthHelperDelegate;
@interface IGFacebookAuthHelper : NSObject {

	char _isSubmittingRequest;
	id<IGFacebookAuthHelperDelegate> _delegate;

}

@property (assign,nonatomic) char isSubmittingRequest;                                      //@synthesize isSubmittingRequest=_isSubmittingRequest - In the implementation block
@property (assign,nonatomic,__weak) id<IGFacebookAuthHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)requestAccessTokenWithPermissions:(id)arg1 fromViewController:(id)arg2 forPublish:(char)arg3 accessTokenCallback:(/*^block*/id)arg4 ;
+(void)fetchCurrentFBUsernameWithCompletionBlock:(/*^block*/id)arg1 ;
+(void)fetchCurrentUserInfoFromFacebookAccessToken:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)setIsSubmittingRequest:(char)arg1 ;
-(char)isSubmittingRequest;
-(void)handleLoginError:(id)arg1 facebookAccessToken:(id)arg2 ;
-(void)handleLoginResponse:(id)arg1 facebookAccessToken:(id)arg2 loginType:(int)arg3 ;
-(void)handleLoggedInUserForResponse:(id)arg1 facebookAccessToken:(id)arg2 loginType:(int)arg3 ;
-(void)handleFBLoginDistilleryErrorWithCode:(int)arg1 response:(id)arg2 facebookAccessToken:(id)arg3 loginType:(int)arg4 ;
-(void)handleFBErrorEmailAlreadyTakenForResponse:(id)arg1 ;
-(void)handleFBErrorEmailTakenAutoLoginForResponse:(id)arg1 facebookAccessToken:(id)arg2 loginType:(int)arg3 ;
-(void)handleFBErrorLockedAccountForResponse:(id)arg1 facebookAccessToken:(id)arg2 ;
-(void)handleFBErrorNoFBForResponse:(id)arg1 facebookAccessToken:(id)arg2 ;
-(void)submitFBSignupRequestWithFacebookAccessToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleLoginWithResponse:(id)arg1 facebookAccessToken:(id)arg2 error:(id)arg3 loginType:(int)arg4 ;
-(void)setDelegate:(id<IGFacebookAuthHelperDelegate>)arg1 ;
-(id<IGFacebookAuthHelperDelegate>)delegate;
@end

