

@protocol DDLogger <NSObject>
@optional
-(void)didAddLogger;
-(void)willRemoveLogger;
-(id)loggerQueue;
-(id)loggerName;
-(void)flush;

@required
-(id)logFormatter;
-(void)setLogFormatter:(id)arg1;
-(void)logMessage:(id)arg1;

@end

