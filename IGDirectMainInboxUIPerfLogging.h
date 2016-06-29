

@protocol IGDirectMainInboxUIPerfLogging <NSObject>
@required
+(id)mainInboxLogger;
-(id)logWillPushFromInboxWithLoggableControllerBlock:(/*^block*/id)arg1;

@end

