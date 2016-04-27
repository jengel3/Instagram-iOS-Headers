

@interface IGDirectThreadNotificationHelper : NSObject
+(void)showDirectNotificationWithContent:(id)arg1 forThread:(id)arg2 recipientPK:(id)arg3 ;
+(void)handleNotificationBarTapForThread:(id)arg1 recipientPK:(id)arg2 ;
+(id)sharedThreadNotificationHelper;
-(void)didReceiveAddContentNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

