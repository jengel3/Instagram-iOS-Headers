

@interface IGFilteredImageStore : NSObject
+(id)diskStore;
+(id)cachedImageForImageName:(id)arg1 filterClass:(Class)arg2 ;
+(id)filteredImageForImage:(id)arg1 filterClass:(Class)arg2 ;
+(id)keyForImageNamed:(id)arg1 filterClass:(Class)arg2 ;
+(void)clearStore;
+(void)imageForImageName:(id)arg1 filterClass:(Class)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
+(char)containsImageForImageName:(id)arg1 filterClass:(Class)arg2 ;
+(id)queue;
+(id)cache;
+(void)clearCache;
@end

