
#import <Instagram/RCTEventEmitter.h>

@interface RCTStatusBarManager : RCTEventEmitter
+(id)moduleName;
+(id)__rct_export__940;
+(id)__rct_export__1021;
+(id)__rct_export__1142;
+(id)__rct_export__1253;
+(void)load;
-(id)methodQueue;
-(id)supportedEvents;
-(void)applicationDidChangeStatusBarFrame:(id)arg1 ;
-(void)applicationWillChangeStatusBarFrame:(id)arg1 ;
-(void)emitEvent:(id)arg1 forNotification:(id)arg2 ;
-(void)getHeight:(/*^block*/id)arg1 ;
-(void)setHidden:(char)arg1 withAnimation:(int)arg2 ;
-(void)startObserving;
-(void)setNetworkActivityIndicatorVisible:(char)arg1 ;
-(void)setStyle:(int)arg1 animated:(char)arg2 ;
-(void)stopObserving;
@end

