

@interface IGTopAccountWelcomeNUXService : NSObject
-(char)shouldShowProfileNUXForCurrentUser;
-(void)setDidShowProfileNUXToCurrentUser;
-(void)confirmDataPolicyAcceptedWithSuccessHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
@end

