

@class NSMutableSet;

@interface IGImagePreparer : NSObject {

	NSMutableSet* _decodedImagePrefetchUrlsSet;

}
-(void)decodeCachedImageForURL:(id)arg1 ;
-(void)decodeCachedImageForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
@end

