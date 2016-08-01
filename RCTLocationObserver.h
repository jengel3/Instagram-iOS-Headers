
#import <Instagram/Instagram-Structs.h>
#import <Instagram/RCTEventEmitter.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, NSDictionary, NSMutableArray, NSString;

@interface RCTLocationObserver : RCTEventEmitter <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	NSDictionary* _lastLocationEvent;
	NSMutableArray* _pendingRequests;
	char _observingLocation;
	SCD_Struct_RC122 _observerOptions;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)moduleName;
+(id)__rct_export__1750;
+(id)__rct_export__1892;
+(id)__rct_export__2023;
+(void)load;
-(id)methodQueue;
-(id)supportedEvents;
-(void)checkLocationConfig;
-(void)beginLocationUpdatesWithDesiredAccuracy:(double)arg1 distanceFilter:(double)arg2 ;
-(void)startObserving:(SCD_Struct_RC122)arg1 ;
-(void)getCurrentPosition:(SCD_Struct_RC122)arg1 withSuccessCallback:(/*^block*/id)arg2 errorCallback:(/*^block*/id)arg3 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)dealloc;
-(void)timeout:(id)arg1 ;
-(void)stopObserving;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
@end

