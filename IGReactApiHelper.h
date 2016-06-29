
#import <Instagram/RCTBridgeModule.h>

@class NSString, RCTBridge;

@interface IGReactApiHelper : NSObject <RCTBridgeModule>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__180;
+(id)__rct_export__301;
+(void)load;
-(void)getHttpHeaders:(/*^block*/id)arg1 reject:(/*^block*/id)arg2 ;
-(void)getApiUrlWithPath:(id)arg1 resolver:(/*^block*/id)arg2 reject:(/*^block*/id)arg3 ;
@end

