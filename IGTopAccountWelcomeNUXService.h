

@interface IGTopAccountWelcomeNUXService : NSObject
-(void)resetDataPolicyAcceptedWithSuccessHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(char)shouldShowProfileNUXForCurrentUser;
-(void)setDidShowProfileNUXToCurrentUser;
-(void)confirmDataPolicyAcceptedWithSuccessHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
@end

