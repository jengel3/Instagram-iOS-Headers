

@interface IGSSOLoggingHelper : NSObject
+(void)logSSOSubscriptionDialogSwitchTappedWithNewState:(char)arg1 ;
+(void)logLogoutTapped;
+(void)logLogoutAllTapped;
+(void)logSSOSubscriptionDialogShownWithSwitchPrechecked:(char)arg1 ;
+(void)logSSOSubscriptionDialogLogoutButtonTappedWithSubscriptionStatus:(char)arg1 ;
+(void)logSSOSubscriptionDialogCancelButtonTapped;
+(void)logSimpleLogoutDialogShown:(char)arg1 ;
+(void)logSimplgLogoutDialogLogoutButtonTapped:(char)arg1 ;
+(void)logSimplgLogoutDialogCancelButtonTapped:(char)arg1 ;
+(void)logSSOUpsellDialogShown;
+(void)logSSOUpsellDialogRememberButtonTapped;
+(void)logSSOUpsellDialogNotNowButtonTapped;
+(void)logLogoutAPICalledWithSSOEnabled:(char)arg1 forUser:(id)arg2 ;
@end

