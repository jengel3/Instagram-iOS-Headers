
#import <Instagram/Instagram-Structs.h>
#import <Instagram/RCTImageDataDecoder.h>

@class NSString, RCTBridge;

@interface RCTGIFImageDecoder : NSObject <RCTImageDataDecoder>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(void)load;
-(char)canDecodeImageData:(id)arg1 ;
-(/*^block*/id)decodeImageData:(id)arg1 size:(CGSize)arg2 scale:(float)arg3 resizeMode:(int)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

