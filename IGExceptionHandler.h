
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBBreakpadExceptionHandler.h>

@class NSString;

@interface IGExceptionHandler : FBBreakpadExceptionHandler {

	char _shouldObserveMemoryWarnings;
	NSString* _oomDetectionFile;
	SCD_Struct_IG9* _oomData;
	char _appLaunchedAfterMemoryCrash;

}

@property (nonatomic,readonly) char appLaunchedAfterMemoryCrash;              //@synthesize appLaunchedAfterMemoryCrash=_appLaunchedAfterMemoryCrash - In the implementation block
+(id)sharedExceptionHandler;
-(void)initializeOOMTracking;
-(void)updateUserNotification:(id)arg1 ;
-(void)clearUserNotification:(id)arg1 ;
-(void)networkTransferRateChangedNotification:(id)arg1 ;
-(void)initializeOOMData:(SCD_Struct_IG9*)arg1 ;
-(char)createOOMFile;
-(void)updateExceptionAndOOMDataWithAppState:(int)arg1 ;
-(char)appLaunchedAfterMemoryCrash;
-(void)updateTopViewController:(id)arg1 moduleName:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)applicationWillTerminate;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
-(void)applicationDidEnterBackground;
@end

