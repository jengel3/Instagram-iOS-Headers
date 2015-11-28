

@protocol IGServiceHelperLoginProtocol <NSObject>
@required
-(id)loginErrorMessage;
-(int)numberOfExtraRowsForLogin;
-(id)loginFooterMessage;
-(void)prepareCell:(id)arg1 forIndexPath:(id)arg2;
-(char)loginPending;
-(void)doAuthWithUsername:(id)arg1 password:(id)arg2;
-(id)loginViewControllerWithDelegate:(id)arg1;
-(void)setLoginPending:(char)arg1;

@end

