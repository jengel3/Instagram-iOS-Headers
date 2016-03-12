

@interface IGFilteredImageStore : NSObject
+(void)clearStore;
+(id)cachedImageForImageName:(id)arg1 filterClass:(Class)arg2 ;
+(void)imageForImageName:(id)arg1 filterClass:(Class)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)filteredImageForImage:(id)arg1 filterClass:(Class)arg2 ;
+(id)diskStore;
+(id)keyForImageNamed:(id)arg1 filterClass:(Class)arg2 ;
+(char)containsImageForImageName:(id)arg1 filterClass:(Class)arg2 ;
+(id)queue;
+(id)cache;
+(void)clearCache;
@end

