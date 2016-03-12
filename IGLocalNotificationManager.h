

@interface IGLocalNotificationManager : NSObject
-(void)didReceiveLocalNotification:(id)arg1 ;
-(void)onRegistrationBeginToRegister:(id)arg1 ;
-(void)onCompleteRegistration:(id)arg1 ;
-(void)onRegistrationNotificationReceived;
-(double)timeOffsetForRegistrationPush;
-(void)dealloc;
-(id)init;
@end

