

@protocol IGServiceHelperLoginProtocol <NSObject>
@required
-(char)loginPending;
-(void)setLoginPending:(char)arg1;
-(void)doAuthWithUsername:(id)arg1 password:(id)arg2;
-(id)loginViewController;
-(int)numberOfExtraRowsForLogin;
-(id)loginErrorMessage;
-(id)loginFooterMessage;
-(void)prepareCell:(id)arg1 forIndexPath:(id)arg2;

@end

