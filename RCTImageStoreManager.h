
#import <Instagram/RCTURLRequestHandler.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString, RCTBridge;

@interface RCTImageStoreManager : NSObject <RCTURLRequestHandler> {

	NSMutableDictionary* _store;
	unsigned* _id;
	NSObject*<OS_dispatch_queue> _methodQueue;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue;              //@synthesize methodQueue=_methodQueue - In the implementation block
+(id)moduleName;
+(id)__rct_export__840;
+(id)__rct_export__901;
+(id)__rct_export__982;
+(id)__rct_export__1133;
+(void)load;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(void)getImageForTag:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)storeImage:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)sendRequest:(id)arg1 withDelegate:(id)arg2 ;
-(void)removeImageForTag:(id)arg1 ;
-(id)_storeImageData:(id)arg1 ;
-(void)removeImageForTag:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)storeImageData:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)getImageDataForTag:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)hasImageForTag:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)getBase64ForTag:(id)arg1 successCallback:(/*^block*/id)arg2 errorCallback:(/*^block*/id)arg3 ;
-(void)addImageFromBase64:(id)arg1 successCallback:(/*^block*/id)arg2 errorCallback:(/*^block*/id)arg3 ;
-(id)storeImage:(id)arg1 ;
-(id)imageForTag:(id)arg1 ;
-(void)cancelRequest:(id)arg1 ;
-(char)canHandleRequest:(id)arg1 ;
@end

