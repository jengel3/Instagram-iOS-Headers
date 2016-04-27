
#import <Instagram/RCTBridgeModule.h>

@class NSString, RCTBridge;

@interface IGEditProfileReactModule : NSObject <RCTBridgeModule>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__360;
+(id)__rct_export__451;
+(id)__rct_export__502;
+(void)load;
-(void)fetchUserData:(/*^block*/id)arg1 onError:(/*^block*/id)arg2 ;
-(void)fetchUserData:(/*^block*/id)arg1 rejecter:(/*^block*/id)arg2 ;
-(void)canImportProfilePictureForTwitter:(/*^block*/id)arg1 rejecter:(/*^block*/id)arg2 ;
-(void)canTakePhoto:(/*^block*/id)arg1 rejecter:(/*^block*/id)arg2 ;
@end

