

@protocol FBCacheIndexFileDelegate <NSObject>
@required
-(void)cacheIndex:(id)arg1 writeFileWithName:(id)arg2 data:(id)arg3;
-(void)cacheIndex:(id)arg1 deleteFileWithName:(id)arg2;

@end

