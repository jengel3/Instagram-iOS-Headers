

@protocol IGServiceHelperLoginProtocol <NSObject>
@required
-(id)loginFooterMessage;
-(char)loginPending;
-(void)doAuthWithUsername:(id)arg1 password:(id)arg2;
-(id)loginViewController;
-(id)loginErrorMessage;
-(int)numberOfExtraRowsForLogin;
-(void)prepareCell:(id)arg1 forIndexPath:(id)arg2;
-(void)setLoginPending:(char)arg1;

@end

