

@interface IGActivityHelper : NSObject
+(id)sharedActivityHelper;
-(char)willContinueUserActivityWithType:(id)arg1 ;
-(char)continueUserActivity:(id)arg1 restorationHandler:(/*^block*/id)arg2 ;
@end

