

@interface IGDirectThreadNotificationHelper : NSObject
+(id)sharedThreadNotificationHelper;
-(void)didReceiveAddContentNotification:(id)arg1 ;
-(void)showDirectNotificationWithContent:(id)arg1 forThread:(id)arg2 recipientPK:(id)arg3 ;
-(void)dealloc;
-(id)init;
@end

