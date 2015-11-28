

@class ACAccountStore, ACAccountType;

@interface FBSystemAccountStoreAdapter : NSObject {

	char _forceBlockingRenew;
	ACAccountStore* _accountStore;
	ACAccountType* _accountTypeFB;

}

@property (assign) char forceBlockingRenew; 
@property (readonly) char canRequestAccessWithoutUI; 
@property (nonatomic,retain,readonly) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain,readonly) ACAccountType * accountTypeFB;              //@synthesize accountTypeFB=_accountTypeFB - In the implementation block
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
-(void)renewSystemAuthorization:(/*^block*/id)arg1 ;
-(void)requestAccessToFacebookAccountStore:(id)arg1 defaultAudience:(int)arg2 isReauthorize:(char)arg3 appID:(id)arg4 session:(id)arg5 handler:(/*^block*/id)arg6 ;
-(ACAccountType *)accountTypeFB;
-(char)forceBlockingRenew;
-(id)renewSystemAuthorizationAsTask;
-(char)canRequestAccessWithoutUI;
-(id)requestAccessToFacebookAccountStoreAsTask:(id)arg1 ;
-(void)setForceBlockingRenew:(char)arg1 ;
-(ACAccountStore *)accountStore;
-(void)dealloc;
-(id)init;
@end

