
#import <Instagram/FBCacheIndexFileDelegate.h>

@protocol OS_dispatch_queue;
@class NSCache, FBCacheIndex, NSString, NSObject;

@interface FBDataDiskCache : NSObject <FBCacheIndexFileDelegate> {

	NSCache* _inMemoryCache;
	FBCacheIndex* _cacheIndex;
	NSString* _dataCachePath;
	NSObject*<OS_dispatch_queue> _fileQueue;

}

@property (assign,nonatomic) unsigned cacheSizeMemory; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> fileQueue;              //@synthesize fileQueue=_fileQueue - In the implementation block
@property (nonatomic,copy) NSString * dataCachePath;                                //@synthesize dataCachePath=_dataCachePath - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCache;
-(void)cacheIndex:(id)arg1 writeFileWithName:(id)arg2 data:(id)arg3 ;
-(void)cacheIndex:(id)arg1 deleteFileWithName:(id)arg2 ;
-(char)_doesFileExist:(id)arg1 ;
-(unsigned)cacheSizeMemory;
-(void)setCacheSizeMemory:(unsigned)arg1 ;
-(id)dataForURL:(id)arg1 ;
-(void)removeDataForUrl:(id)arg1 ;
-(void)removeDataForSession:(id)arg1 ;
-(void)setData:(id)arg1 forURL:(id)arg2 ;
-(NSString *)dataCachePath;
-(void)setDataCachePath:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)fileQueue;
@end

