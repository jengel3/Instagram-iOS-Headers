

@interface FBTimeSpentData : NSObject
+(void)restore:(char)arg1 ;
+(void)suspend;
+(id)singleton;
-(void)instanceSuspend;
-(void)instanceRestore:(char)arg1 ;
@end

