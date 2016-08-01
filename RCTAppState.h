
#import <Instagram/RCTEventEmitter.h>

@class NSString;

@interface RCTAppState : RCTEventEmitter {

	NSString* _lastKnownState;

}
+(id)moduleName;
+(id)__rct_export__1180;
+(void)load;
-(id)constantsToExport;
-(id)methodQueue;
-(id)supportedEvents;
-(void)handleAppStateDidChange:(id)arg1 ;
-(void)getCurrentAppState:(/*^block*/id)arg1 error:(/*^block*/id)arg2 ;
-(void)startObserving;
-(void)stopObserving;
-(void)handleMemoryWarning;
@end

