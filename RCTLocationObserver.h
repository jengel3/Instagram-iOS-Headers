
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <Instagram/RCTBridgeModule.h>

@class CLLocationManager, NSDictionary, NSMutableArray, RCTBridge, NSString;

@interface RCTLocationObserver : NSObject <CLLocationManagerDelegate, RCTBridgeModule> {

	CLLocationManager* _locationManager;
	NSDictionary* _lastLocationEvent;
	NSMutableArray* _pendingRequests;
	char _observingLocation;
	SCD_Struct_RC26 _observerOptions;
	RCTBridge* _bridge;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__1720;
+(id)__rct_export__1862;
+(id)__rct_export__1993;
+(void)load;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(void)checkLocationConfig;
-(void)beginLocationUpdatesWithDesiredAccuracy:(double)arg1 ;
-(void)startObserving:(SCD_Struct_RC26)arg1 ;
-(void)getCurrentPosition:(SCD_Struct_RC26)arg1 withSuccessCallback:(/*^block*/id)arg2 errorCallback:(/*^block*/id)arg3 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)dealloc;
-(void)timeout:(id)arg1 ;
-(RCTBridge *)bridge;
-(void)stopObserving;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
@end

