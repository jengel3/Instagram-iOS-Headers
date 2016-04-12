
#import <Instagram/Instagram-Structs.h>
#import <Instagram/RCTImageURLLoader.h>

@class NSString, RCTBridge;

@interface RCTXCAssetImageLoader : NSObject <RCTImageURLLoader>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(void)load;
-(char)canLoadImageURL:(id)arg1 ;
-(/*^block*/id)loadImageForURL:(id)arg1 size:(CGSize)arg2 scale:(float)arg3 resizeMode:(int)arg4 progressHandler:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
@end

